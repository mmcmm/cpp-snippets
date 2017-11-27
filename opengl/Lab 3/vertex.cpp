
#include "stdafx.h"
#include <gl/freeglut.h>
void Display(void)
{
glClear(GL_COLOR_BUFFER_BIT);
glColor3f(0, 1, 0);
glBegin(GL_LINES);
// Cadran 1
for (int i = 0; i<20; i++)
{
glVertex3f(0, 0, 0);
glVertex3f(1 - i / 20.0, i / 20.0, 0);
} // Cadran 2
glColor3f(1, 0.4, 0);
for (int i = 0; i<20; i++)
{
glVertex3f(0, 0, 0);
glVertex3f(-1 + i / 20.0, i / 20.0, 0);
} // Cadran 3
glColor3f(1, 0.4, 1);
for (int i = 0; i<20; i++)
{
glVertex3f(0, 0, 0);
glVertex3f(-1 + i / 20.0, -i / 20.0, 0);
}
// Cadran 4
glColor3f(0.8, 0.4, 0.2);
for (int i = 0; i<20; i++)
{
glVertex3f(0, 0, 0);
glVertex3f(1 - i / 20.0, -i / 20.0, 0);
}
glEnd();    glFlush();  glColor3f(0, 0, 1);
}
int main(int argc, char** argv) {
glutInit(&argc, argv);
glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);//se specifica modelul de culoare al ferestrei: un singur buffer si culoare RGB
glutCreateWindow("laborator 3");
glutDisplayFunc(Display);
glutMainLoop();
return 0;
}
 


 
 
#include "stdafx.h"
#include <gl/freeglut.h>
#include<math.h>

void roteste(int p_grade)
{
	glTranslatef(1, 1, 0);
	glRotatef(p_grade, 0.0, 0, 1.0);
	glTranslatef(-1, -1, 0);
}



void OnMouseClick(int button, int state, int x, int y)
{
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		roteste(10);
	}
	if (button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN)
	{
		roteste(-10);
	}
}

void rotatie(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_POLYGON);//roz
	glColor3f(1, 0, 1);
	glVertex3f(0, 0, 0);
	glVertex3f(1, 0, 0);
	glVertex3f(0, 1, 0);
	glVertex3f(-1, 1 / 2., 0);
	glVertex3f(0, -1, 0);
	glEnd();

	glBegin(GL_TRIANGLES);
	glColor3f(0, 1, 1);
	glVertex3f(0, 1, 0);
	glVertex3f(1, 1, 0);
	glVertex3f(1, 0, 0);
	glEnd();
	glBegin(GL_TRIANGLES);//albastru
	glColor3f(0, 0.5, 1);
	glVertex3f(-1, 1 / 2., 0);
	glVertex3f(-1, 1, 0);
	glVertex3f(0, 1, 0);
	glEnd();
	glBegin(GL_TRIANGLES);//verde
	glColor3f(0, 0.5, .5);
	glVertex3f(-1, 1 / 2., 0);
	glVertex3f(-1, -1, 0);
	glVertex3f(0, -1, 0);
	glEnd();
	glBegin(GL_POLYGON);//galben
	glColor3f(1, 1, 0);
	glVertex3f(0, 0, 0);
	glVertex3f(1, 0, 0);
	glVertex3f(1, -1, 0);
	glVertex3f(0, -1, 0);
	glEnd();
	glFlush();
}
int main(int argc, char** argv)
{

	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutCreateWindow("Rotatie_tastatura_mouse");
	glutDisplayFunc(rotatie);
	
	glutMouseFunc(OnMouseClick);
	glutMainLoop();
	return 0;
}