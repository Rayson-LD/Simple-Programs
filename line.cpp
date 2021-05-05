#include<gl/glut.h>

void init()
{
	glClearColor(0.0,0.0,1.0,0.0); //blue
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0,200,0,100);
}

void mydisplay()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1.0,1.0,1.0); //White
	glBegin(GL_LINES); 
	glVertex2f(40,30);
	glVertex2f(100,80);
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
