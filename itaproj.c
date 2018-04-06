#include<GL/glut.h>
#include<GL/glu.h>
#include<GL/gl.h>

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define user1 "mgmtmgmt"
#define pass1 "mgmt"
#define user2 "useruser"
#define pass2 "user"

struct place
{
	/* 0 = no bin = white
	1 = need bin = blue
	2 = ok bin = red
	3 = full bin = green */

GLfloat red;
GLfloat green;
GLfloat blue;

} bins[16];

void init()
{
	glClearColor(1,1,1,0);
	glClear(GL_COLOR_BUFFER_BIT);
	glMatrixMode(GL_PROJECTION);
	gluOrtho2D(-50,450,450,-50);
}

void keyboard(unsigned char key, int x, int y) 
{
	

}

void changecolor(int pos_x, int pos_y)
{
//top left
	if( (pos_x<60)&&(pos_x>40)&&(pos_y<60)&&(pos_y>40) )
	{
		glColor3f(bins[0].red, bins[0].green, bins[0].blue);
		glPointSize(10);
		glBegin(GL_POINTS);
		glVertex2f(50,50);
		glEnd();
    		glFlush();
	}
    if( (pos_x<120)&&(pos_x>100)&&(pos_y<60)&&(pos_y>40) )
	{
		glColor3f(bins[1].red, bins[1].green, bins[1].blue);
		glPointSize(10);
		glBegin(GL_POINTS);
		glVertex2f(110,50);
		glEnd();
    		glFlush();
	}
    if( (pos_x<120)&&(pos_x>100)&&(pos_y<120)&&(pos_y>100) )
	{
		glColor3f(bins[4].red, bins[4].green, bins[4].blue);
		glPointSize(10);
		glBegin(GL_POINTS);
		glVertex2f(110,110);
		glEnd();
    		glFlush();
	}
    if( (pos_x<60)&&(pos_x>40)&&(pos_y<120)&&(pos_y>100) )
	{
		glColor3f(bins[5].red, bins[5].green, bins[5].blue);
		glPointSize(10);
		glBegin(GL_POINTS);
		glVertex2f(50,110);
		glEnd();
    		glFlush();
	}
//top right
    if( (pos_x<160)&&(pos_x>140)&&(pos_y<60)&&(pos_y>40) )
	{
		glColor3f(bins[2].red, bins[2].green, bins[2].blue);
		glPointSize(10);
		glBegin(GL_POINTS);
		glVertex2f(150,50);
		glEnd();
    		glFlush();
	}
    if( (pos_x<220)&&(pos_x>200)&&(pos_y<60)&&(pos_y>40) )
	{
		glColor3f(bins[3].red, bins[3].green, bins[3].blue);
		glPointSize(10);
		glBegin(GL_POINTS);
		glVertex2f(210,50);
		glEnd();
    		glFlush();
	}
    if( (pos_x<220)&&(pos_x>200)&&(pos_y<120)&&(pos_y>100) )
	{
		glColor3f(bins[6].red, bins[6].green, bins[6].blue);
		glPointSize(10);
		glBegin(GL_POINTS);
		glVertex2f(210,110);
		glEnd();
    		glFlush();
	}
    if( (pos_x<160)&&(pos_x>140)&&(pos_y<120)&&(pos_y>100) )
	{
		glColor3f(bins[7].red, bins[7].green, bins[7].blue);
		glPointSize(10);
		glBegin(GL_POINTS);
		glVertex2f(150,110);
		glEnd();
    		glFlush();
	}
//bottom left
	if( (pos_x<60)&&(pos_x>40)&&(pos_y<160)&&(pos_y>140) )
	{
		glColor3f(bins[8].red, bins[8].green, bins[8].blue);
		glPointSize(10);
		glBegin(GL_POINTS);
		glVertex2f(50,150);
		glEnd();
    		glFlush();
	}
    if( (pos_x<120)&&(pos_x>100)&&(pos_y<160)&&(pos_y>140) )
	{
		glColor3f(bins[9].red, bins[9].green, bins[9].blue);
		glPointSize(10);
		glBegin(GL_POINTS);
		glVertex2f(110,150);
		glEnd();
    		glFlush();
	}
    if( (pos_x<120)&&(pos_x>100)&&(pos_y<220)&&(pos_y>200) )
	{
		glColor3f(bins[12].red, bins[12].green, bins[12].blue);
		glPointSize(10);
		glBegin(GL_POINTS);
		glVertex2f(110,210);
		glEnd();
    		glFlush();
	}
    if( (pos_x<60)&&(pos_x>40)&&(pos_y<220)&&(pos_y>200) )
	{
		glColor3f(bins[13].red, bins[13].green, bins[13].blue);
		glPointSize(10);
		glBegin(GL_POINTS);
		glVertex2f(50,210);
		glEnd();
    		glFlush();
	}
//bottom right
 if( (pos_x<160)&&(pos_x>140)&&(pos_y<160)&&(pos_y>140) )
	{
		glColor3f(bins[10].red, bins[10].green, bins[10].blue);
		glPointSize(10);
		glBegin(GL_POINTS);
		glVertex2f(150,150);
		glEnd();
    		glFlush();
	}
    if( (pos_x<220)&&(pos_x>200)&&(pos_y<160)&&(pos_y>140) )
	{
		glColor3f(bins[11].red, bins[11].green, bins[11].blue);
		glPointSize(10);
		glBegin(GL_POINTS);
		glVertex2f(210,150);
		glEnd();
    		glFlush();
	}
    if( (pos_x<220)&&(pos_x>200)&&(pos_y<220)&&(pos_y>200) )
	{
		glColor3f(bins[14].red, bins[14].green, bins[14].blue);
		glPointSize(10);
		glBegin(GL_POINTS);
		glVertex2f(210,210);
		glEnd();
    		glFlush();
	}
    if( (pos_x<160)&&(pos_x>140)&&(pos_y<220)&&(pos_y>200) )
	{
		glColor3f(bins[15].red, bins[15].green, bins[15].blue);
		glPointSize(10);
		glBegin(GL_POINTS);
		glVertex2f(150,210);
		glEnd();
    		glFlush();
	}
}

