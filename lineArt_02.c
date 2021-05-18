#include<windows.h>
#include<GL/glut.h>

void art2();

int main()
{
    glutInitDisplayMode(GLUT_RGB|GLUT_SINGLE);
    glutCreateWindow("line02");
    glutDisplayFunc(art2);
    gluOrtho2D(0,10,0,10);
    glutMainLoop();
}

void art2()
{
    float a=0,b=0,c=10;
    glClear(GL_COLOR_BUFFER_BIT);

    glBegin(GL_LINES);
    glColor3d(0,1,0.3);
    //lines starting from point (5,0)
    for(a=0;a<=10;a++)
    {
        glVertex2d(5,0);
        glVertex2d(0,a);

        if(a==10)
        {

            while(b<=10)
            {
                glVertex2f(5,0);
                glVertex2f(b,a);
                b++;
            }
        }

        if(b==11)
        {
            while(c>=0)
            {
                glVertex2f(5,0);
                glVertex2f(b-1,c);
                c--;
            }
        }
    }

    //lines starting from point (0,5)
    for(a=0;a<=10;a++)
    {
        glVertex2d(0,5);
        glVertex2d(a,10);

        if(a==10)
        {
            b=10;
            while(b>=0)
            {
                //glColor3d(c/10+0.09,0.4,c/10);
                glVertex2f(0,5);
                glVertex2f(a,b);
                b--;
            }
        }

        if(b==-1)
        {
            c=10;
            while(c>=0)
            {
                glVertex2f(0,5);
                glVertex2f(c,b);
                c--;
            }
        }
    }

    //lines starting from point (5,10)
    for(a=10;a>=0;a--)
    {
        glVertex2d(5,10);
        glVertex2d(10,a);

        if(a==0)
        {
            b=10;
            while(b>=0)
            {
                //glColor3d(c/10+0.08,0.4,c/10);
                glVertex2f(5,10);
                glVertex2f(b,0);
                b--;
            }
        }

        if(b==-1)
        {
            c=0;
            while(c<=10)
            {
                //glColor3d(c/10+0.05,0.4,c/10);
                glVertex2f(5,10);
                glVertex2f(0,c);
                c++;
            }
        }
    }

    //lines starting from point (10,5)
    for(a=10;a>=0;a--)
    {
        glVertex2d(10,5);
        glVertex2d(a,0);

        if(a==0)
        {
            b=0;
            while(b<=10)
            {
                glVertex2f(10,5);
                glVertex2f(0,b);
                b++;
            }
        }
        if(b==11)
        {
            c=0;
            while(c<=10)
            {
                //glColor3d(c/10+0.02,0.4,c/10);
                glVertex2f(10,5);
                glVertex2f(c,10);
                c++;
            }
        }
    }
    glEnd();
    glFlush();
}
