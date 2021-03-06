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
	glClearColor(1.0,1.0,1.0,1.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0,120,0,120);
}

void mydisplay()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0.0,0.0,1.0);
	glBegin(GL_POLYGON);
	glVertex2f(45,32);
	glVertex2f(45,63);
	glVertex2f(75,63);
	glVertex2f(75,32);
	glEnd();

	glColor3f(1.0,0.0,0.0);
	glBegin(GL_POLYGON);
	glVertex2f(45,63);
	glVertex2f(60,93);
	glVertex2f(75,63);
	glEnd();

	glColor3f(0.0,1.0,0.0);
	glBegin(GL_POLYGON);
	glVertex2f(12,10);
	glVertex2f(12,32);
	glVertex2f(110,32);
	glVertex2f(110,10);
	glEnd();

	glFlush();
}

int main(int argc,char **argv)
{
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
	glutInitWindowSize(400,500);
	glutInitWindowPosition(50,50);
	glutCreateWindow("Rayson House program");
	init();
	glutDisplayFunc(mydisplay);
	glutMainLoop();
	return(0);
}