void processmouse(int button, int state, int pos_x, int pos_y)
{
	int binnum=16;
	pos_y = pos_y-50;
	pos_x = pos_x-50;

	if( (pos_x<60)&&(pos_x>40)&&(pos_y<60)&&(pos_y>40) ) binnum=0;
    if( (pos_x<120)&&(pos_x>100)&&(pos_y<60)&&(pos_y>40) ) binnum=1;
    if( (pos_x<120)&&(pos_x>100)&&(pos_y<120)&&(pos_y>100) ) binnum=4;
    if( (pos_x<60)&&(pos_x>40)&&(pos_y<120)&&(pos_y>100) ) binnum=5;
	
    if( (pos_x<160)&&(pos_x>140)&&(pos_y<60)&&(pos_y>40) ) binnum=2;
    if( (pos_x<220)&&(pos_x>200)&&(pos_y<60)&&(pos_y>40) ) binnum=3;
    if( (pos_x<220)&&(pos_x>200)&&(pos_y<120)&&(pos_y>100) ) binnum=6;
    if( (pos_x<160)&&(pos_x>140)&&(pos_y<120)&&(pos_y>100) ) binnum=7;

	if( (pos_x<60)&&(pos_x>40)&&(pos_y<160)&&(pos_y>140) ) binnum=8;
    if( (pos_x<120)&&(pos_x>100)&&(pos_y<160)&&(pos_y>140) ) binnum=9;
    if( (pos_x<120)&&(pos_x>100)&&(pos_y<220)&&(pos_y>200) ) binnum=12;
    if( (pos_x<60)&&(pos_x>40)&&(pos_y<220)&&(pos_y>200) ) binnum=13;

	if( (pos_x<160)&&(pos_x>140)&&(pos_y<160)&&(pos_y>140) ) binnum=10;
    if( (pos_x<220)&&(pos_x>200)&&(pos_y<160)&&(pos_y>140) ) binnum=11;
    if( (pos_x<220)&&(pos_x>200)&&(pos_y<220)&&(pos_y>200) ) binnum=14;
    if( (pos_x<160)&&(pos_x>140)&&(pos_y<220)&&(pos_y>200) ) binnum=15;
    
	if (state == GLUT_DOWN) 
	if (button == GLUT_LEFT_BUTTON)
	{
		bins[binnum].red=0.0;
		bins[binnum].green=1.0;
		bins[binnum].blue=0.0;
		changecolor(pos_x,pos_y);
	}
	else 
	{
		printf("not allowed\n");
		
	}
	glFlush();
}

