#include <stdlib.h>
#include <GLUT/glut.h>

/*
Jackson Lima - jlsl@icomp.ufam.edu.br

NOTA: O programa a seguir foi feito utilizando o sistema operacional OS X 10.10(Yosemite), então para funcionar em outros SO, verificar se os includes estão estão corretos e a forma de executar o programa.
*/


/*
 P/ executar em Mac é necessário Xcode com as bibliotecas referentes ao OpenGL
 Executar em linha de comando p/ Mac: g++ solarSystem_Jackson_Lima.c -framework OpenGL -framework GLUT -w
*/
// These three variables control the animation's state and speed.
static int HourOfDay = 0;
static int DayOfYear = 10;

void init(void) {
  glClearColor(0.0, 0.0, 0.0, 0.0);
}

void placeBackground() {
  glColor3f(1,1,1);
  glPushMatrix();
    glTranslatef(0.0f,0.0f,-6.0f);
    glColor3f( 0.89, 0.93, 0.95 );

    glBegin(GL_POINTS);
      glVertex2f(-23, -23);
      glVertex2f(8,	8);
      glVertex2f(-19,	-18);
      glVertex2f(19, -10);
      glVertex2f(-9, 5);
      glVertex2f(11, 7);
      glVertex2f(6,	-12);
      glVertex2f(-16,	14);
      glVertex2f(22, 7);
      glVertex2f(1,	-21);
      glVertex2f(17, -11);
      glVertex2f(0,	-17);
      glVertex2f(2,	23);
      glVertex2f(6,	14);
      glVertex2f(-15,	3);
      glVertex2f(-16,	11);
      glVertex2f(17, -8);
      glVertex2f(-14,	-16);
      glVertex2f(4, -10);
      glVertex2f(16, 11);
      glVertex2f(8, 19);
      glVertex2f(10, -8);
      glVertex2f(-21,	19);
      glVertex2f(1, -2);
      glVertex2f(3, -20);
      glVertex2f(19, 21);
      glVertex2f(5,	-12);
      glVertex2f(11, -23);
      glVertex2f(-5, 5);
      glVertex2f(13, 18);
      glVertex2f(6,	8);
      glVertex2f(-2, 13);
      glVertex2f(-8, -20);
      glVertex2f(-23,	-5);
      glVertex2f(5, 1);
      glVertex2f(-15,	15);
      glVertex2f(-17,	-1);
      glVertex2f(-3, 5);
      glVertex2f(16, 2);
      glVertex2f(-16,	-20);
      glVertex2f(11, -8);
      glVertex2f(21, -3);
      glVertex2f(2, 15);
      glVertex2f(3, 13);
      glVertex2f(-20,	10);
      glVertex2f(-17,	9);
      glVertex2f(-2, 13);
      glVertex2f(-15,	-10);
      glVertex2f(10, 22);
      glVertex2f(0,	16);
      glVertex2f(21	,-1);
    glEnd();

  glPopMatrix();
}

