#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

#include <stdlib.h>

void init()
{
    glClearColor(0.0, 0.0, 0.0, 0.0); //glPointSize(40.0);
}

void display()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(1.0, 1.0, 0.0);
    glBegin(GL_POLYGON);
    glVertex2f(0.0, 0.0);
    glVertex2f(200.0, 0.0);
    glVertex2f(200.0, 200.0);
    glVertex2f(0.0, 200.0);
    glEnd();
    glColor3f(1.0, 0.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(200.0, 0.0);
    glVertex2f(400.0, 0.0);
    glVertex2f(400.0, 200.0);
    glVertex2f(200, 200.0);
    glEnd();
    glColor3f(1.0, 0.0, 0.0);
    glBegin(GL_POLYGON);
    glVertex2f(0.0, 400.0);
    glVertex2f(200.0, 400.0);
    glVertex2f(200.0, 200.0);
    glVertex2f(0, 200.0);
    glEnd();
    glColor3f(0.0, 1.0, 0.0);
    glBegin(GL_POLYGON);
    glVertex2f(200.0, 400.0);
    glVertex2f(400.0, 400.0);
    glVertex2f(400.0, 200.0);
    glVertex2f(200, 200.0);
    glEnd();
    glFlush();
}
void reshape(int w, int h) //functia redesenare
{
    glViewport(0, 0, (GLsizei)w, (GLsizei)h);       //stabilirea viewportului la dimensiunea ferestrei
    glMatrixMode(GL_PROJECTION);                    //specificare matrice modificabila la valoare argumentului de modificare
    glLoadIdentity();                               //initializarea sistemului de coordonate
    gluOrtho2D(0.0, (GLdouble)w, 0.0, (GLdouble)h); //stabileste volumul de vedere folosind o proiectie ortografica
}

int main(int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(400, 400);
    glutInitWindowPosition(150, 150);
    glutCreateWindow("Poligoane");
    init();
    glutDisplayFunc(display);
    glutReshapeFunc(reshape);
    glutMainLoop();
    return 0;
}