void map()
{
//roads
	glBegin(GL_LINES);
	
	glColor3f(0, 0, 0);
	glVertex2f(0,60);
	glVertex2f(60,60);
	
	glColor3f(0, 0, 0);
	glVertex2f(60,60);
	glVertex2f(60,0);
//	
	glColor3f(0, 0, 0);
	glVertex2f(0,100);
	glVertex2f(60,100);
	
	glColor3f(0, 0, 0);
	glVertex2f(60,160);
	glVertex2f(60,100);
	
	glColor3f(0, 0, 0);
	glVertex2f(60,160);
	glVertex2f(0,160);
//	
	glColor3f(0, 0, 0);
	glVertex2f(0,200);
	glVertex2f(60,200);
	
	glColor3f(0, 0, 0);
	glVertex2f(100,0);
	glVertex2f(100,60);
//	
	glColor3f(0, 0, 0);
	glVertex2f(100,60);
	glVertex2f(160,60);
	
	glColor3f(0, 0, 0);
	glVertex2f(160,0);
	glVertex2f(160,60);
	
	glColor3f(0, 0, 0);
	glVertex2f(60,260);
	glVertex2f(60,200);
//
	glColor3f(0, 0, 0);
	glVertex2f(100,100);
	glVertex2f(100,160);
	
	glColor3f(0, 0, 0);
	glVertex2f(100,160);
	glVertex2f(160,160);

	glColor3f(0, 0, 0);
	glVertex2f(160,160);
	glVertex2f(160,100);

	glColor3f(0, 0, 0);
	glVertex2f(160,100);
	glVertex2f(100,100);
//
	glColor3f(0, 0, 0);
	glVertex2f(100,260);
	glVertex2f(100,200);

	glColor3f(0, 0, 0);
	glVertex2f(100,200);
	glVertex2f(160,200);

	glColor3f(0, 0, 0);
	glVertex2f(160,200);
	glVertex2f(160,260);
//
	glColor3f(0, 0, 0);
	glVertex2f(200,0);
	glVertex2f(200,60);

	glColor3f(0, 0, 0);
	glVertex2f(260,60);
	glVertex2f(200,60);
//
	glColor3f(0, 0, 0);
	glVertex2f(260,100);
	glVertex2f(200,100);

	glColor3f(0, 0, 0);
	glVertex2f(200,100);
	glVertex2f(200,160);

	glColor3f(0, 0, 0);
	glVertex2f(200,160);
	glVertex2f(260,160);
//
	glColor3f(0, 0, 0);
	glVertex2f(260,200);
	glVertex2f(200,200);
	
	glColor3f(0, 0, 0);
	glVertex2f(200,200);
	glVertex2f(200,260);

	glEnd();
//PUBLIC DUSTBIN on map
	glPointSize(10);
	glBegin(GL_POINTS);

	glColor3f(1, 0, 0);

	glVertex2f(50,50);	glColor3f(1, 1, 1);
	glVertex2f(110,50);
	glVertex2f(110,110);
	glVertex2f(50,110);	

    glColor3f(1, 0, 0);
	
	glVertex2f(150,50);	glColor3f(1, 1, 1);
	glVertex2f(210,50);
	glVertex2f(210,110);
	glVertex2f(150,110);	

    glColor3f(1, 0, 0);
	
	glVertex2f(50,150);	glColor3f(1, 1, 1);
	glVertex2f(110,150);
	glVertex2f(110,210);
	glVertex2f(50,210);	

    glColor3f(1, 0, 0);
	
	glVertex2f(150,150);	glColor3f(1, 1, 1);
	glVertex2f(210,150);
	glVertex2f(210,210);
	glVertex2f(150,210);
//
	glEnd();
	glFlush();
}

int login()
{
	char user[4], pass[4];

	printf("enter username \n");
	gets(user);
	printf("enter password \n");
	gets(pass);

	if(strcmp(user,user1)==0 && strcmp(pass,pass1)==0)
	{
		return 1;
	}
	else if(strcmp(user,user2)==0 && strcmp(pass,pass2)==0)
	{
		return 2;
	}
	else
		return 0;	
}

void mgmt()
{
	//display map
	//display option to move the public dustbin
	//display litter meter by shade on map if possible
}

void user()
{
	int ch=1, ch1;
	while(ch<5)
	{	
		printf("\nWould you like to:\n 1:Place an Order \n 2:Report Litter in an area \n 3:Read information about Waste Management\n 4:Logout \n" );
	
		scanf("%d",&ch);
	
		if(ch==1)
		{
			printf("\nDo you need\n 1:Home Dustbin Pickup \n 2:Dustbin Bags\n 3:New Dustbin\n");
			
			scanf("%d",&ch1);
			if(ch1==1)
			{
				//opengl position on map
			}
			else if(ch==2)
			{
				//opengl position on map
			}
			else if(ch==3)
			{
				//opengl position on map
			}
			else 
			{
				printf("Invalid choice\n");
			}
		}
		else if(ch==2)
		{
			//opengl position on map
		}
		else if(ch==3)
		{
			//open file about waste management
		}
		else if(ch==4)
		{
			//close opengl window
			break;
		}
		else printf("Invalid choice\n");
	}
}

void main(int argc, char** argv)
{
	int log;
	log = login();
	if (log == 1)
	{
		printf("Login to Management success\n");
		mgmt();
	}
	else if (log == 2)
	{
		printf("Login to Users success\n");
		user();
	}
	else if (log == 0)
	{
		printf("ERROR LOGIN\n");
		exit(0);
	}

	printf("\nEXITED\n");

	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGB|GLUT_SINGLE);
	glutInitWindowSize(500,500);
	
	glutInitWindowPosition(50,50);
	glutCreateWindow("Garbage Map");
	glutDisplayFunc(map);	
    	
	init();
	glutMouseFunc(processmouse);
	glutKeyboardFunc(keyboard);

	glutMainLoop();
}
