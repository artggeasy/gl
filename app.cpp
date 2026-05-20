#include <GL/freeglut.h>

void display()
{
    glClear(GL_COLOR_BUFFER_BIT);
    //triangulo do teto - verde
    glBegin(GL_TRIANGLES);

        glColor3f(0,1,0);
        glVertex2f(-0.4,-0.1);//left
        glVertex2f(0.0,-0.1);//right
        glVertex2f(-0.2,0.2);//altura

    glEnd();
    //Quadrado Azul - telhado
    glBegin(GL_QUAD_STRIP);
   
        glColor3f(0,0,1);
        glVertex2f(-0.2,0.2);//altura-left
        glVertex2f(0.0,-0.1);//left
        glVertex2f(0.5,0.2);//altura-right
        glVertex2f(0.7,-0.1);//right

    glEnd();
    //quadrado vermelho - entrada
    glBegin(GL_QUAD_STRIP);

        glColor3f(1,0,0);
        glVertex2f(-0.4,-0.1);//altura - left
        glVertex2f(0.0,-0.1);//altura - right
        glVertex2f(-0.4,-0.6);//left
        glVertex2f(0.0,-0.6);//right
       
    glEnd();
    //porta - rosa
    glBegin(GL_QUAD_STRIP);

        glColor3f(1,0,1);
        glVertex2f(-0.3,-0.3);//altura left
        glVertex2f(-0.3,-0.6);//left
        glVertex2f(-0.1,-0.3);//altura - right
        glVertex2f(-0.1,-0.6);//right
   
    glEnd();
    //maçaneta - cinza
    glBegin(GL_QUAD_STRIP);

        glColor3f(0.9, 0.9, 0.9);
        glVertex2f(-0.275,-0.45);//altura left
        glVertex2f(-0.275,-0.475);//left
        glVertex2f(-0.255,-0.45);//altura - right
        glVertex2f(-0.255,-0.475);//right

    glEnd();

    //parede azul escuro
    glBegin(GL_QUAD_STRIP);

        glColor3f(0,0.2,0.4);
        glVertex2f(0.0,-0.1);//altura left
        glVertex2f(0.0,-0.6);//left
        glVertex2f(0.7,-0.1);//altura - right
        glVertex2f(0.7,-0.6);//right

    glEnd();
    // janela-1: verde escuro
    glBegin(GL_QUAD_STRIP);
   
    glColor3f(0,0.3,0);
    glVertex2f(0.09,-0.2);//altura left
    glVertex2f(0.09,-0.35);//left
    glVertex2f(0.31,-0.2);//altura - right
    glVertex2f(0.31,-0.35);//right
   
    glEnd();
   
    // janela-2: verde escuro
    glBegin(GL_QUAD_STRIP);
   
        glColor3f(0,0.3,0);
        glVertex2f(0.38,-0.2);//altura left
        glVertex2f(0.38,-0.35);//left
        glVertex2f(0.6,-0.2);//altura - right
        glVertex2f(0.6,-0.35);//right

    glEnd();
    glBegin(GL_QUAD_STRIP);
    // linha branca da janela vertical
        glColor3f(1,1,1);
        glVertex2f(0.20,-0.2);//altura left
        glVertex2f(0.20,-0.35);//left
        glVertex2f(0.21,-0.2);//altura - right
        glVertex2f(0.21,-0.35);//right

    glEnd();
    glBegin(GL_QUAD_STRIP);
    // linha branca da janela horizontal
        glColor3f(1,1,1);
        glVertex2f(0.09,-0.27);//altura left
        glVertex2f(0.09,-0.28);//left
        glVertex2f(0.31,-0.27);//altura - right
        glVertex2f(0.31,-0.28);//right

    glEnd();
    glBegin(GL_QUAD_STRIP);
    // linha branca da janela vertical 2
        glColor3f(1,1,1);
        glVertex2f(0.49,-0.2);//altura left
        glVertex2f(0.49,-0.35);//left
        glVertex2f(0.50,-0.2);//altura - right
        glVertex2f(0.50,-0.35);//right

    glEnd();
    glBegin(GL_QUAD_STRIP);
    // linha branca da janela horizontal 2
        glColor3f(1,1,1);
        glVertex2f(0.38,-0.27);//altura left
        glVertex2f(0.38,-0.28);//left
        glVertex2f(0.6,-0.27);//altura - right
        glVertex2f(0.6,-0.28);//right

    glEnd();
   



    glFlush();
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);

    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);

    glutInitWindowSize(800,600);

    glutCreateWindow("OpenGL");

    // Fundo branco
    glClearColor(1, 1, 1, 1);

    glutDisplayFunc(display);

    glutMainLoop();

    return 0;
}