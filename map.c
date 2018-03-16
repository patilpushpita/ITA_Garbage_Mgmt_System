#include<GL/glut.h>
#include<GL/glu.h>
#include<GL/gl.h>

#include<stdio.h>

GLfloat red = 0.0;
GLfloat green = 0.0;
GLfloat blue = 1.0;

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
		glColor3f(red,green,blue);
		glPointSize(10);
		glBegin(GL_POINTS);
		glVertex2f(50,50);
		glEnd();
    		glFlush();
	}
    if( (pos_x<120)&&(pos_x>100)&&(pos_y<60)&&(pos_y>40) )
	{
		glColor3f(red,green,blue);
		glPointSize(10);
		glBegin(GL_POINTS);
		glVertex2f(110,50);
		glEnd();
    		glFlush();
	}
    if( (pos_x<120)&&(pos_x>100)&&(pos_y<120)&&(pos_y>100) )
	{
		glColor3f(red,green,blue);
		glPointSize(10);
		glBegin(GL_POINTS);
		glVertex2f(110,110);
		glEnd();
    		glFlush();
	}
    if( (pos_x<60)&&(pos_x>40)&&(pos_y<120)&&(pos_y>100) )
	{
		glColor3f(red,green,blue);
		glPointSize(10);
		glBegin(GL_POINTS);
		glVertex2f(50,110);
		glEnd();
    		glFlush();
	}
//top right
    if( (pos_x<160)&&(pos_x>140)&&(pos_y<60)&&(pos_y>40) )
	{
		glColor3f(red,green,blue);
		glPointSize(10);
		glBegin(GL_POINTS);
		glVertex2f(150,50);
		glEnd();
    		glFlush();
	}
    if( (pos_x<220)&&(pos_x>200)&&(pos_y<60)&&(pos_y>40) )
	{
		glColor3f(red,green,blue);
		glPointSize(10);
		glBegin(GL_POINTS);
		glVertex2f(210,50);
		glEnd();
    		glFlush();
	}
    if( (pos_x<220)&&(pos_x>200)&&(pos_y<120)&&(pos_y>100) )
	{
		glColor3f(red,green,blue);
		glPointSize(10);
		glBegin(GL_POINTS);
		glVertex2f(210,110);
		glEnd();
    		glFlush();
	}
    if( (pos_x<160)&&(pos_x>140)&&(pos_y<120)&&(pos_y>100) )
	{
		glColor3f(red,green,blue);
		glPointSize(10);
		glBegin(GL_POINTS);
		glVertex2f(150,110);
		glEnd();
    		glFlush();
	}
//bottom left
 if( (pos_x<60)&&(pos_x>40)&&(pos_y<160)&&(pos_y>140) )
	{
		glColor3f(red,green,blue);
		glPointSize(10);
		glBegin(GL_POINTS);
		glVertex2f(50,150);
		glEnd();
    		glFlush();
	}
    if( (pos_x<120)&&(pos_x>100)&&(pos_y<160)&&(pos_y>140) )
	{
		glColor3f(red,green,blue);
		glPointSize(10);
		glBegin(GL_POINTS);
		glVertex2f(110,150);
		glEnd();
    		glFlush();
	}
    if( (pos_x<120)&&(pos_x>100)&&(pos_y<220)&&(pos_y>200) )
	{
		glColor3f(red,green,blue);
		glPointSize(10);
		glBegin(GL_POINTS);
		glVertex2f(110,210);
		glEnd();
    		glFlush();
	}
    if( (pos_x<60)&&(pos_x>40)&&(pos_y<220)&&(pos_y>200) )
	{
		glColor3f(red,green,blue);
		glPointSize(10);
		glBegin(GL_POINTS);
		glVertex2f(50,210);
		glEnd();
    		glFlush();
	}
//bottom right
 if( (pos_x<160)&&(pos_x>140)&&(pos_y<160)&&(pos_y>140) )
	{
		glColor3f(red,green,blue);
		glPointSize(10);
		glBegin(GL_POINTS);
		glVertex2f(150,150);
		glEnd();
    		glFlush();
	}
    if( (pos_x<220)&&(pos_x>200)&&(pos_y<160)&&(pos_y>140) )
	{
		glColor3f(red,green,blue);
		glPointSize(10);
		glBegin(GL_POINTS);
		glVertex2f(210,150);
		glEnd();
    		glFlush();
	}
    if( (pos_x<220)&&(pos_x>200)&&(pos_y<220)&&(pos_y>200) )
	{
		glColor3f(red,green,blue);
		glPointSize(10);
		glBegin(GL_POINTS);
		glVertex2f(210,210);
		glEnd();
    		glFlush();
	}
    if( (pos_x<160)&&(pos_x>140)&&(pos_y<220)&&(pos_y>200) )
	{
		glColor3f(red,green,blue);
		glPointSize(10);
		glBegin(GL_POINTS);
		glVertex2f(150,210);
		glEnd();
    		glFlush();
	}
}

void processmouse(int button, int state, int pos_x, int pos_y)
{
	pos_y = pos_y-50;
	pos_x = pos_x-50;
	if (state == GLUT_DOWN) 
	if (button == GLUT_LEFT_BUTTON)
	{
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

void main(int argc, char** argv)
{
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
