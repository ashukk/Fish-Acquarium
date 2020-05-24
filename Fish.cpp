#include<stdio.h>
#include<GL/glut.h>
#include<math.h>

float a = 0, b = 0, e = 0, f = 0;

void fish1()
{
	glColor3f(0.0, 1.0, 0.0);//red fish
	glBegin(GL_POLYGON);
	glVertex2f(0.7 + a, 0.05);
	glVertex2f(0.75 + a, 0.1);
	glVertex2f(0.85 + a, 0.05);
	glVertex2f(0.75 + a, 0.0);
	glEnd();

	glBegin(GL_TRIANGLES);
	glColor3f(0.0, 0.0, 1.0);
	glVertex2f(0.83 + a, 0.05);
	glColor3f(0.0, 0.0, 1.0);
	glVertex2f(0.9 + a, 0.09);
	glVertex2f(0.9 + a, 0.01);
	glEnd();

	glBegin(GL_TRIANGLES);
	glColor3f(1.0, 1.0, 0.0);
	glVertex2f(0.75 + a, 0.095);
	glColor3f(1.0, 0.0, 0.0);
	glVertex2f(0.79 + a, 0.125);
	glVertex2f(0.77 + a, 0.07);
	glEnd();

	glBegin(GL_TRIANGLES);
	glColor3f(1.0, 1.0, 0.0);
	glVertex2f(0.75 + a, 0.007);
	glColor3f(1.0, 0.0, 0.0);
	glVertex2f(0.795 + a, -0.035);
	glVertex2f(0.77 + a, 0.02);
	glEnd();

	glColor3f(0.0, 0.0, 0.0);
	glPointSize(4.0);
	glBegin(GL_POINTS);
	glVertex2f(0.73 + a, 0.065);
	glEnd();

}

void fish2()
{
	glColor3f(1.0, 1.0, 0.0);//yellow fish
	glBegin(GL_POLYGON);
	glVertex2f(-0.7 - b, -0.05);
	glVertex2f(-0.75 - b, -0.1);
	glVertex2f(-0.85 - b, -0.05);
	glVertex2f(-0.75 - b, 0.0);
	glEnd();

	glBegin(GL_TRIANGLES);
	glColor3f(0.8, 0.5, 0.0);
	glVertex2f(-0.83 - b, -0.05);
	glVertex2f(-0.9 - b, -0.09);
	glVertex2f(-0.9 - b, -0.01);
	glEnd();

	glBegin(GL_TRIANGLES);
	glColor3f(0.8, 0.5, 0.0);
	glVertex2f(-0.75 - b, -0.095);
	glVertex2f(-0.79 - b, -0.125);
	glVertex2f(-0.77 - b, -0.07);
	glEnd();

	glBegin(GL_TRIANGLES);
	glColor3f(0.8, 0.5, 0.0);
	glVertex2f(-0.75 - b, -0.007);
	glVertex2f(-0.795 - b, 0.035);
	glVertex2f(-0.77 - b, -0.02);
	glEnd();

	glColor3f(0.0, 0.0, 0.0);
	glPointSize(4.0);
	glBegin(GL_POINTS);
	glVertex2f(-0.73 - b, -0.035);
	glEnd();
}


void fish3()
{
	glColor3f(0.0, 0.4, 1.0);//blue fish
	glBegin(GL_POLYGON);
	glVertex2f(-0.7 - e, -0.25);
	glVertex2f(-0.75 - e, -0.3);
	glVertex2f(-0.775 - e, -0.3);
	glVertex2f(-0.85 - e, -0.25);
	glVertex2f(-0.775 - e, -0.2);
	glVertex2f(-0.75 - e, -0.2);
	glEnd();

	glBegin(GL_TRIANGLES);
	glVertex2f(-0.83 - e, -0.25);
	glVertex2f(-0.9 - e, -0.29);
	glVertex2f(-0.9 - e, -0.21);
	glEnd();

	glBegin(GL_TRIANGLES);
	glVertex2f(-0.775 - e, -0.2);
	glVertex2f(-0.79 - e, -0.125);
	glVertex2f(-0.75 - e, -0.2);
	glEnd();

	glBegin(GL_TRIANGLES);
	glVertex2f(-0.75 - e, -0.3);
	glVertex2f(-0.795 - e, -0.35);
	glVertex2f(-0.775 - e, -0.3);
	glEnd();

	glColor3f(0.0, 0.0, 0.0);
	glPointSize(4.0);
	glBegin(GL_POINTS);
	glVertex2f(-0.73 - e, -0.235);
	glEnd();
}


