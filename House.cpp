#include<gl/glut.h>

void init()
{
	glClearColor(0.0,1.0,0.0,0.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0,100,0,100);
}

void mydisplay()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0.0,0.0,1.0); //blue
	glBegin(GL_POLYGON); //wall
	glVertex2f(20,10);
	glVertex2f(20,50);
	glVertex2f(80,50);
	glVertex2f(80,10);
	glEnd();

	glColor3f(1.0,1.0,0.0); //yellow
	glBegin(GL_POLYGON);  //roof
	glVertex2f(20,50);
	glVertex2f(50,70);
	glVertex2f(80,50);
	glEnd();

	glColor3f(1.0,0.0,0.0); //red
	glBegin(GL_POLYGON); //door
	glVertex2f(40,10);
	glVertex2f(40,30);
	glVertex2f(60,30);
	glVertex2f(60,10);
	glEnd();

	glFlush();
}

int main(int argc,char **argv)
{
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
	glutInitWindowSize(400,500);
	glutInitWindowPosition(50,50);
	glutCreateWindow("Line Program");
	init();
	glutDisplayFunc(mydisplay);
	glutMainLoop();
	return(0);
}
