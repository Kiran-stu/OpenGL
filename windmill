#include<windows.h>
#include<GL/glut.h>
#include<GL/glu.h>

float T=0;

void spin()
{
    T+=0.05;
    if(T>=360)
        T=0;

    glutPostRedisplay();
}

void wing(GLfloat a[],GLfloat b[],GLfloat c[],GLfloat d[],GLfloat e[])
{
    glBegin(GL_POLYGON);
    glVertex2fv(a);
    glVertex2fv(b);
    glVertex2fv(c);
    glVertex2fv(d);
    glVertex2fv(e);
    glEnd();

}

void draw()
{

    glClear(GL_COLOR_BUFFER_BIT);
    glClearColor(0,0.5,0.8,0);


    GLfloat v[][2]={{0,0},{0.6,1},{1,1},{1,0.6},{0,0},
                    {0,0},{-0.6,1},{-1,1},{-1,0.6},{0,0},
                    {0,0},{-0.6,-1},{-1,-1},{-1,-0.6},{0,0},
                    {0,0},{0.6,-1},{1,-1},{1,-0.6},{0,0}};

    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3f(0.9,0.2,0.9);
    glVertex2f(-0.1,0);
    glColor3f(1,0.4,0.4);
    glVertex2f(0.1,0);
    glColor3f(00.6,1,0.6);
    glVertex2f(0.3,-1);
    glColor3f(0.8,0.8,1);
    glVertex2f(-0.3,-1);
    glEnd();
    glPopMatrix();


    glPushMatrix();
    glColor3f(1,0,0);
    glBegin(GL_POLYGON);
    glVertex2f(-0.1,-1);
    glVertex2f(0.1,-1);
    glVertex2f(0.1,-0.7);
    glVertex2f(-0.1,-0.7);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glColor3f(0,1,0);
    glBegin(GL_POLYGON);
    glVertex2f(-0.05,-1);
    glVertex2f(0.05,-1);
    glVertex2f(0.05,-0.8);
    glVertex2f(-0.05,-0.8);
    glEnd();
    glPopMatrix();


    glPushMatrix();
    glLoadIdentity();
    glRotatef(T,0,0,-1);

    glColor3f(0.9,0,0);
    wing(v[0],v[1],v[2],v[3],v[4]);
    glColor3f(0.5,1,0);
    wing(v[5],v[6],v[7],v[8],v[9]);
    glColor3f(0.5,1,1);
    wing(v[10],v[11],v[12],v[13],v[14]);
    glColor3f(0.5,0,1);
    wing(v[15],v[16],v[17],v[18],v[19]);
    glPopMatrix();

    glutSwapBuffers();
}

int main()
{
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE);
    glutInitWindowSize(500,500);
    glutCreateWindow("triangle");
    glutDisplayFunc(draw);
    glutIdleFunc(spin);
    glutMainLoop();
}