void display(void) {
  glClear(GL_COLOR_BUFFER_BIT  | GL_DEPTH_BUFFER_BIT);
  glPushMatrix(); // Origin

  placeBackground();

  glClear(GL_DEPTH_BUFFER_BIT);

    /* Sun */
    glColor3f( 1.0, 1.0, 0.0 );
    glutWireSphere( 1.0, 20, 10 );


    /* Mercury */
    glPushMatrix();
      glRotatef( (GLfloat) DayOfYear, 0.0, 0.0, 1.0 );
      glTranslatef(3.0, 0.0, 0.0);
      glRotatef( (GLfloat) HourOfDay, 0.0, 0.0, 1.0 );
      glColor3f( 0.87, 0.53 , 0.25 );
      glutWireSphere( 0.3, 10, 2 );

      /* Mercury's Moon 1*/
      glPushMatrix();
        glRotatef( (GLfloat) DayOfYear, 0.0, 0.0, 1.0 );
        glTranslatef( 0.7, 0.0, 0.0 );
        glColor3f( 0.89, 0.93, 0.95 );
        glutWireSphere( 0.1, 5, 5 );
      glPopMatrix();

      // Mercury's Moon 2
      glPushMatrix();
        glRotatef( (GLfloat) DayOfYear+180, 0.0, 0.0, 1.0 );
        glTranslatef(0.7, 0.0, 0.0 );
        glColor3f( 0.89, 0.93, 0.95 );
        glutWireSphere( 0.1, 5, 5 );
      glPopMatrix();
    glPopMatrix();

    /* Venus */
    glPushMatrix();
      glRotatef( (GLfloat) DayOfYear+195, 0.0, 0.0, 1.0 );
      glTranslatef(5.0, 0.0, 0.0);
      glRotatef( (GLfloat) HourOfDay, 0.0, 0.0, 1.0 );
      glColor3f( 0.99, 0.91 , 0.66 );
      glutWireSphere( 0.5, 10, 2 );

      /* Venus's Moon 1*/
      glPushMatrix();
        glRotatef( (GLfloat) DayOfYear, 0.0, 0.0, 1.0 );
        glTranslatef( 0.7, 0.0, 0.0 );
        glColor3f( 0.89, 0.93, 0.95 );
        glutWireSphere( 0.1, 5, 5 );
      glPopMatrix();

    glPopMatrix();

    /* Earth */
    glPushMatrix();
      glRotatef( (GLfloat) DayOfYear+80, 0.0, 0.0, 1.0 );
      glTranslatef(7.0, 0.0, 0.0);
      glRotatef( (GLfloat) HourOfDay, 0.0, 0.0, 1.0 );
      glColor3f( 0.47, 0.82 , 0.98 );
      glutWireSphere( 0.5, 10, 2 );

      /* Earth's Moon 1*/
      glPushMatrix();
        glRotatef( (GLfloat) DayOfYear, 0.0, 0.0, 1.0 );
        glTranslatef( 0.7, 0.0, 0.0 );
        glColor3f( 0.89, 0.93, 0.95 );
        glutWireSphere( 0.1, 5, 5 );
      glPopMatrix();

    glPopMatrix();

    /* Mars */
    glPushMatrix();
      glRotatef( (GLfloat) DayOfYear+275, 0.0, 0.0, 1.0 );
      glTranslatef(9.0, 0.0, 0.0);
      glRotatef( (GLfloat) HourOfDay, 0.0, 0.0, 1.0 );
      glColor3f( 0.84, 0.16 , 0.15 );
      glutWireSphere( 0.35, 10, 2 );

    /* Mars's Moon 1*/
      glPushMatrix();
        glRotatef( (GLfloat) DayOfYear, 0.0, 0.0, 1.0 );
        glTranslatef( 0.7, 0.0, 0.0 );
        glColor3f( 0.89, 0.93, 0.95 );
        glutWireSphere( 0.1, 5, 5 );
      glPopMatrix();

    glPopMatrix();

    /* Jupiter */
    glPushMatrix();
      glRotatef( (GLfloat) DayOfYear+33, 0.0, 0.0, 1.0 );
      glTranslatef(11.0, 0.0, 0.0);
      glRotatef( (GLfloat) HourOfDay, 0.0, 0.0, 1.0 );
      glColor3f( 0.93, 0.64 , 0.27 );
      glutWireSphere( 1.0, 10, 2 );

      /* Jupiter's Moon 1*/
      glPushMatrix();
        glRotatef( (GLfloat) DayOfYear+45, 0.0, 0.0, 1.0 );
        glTranslatef( 1.4, 0.0, 0.0 );
        glColor3f( 0.89, 0.93, 0.95 );
        glutWireSphere( 0.1, 5, 5 );
      glPopMatrix();

      /* Jupiter's Moon 2*/
      glPushMatrix();
        glRotatef( (GLfloat) DayOfYear+90, 0.0, 0.0, 1.0 );
        glTranslatef( 1.55, 0.0, 0.0 );
        glColor3f( 0.89, 0.93, 0.95 );
        glutWireSphere( 0.1, 5, 5 );
      glPopMatrix();

      /* Jupiter's Moon 3*/
      glPushMatrix();
        glRotatef( (GLfloat) DayOfYear+135, 0.0, 0.0, 1.0 );
        glTranslatef( 1.2, 0.0, 0.0 );
        glColor3f( 0.89, 0.93, 0.95 );
        glutWireSphere( 0.1, 5, 5 );
      glPopMatrix();

      /* Jupiter's Moon 4*/
      glPushMatrix();
        glRotatef( (GLfloat) DayOfYear, 0.0, 0.0, 1.0 );
        glTranslatef( 1.6, 0.0, 0.0 );
        glColor3f( 0.89, 0.93, 0.95 );
        glutWireSphere( 0.1, 5, 5 );
      glPopMatrix();

    glPopMatrix();

    /* Saturn */
    glPushMatrix();
      glRotatef( (GLfloat) DayOfYear+180, 0.0, 0.0, 1.0 );
      glTranslatef(15.0, 0.0, 0.0);
      glRotatef( (GLfloat) HourOfDay, 0.0, 0.0, 1.0 );
      glColor3f( 0.92, 0.82 , 0.45 );
      glutWireSphere( 0.9, 10, 2 );

      /* Saturn's Moon 1*/
      glPushMatrix();
        glRotatef( (GLfloat) DayOfYear+90, 0.0, 0.0, 1.0 );
        glTranslatef( 1.2, 0.0, 0.0 );
        glColor3f( 0.89, 0.93, 0.95 );
        glutWireSphere( 0.1, 5, 5 );
      glPopMatrix();

      /* Saturn's Moon 2*/
      glPushMatrix();
        glRotatef( (GLfloat) DayOfYear+180, 0.0, 0.0, 1.0 );
        glTranslatef( 1.1, 0.0, 0.0 );
        glColor3f( 0.89, 0.93, 0.95 );
        glutWireSphere( 0.1, 5, 5 );
      glPopMatrix();

      /* Saturn's Moon 3*/
      glPushMatrix();
        glRotatef( (GLfloat) DayOfYear+270, 0.0, 0.0, 1.0 );
        glTranslatef( 1.15, 0.0, 0.0 );
        glColor3f( 0.89, 0.93, 0.95 );
        glutWireSphere( 0.1, 5, 5 );
      glPopMatrix();

      /* Saturn's Moon 4*/
      glPushMatrix();
        glRotatef( (GLfloat) DayOfYear, 0.0, 0.0, 1.0 );
        glTranslatef( 1.25, 0.0, 0.0 );
        glColor3f( 0.89, 0.93, 0.95 );
        glutWireSphere( 0.1, 5, 5 );
      glPopMatrix();

    glPopMatrix();

    /* Uranus */
    glPushMatrix();
      glRotatef( (GLfloat) DayOfYear+90, 0.0, 0.0, 1.0 );
      glTranslatef(17.0, 0.0, 0.0);
      glRotatef( (GLfloat) HourOfDay, 0.0, 0.0, 1.0 );
      glColor3f( 0.64, 0.84 , 0.78 );
      glutWireSphere( 0.8, 10, 2 );

      /* Uranus's Moon 1*/
      glPushMatrix();
        glRotatef( (GLfloat) DayOfYear, 0.0, 0.0, 1.0 );
        glTranslatef( 1.0, 0.0, 0.0 );
        glColor3f( 0.89, 0.93, 0.95 );
        glutWireSphere( 0.1, 5, 5 );
      glPopMatrix();

    glPopMatrix();

    /* Neptune */
    glPushMatrix();
      glRotatef( (GLfloat) DayOfYear+150, 0.0, 0.0, 1.0 );
      glTranslatef(20.0, 0.0, 0.0);
      glRotatef( (GLfloat) HourOfDay, 0.0, 0.0, 1.0 );
      glColor3f( 0.29, 0.74 , 0.95 );
      glutWireSphere( 0.25, 10, 2 );

      /* Neptune's Moon 1*/
      glPushMatrix();
        glRotatef( (GLfloat) DayOfYear, 0.0, 0.0, 1.0 );
        glTranslatef( 0.6, 0.0, 0.0 );
        glColor3f( 0.89, 0.93, 0.95 );
        glutWireSphere( 0.1, 5, 5 );
      glPopMatrix();

      /* Neptune's Moon 2*/
      glPushMatrix();
        glRotatef( (GLfloat) DayOfYear+120, 0.0, 0.0, 1.0 );
        glTranslatef( 0.7, 0.0, 0.0 );
        glColor3f( 0.89, 0.93, 0.95 );
        glutWireSphere( 0.1, 5, 5 );
      glPopMatrix();

      /* Neptune's Moon 3*/
      glPushMatrix();
        glRotatef( (GLfloat) DayOfYear+180, 0.0, 0.0, 1.0 );
        glTranslatef( 0.9, 0.0, 0.0 );
        glColor3f( 0.89, 0.93, 0.95 );
        glutWireSphere( 0.1, 5, 5 );
      glPopMatrix();

    glPopMatrix();

  glPopMatrix();

  glutSwapBuffers();

  // Animation State
  DayOfYear = (DayOfYear + 1) % 360;
  HourOfDay = (HourOfDay + 5) % 360;
}

void Timer(int iUnused) {
  glutPostRedisplay();
  glutTimerFunc(30, Timer, 0);
}

static float cam_axis_x = 0.0;
static float cam_axis_y = 0.0;
static float cam_axis_z = -50.0;

void reshape(int w, int h) {
  glViewport(0, 0, (GLsizei) w, (GLsizei) h);
  glMatrixMode(GL_PROJECTION);
  glLoadIdentity();
  gluPerspective(45.0, (GLfloat) w/(GLfloat) h, 1.0, 90.0);
  glMatrixMode(GL_MODELVIEW);
  glLoadIdentity();
  glTranslatef(cam_axis_x, cam_axis_y, cam_axis_z);
}

void keyboard(unsigned char key, int x, int y) {
  switch (key) {
    case 'q': // tecla Esc
      exit(0);
      break;
  }
}

int main(int argc, char** argv) {
  glutInit(&argc, argv);
  glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
  glutInitWindowSize(500, 500);
  glutInitWindowPosition(100, 100);
  glutCreateWindow(argv[0]);
  init();
  glutDisplayFunc(display);
  glutReshapeFunc(reshape);
  Timer(0);
  glutKeyboardFunc(keyboard);
  glutMainLoop();
  return 0;
}