void fish4()
{
	glColor3f(1.0, 0.0, 0.0);//red1 fish
	glBegin(GL_POLYGON);
	glVertex2f(0.7 + f, 0.25);
	glVertex2f(0.75 + f, 0.3);
	glVertex2f(0.775 + f, 0.3);
	glVertex2f(0.85 + f, 0.25);
	glVertex2f(0.775 + f, 0.2);
	glVertex2f(0.75 + f, 0.2);
	glEnd();

	glBegin(GL_TRIANGLES);
	glVertex2f(0.83 + f, 0.25);
	glVertex2f(0.9 + f, 0.29);
	glVertex2f(0.9 + f, 0.21);
	glEnd();

	glBegin(GL_TRIANGLES);
	glVertex2f(0.775 + f, 0.3);
	glVertex2f(0.79 + f, 0.4);
	glVertex2f(0.75 + f, 0.3);
	glEnd();

	glBegin(GL_TRIANGLES);
	glVertex2f(0.775 + f, 0.2);
	glVertex2f(0.79 + f, 0.1);
	glVertex2f(0.75 + f, 0.2);
	glEnd();

	glColor3f(0.0, 0.0, 0.0);
	glPointSize(4.0);
	glBegin(GL_POINTS);
	glVertex2f(0.73 + f, 0.265);
	glEnd();

}

///PLANTS
void plant()
{
	glColor3f(0.0, 1.0, 0.0);
	glLineWidth(4.0);
	glBegin(GL_LINES);
	glVertex2f(0.9, -0.8);
	glVertex2f(0.8, -0.9);
	glVertex2f(0.8, -0.8);
	glVertex2f(0.8, -0.9);
	glVertex2f(0.7, -0.8);
	glVertex2f(0.8, -0.9);
	glEnd();


	glLineWidth(4.0);
	glBegin(GL_LINES);
	glVertex2f(0.5, -0.95);
	glVertex2f(0.6, -0.85);
	glVertex2f(0.5, -0.85);
	glVertex2f(0.5, -0.95);
	glVertex2f(0.4, -0.85);
	glVertex2f(0.5, -0.95);
	glEnd();

	glLineWidth(4.0);
	glBegin(GL_LINES);
	glVertex2f(0.175, -0.9);
	glVertex2f(0.275, -0.8);
	glVertex2f(0.175, -0.8);
	glVertex2f(0.175, -0.9);
	glVertex2f(0.075, -0.8);
	glVertex2f(0.175, -0.9);
	glEnd();

	glLineWidth(4.0);
	glBegin(GL_LINES);
	glVertex2f(-0.175, -0.95);
	glVertex2f(-0.275, -0.85);
	glVertex2f(-0.175, -0.85);
	glVertex2f(-0.175, -0.95);
	glVertex2f(-0.075, -0.85);
	glVertex2f(-0.175, -0.95);
	glEnd();

	glLineWidth(4.0);
	glBegin(GL_LINES);
	glVertex2f(-0.475, -0.9);
	glVertex2f(-0.575, -0.8);
	glVertex2f(-0.475, -0.9);
	glVertex2f(-0.475, -0.8);
	glVertex2f(-0.375, -0.8);
	glVertex2f(-0.475, -0.9);
	glEnd();

	glLineWidth(4.0);
	glBegin(GL_LINES);
	glVertex2f(-0.9, -0.85);
	glVertex2f(-0.8, -0.95);
	glVertex2f(-0.8, -0.85);
	glVertex2f(-0.8, -0.95);
	glVertex2f(-0.7, -0.85);
	glVertex2f(-0.8, -0.95);
	glEnd();

}

void myinit()
{
	glClearColor(0.4, 1.0, 1.0, 0.0);
	glColor3f(1.0, 1.0, 0.0);
}

void display(void)
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glColor3f(1.0, 0.0, 0.0);
	glPointSize(2.0);

	///fishes called
	fish1();
	fish2();
	fish3();
	fish4();

	///plant
	plant();

	glutPostRedisplay();
	//glFlush();

	glutSwapBuffers();
}

void movered(void)
{

	if (f >= -1.99)
		f = f - 0.0002;
	else
		f = 0;

}

void movegreen(void)
{
	if (a >= -1.99)
		a = a - 0.0002;
	else
		a = 0;
}

void moveyellow(void)
{
	if (b >= -1.99)
		b = b - 0.0002;
	else
		b = 0;
}

void moveblue(void)
{
	if (e >= -1.99)
		e = e - 0.0002;
	else
		e = 0;
}

void menu(int id)
{
	switch (id)
	{
	case 1: glutIdleFunc(movered);
		    break;

	case 2: glutIdleFunc(movegreen);
		    break;

	case 3: glutIdleFunc(moveyellow);
		    break;

	case 4: glutIdleFunc(moveblue);
		    break;

	case 5:exit(0);
	}
}
int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
	glutInitWindowPosition(0, 0);
	glutInitWindowSize(500, 500);
	glutCreateWindow("fish");
	myinit();
	glutDisplayFunc(display);
	//click interface
	glutCreateMenu(menu);
	glutAddMenuEntry("Red Fish", 1);
	glutAddMenuEntry("Green Fish", 2);
	glutAddMenuEntry("Yellow Fish", 3);
	glutAddMenuEntry("Blue Fish", 4);
	glutAddMenuEntry("Quit", 5);
	glutAttachMenu(GLUT_RIGHT_BUTTON);
	glutMainLoop();
	return 0;
}
