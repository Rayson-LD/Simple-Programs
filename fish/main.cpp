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
	gluOrtho2D(0,200,0,200);
}

void mydisplay()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0.0,0.0,1.0); //blue
	glBegin(GL_POLYGON);
	glVertex2f(50,120); //rectangle
	glVertex2f(140,120);
	glVertex2f(140,70);
	glVertex2f(50,70);
	glEnd();
	glColor3f(1.0,0.5,0.0);
	glBegin(GL_POLYGON);//face
	glVertex2f(160,95);
	glVertex2f(140,120);
	glVertex2f(140,70);
	glEnd();
	glColor3f(1.0,0.5,0.0);
	glBegin(GL_POLYGON);//face back
	glVertex2f(130,95);
	glVertex2f(140,120);
	glVertex2f(140,70);
	glEnd();
	glColor3f(0.0,0.0,0.0);
	glBegin(GL_POLYGON);
	glVertex2f(150,95); //eye
	glVertex2f(150,100);
	glVertex2f(155,98);
	glEnd();
	glColor3f(0.0,0.0,0.0);
	glBegin(GL_LINES);
	glVertex2f(153,80); //mouth
	glVertex2f(145,90);
	glVertex2f(40,80);//plate 1 horizontal
	glVertex2f(135,80);
	glVertex2f(40,90);//plate 2 horizontal
	glVertex2f(132,90);
	glVertex2f(40,100);//plate 3 horizontal
	glVertex2f(132,100);
	glVertex2f(40,110);//plate 4 horizontal
	glVertex2f(135,110);
	glVertex2f(65,70);//plate 1 vertical
	glVertex2f(65,120);
	glVertex2f(75,70);//plate 2 vertical
	glVertex2f(75,120);
	glVertex2f(85,70);//plate 3 vertical
	glVertex2f(85,120);
	glVertex2f(95,70);//plate 4 vertical
	glVertex2f(95,120);
	glVertex2f(105,70);//plate 4 vertical
	glVertex2f(105,120);
	glVertex2f(115,70);//plate 5 vertical
	glVertex2f(115,120);
	glVertex2f(125,70);//plate 6 vertical
	glVertex2f(125,120);
	glVertex2f(55,70);//plate 7 vertical
	glVertex2f(55,120);
	glEnd();
	glColor3f(0.0,0.0,1.0);
	glBegin(GL_POLYGON);//tail body
	glVertex2f(40,95);
	glVertex2f(50,120);
	glVertex2f(50,70);
	glEnd();
	glColor3f(1.0,0.5,0.0);
	glBegin(GL_POLYGON);//upper tail fin
	glVertex2f(40,95);
	glVertex2f(50,120);
	glVertex2f(20,140);
	glEnd();
	glColor3f(1.0,0.5,0.0);
	glBegin(GL_POLYGON);//lower tail fin
	glVertex2f(40,95);
	glVertex2f(50,70);
	glVertex2f(20,50);
	glEnd();
	glColor3f(1.0,0.5,0.0);
	glBegin(GL_POLYGON);//upper fin
	glVertex2f(85,140);
	glVertex2f(105,120);
	glVertex2f(85,120);
	glEnd();
	glColor3f(1.0,0.5,0.0);
	glBegin(GL_POLYGON);//lower fin
	glVertex2f(85,50);
	glVertex2f(105,70);
	glVertex2f(85,70);
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


