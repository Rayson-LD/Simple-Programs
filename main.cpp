#ifdef _APPLE_
#else
#include<windows.h>
#include<GL/glut.h>
#endif
#include<stdlib.h>
#include<time.h>
#include<string.h>
#include<iostream>
#include<math.h>
#include <stdio.h>

void init()
{
	glClearColor(0.0,0.0,0.0,0.0); //background
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0,100,0,100);
}

void mydisplay()
{
	glClear(GL_COLOR_BUFFER_BIT);

	glColor3f(1.0,0.0,0.0); //1st triangle
	glBegin(GL_POLYGON);
	glVertex2f(50,68);
	glVertex2f(40,60);
	glVertex2f(50,60);
	glEnd();
	glColor3f(1.0,1.0,0.0); //2nd triangle
	glBegin(GL_POLYGON);
	glVertex2f(50,68);
	glVertex2f(60,60);
	glVertex2f(50,60);
	glEnd();
	glColor3f(0.0,0.0,1.0); //3rd triangle
	glBegin(GL_POLYGON);
	glVertex2f(50,40);
	glVertex2f(40,60);
	glVertex2f(50,60);
	glEnd();
	glColor3f(0.0,1.0,0.0); //4th triangle
	glBegin(GL_POLYGON);
	glVertex2f(50,40);
	glVertex2f(60,60);
	glVertex2f(50,60);
	glEnd();
	glColor3f(0.0,1.0,1.0); //left line
	glBegin(GL_LINES);
	glVertex2f(50,40);
	glVertex2f(45,33);
	glEnd();
	glColor3f(0.0,1.0,1.0); //right line
	glBegin(GL_LINES);
	glVertex2f(50,40);
	glVertex2f(55,33);
	glEnd();
	glFlush();
}

int main(int argc,char **argv)
{
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
	glutInitWindowSize(400,500);
	glutInitWindowPosition(50,50);
	glutCreateWindow("Rayson Kite Program");
	init();
	glutDisplayFunc(mydisplay);
	glutMainLoop();
	return(0);
}
