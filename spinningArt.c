#include<windows.h>
#include<GL/glut.h>

float T=0;

void spin()
{
    T+=1;
    if(T>=360)
        T=0;
    glutPostRedisplay();
}

void art()
{
    float y,x;
    x=0,y=1;
    glClearColor(0,0,0,0);
    glClear(GL_COLOR_BUFFER_BIT);

    glLoadIdentity();
    glRotatef(T,0,0,1);


    glBegin(GL_LINES);
    glColor3d(0,1,1);


    while(x<=1 && y>=0)
    {
        glVertex2f(x,0);
        glVertex2f(0,y);

        x+=0.025;
        y-=0.025;
    }


    float a=-1,b=0;
    while(a<0 && b<=1)
    {
        glVertex2f(0,b);
        glVertex2f(a,0);

        a+=0.025;
        b+=0.025;
    }


    float m=0,n=-1;
    while(m>-1 && n>=-1)
    {
        glVertex2f(0,m);
        glVertex2f(n,0);

        m-=0.025;
        n+=0.025;
    }


    float p=0,q=1;
    while(p>=-1 && q>=0)
    {
        glVertex2f(0,p);
        glVertex2f(q,0);

        p-=0.025;
        q-=0.025;
    }

    glEnd();
    glFlush();
}

void main()
{
    glutInitDisplayMode(GLUT_RGB|GLUT_SINGLE);
    glutInitWindowSize(500,500);
    glutCreateWindow("Line ART");
    glutDisplayFunc(art);
    glutIdleFunc(spin);
    glutMainLoop();
}
