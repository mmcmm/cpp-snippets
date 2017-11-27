 
#include "stdafx.h"
#include <gl/freeglut.h>
#include<math.h>
#include<stdio.h>
#include <stdlib.h>


void init()
{
	glClearColor(0.0, 0.0, 0.0, 0.0);
	glPointSize(50.0);
	glShadeModel(GL_FLAT);
}
void display()
{
	glClear(GL_COLOR_BUFFER_BIT);

	glBegin(GL_TRIANGLES);
	glColor3f(1.0, 0.0, 0.0);
	glVertex2i(1, 0);
	glVertex2i(0, 0);
	glVertex2i(0, 1);
	glEnd();

	glPointSize(1.0);
	glColor3f(1, 1, 1);
	glBegin(GL_POINTS);
	for (int i = 0; i<1000; ++i)
	{
		glVertex3f(cos(2 * 3.14159*i / 1000.0), sin(2 * 3.14159*i / 1000.0), 0);
	}
	glEnd();

	glFlush();
}
int meniu_1, meniu_2, meniu_3, meniu_main;

void meniu_principal(int key)
{
	if (key == 0)
	{
		exit(0);
	}
}

void callback_1(int key)
{
	switch (key)
	{
	case 0:
		printf("Cerc 1\n");
		break;
	case 1:
		printf("Cerc 2\n");
		break;
	}
}

void callback_2(int key)
{
	switch (key)
	{
	case 0:
		printf("Ati selectat dreptunghi 1\n");
		break;
	case 1:
		printf("Ati selectat dreptunghi 2\n");
		break;
	}
}

void callback_3(int key)
{
	switch (key)
	{
	case 0:
		printf("Ati selectat triunghi 1\n");
		break;
	case 1:
		printf("Ati selectat triunghi 2\n");
		break;

	}
}
GLint x = 10;
GLint y = 20;
GLint WindowWidth = 400;
GLint WindowHight = 400;

void mouseHandler(int button, int state, int mouse_x, int mouse_y)
{
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		x = mouse_x;
		y = WindowHight - mouse_y;
		glColor3f(1, 0, 0);
		glBegin(GL_POINTS);
		glVertex2i(x, y);
		printf("x=%d , y=%d \n", x, y);
		glEnd();
		glFlush();
		glClear(GL_COLOR_BUFFER_BIT);
	}
}
int main(int argc, char** argv)
{

	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(400, 400);
	glutInitWindowPosition(400, 100);
	glutCreateWindow("aplicatii");
	init();
	glutMouseFunc(mouseHandler);

	glutDisplayFunc(display);
	meniu_1 = glutCreateMenu(callback_1);
	glutAddMenuEntry("cerc1", 0);
	glutAddMenuEntry("cerc2", 1);
	meniu_2 = glutCreateMenu(callback_2);
	glutAddMenuEntry("dreptunghi1", 0);
	glutAddMenuEntry("dreptunghi2", 1);
	meniu_3 = glutCreateMenu(callback_3);
	glutAddMenuEntry("triunghi1", 0);
	glutAddMenuEntry("triunghi2", 1);

	meniu_main = glutCreateMenu(meniu_principal);
	glutAddSubMenu("cerc", meniu_1);
	glutAddSubMenu("patrat", meniu_2);
	glutAddSubMenu("triunghi", meniu_3);
	glutAddMenuEntry("Exit", 0);
	glutAttachMenu(GLUT_RIGHT_BUTTON);

	glutMainLoop();

	return 0;
}