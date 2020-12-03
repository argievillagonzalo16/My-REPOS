#include <GL/glut.h> 
void display(); 
void reshape(int, int); 
 
int main(int argc,char**argv) 
{  
glutInit(&argc,argv);  
glutInitDisplayMode(GLUT_RGB);   
glutInitWindowPosition(300,200);   
glutInitWindowSize(500,500);     
glutCreateWindow("Hello Window");  
glutDisplayFunc(display); 
glutReshapeFunc(reshape); 
 
 glutMainLoop(); 

}

void display() { 
 
 glClear(GL_COLOR_BUFFER_BIT); 

 glLoadIdentity();

 glColor3f(0.0f,0.0f,1.0f);
 glBegin(GL_QUADS);  
 glVertex2f(-7.5,7);  
 glVertex2f(-4.5,7);
 glVertex2f(-2.8,-2);
 glVertex2f(-9.2,-2);
 glEnd();

 glBegin(GL_QUADS);
 glVertex2f(-2.8,-2);
 glVertex2f(-1.9,-7);
 glVertex2f(-4,-7);
 glVertex2f(-5,-2);
 glEnd();

 glBegin(GL_QUADS);
 glVertex2f(-7,-2);
 glVertex2f(-8,-7);
 glVertex2f(-10.2,-7);
 glVertex2f(-9.2,-2);
 glEnd();

 glColor3f(0.0f,0.0f,0.0f);
 glBegin(GL_TRIANGLES);
 glVertex2f(-6,4.5);  
 glVertex2f(-5,1);
 glVertex2f(-7,1);
 glEnd();

 glColor3f(1.0f,1.0f,0.0f);
 glBegin(GL_QUADS);
 glVertex2f(1,7);
 glVertex2f(3.5,7);
 glVertex2f(5.5,-5.5);
 glVertex2f(2.9,-5.5);
 glEnd();

 glBegin(GL_QUADS);
 glVertex2f(5.5,-5.5);
 glVertex2f(7.5,7);
 glVertex2f(10,7);
 glVertex2f(8.1,-5);
 glEnd();

 glBegin(GL_QUADS);
 glVertex2f(8.1,-5);
 glVertex2f(7.9,-7);
 glVertex2f(3.1,-7);
 glVertex2f(2.9,-5);
 glEnd();
 

 glFlush();

}

void reshape(int w, int h) 
{  
glViewport(0,0, (GLsizei)w, (GLsizei)h);  
glMatrixMode(GL_PROJECTION);  
glLoadIdentity();//reset matrixes  
gluOrtho2D(-15,15,-15,15);//size of the world  
glMatrixMode(GL_MODELVIEW); 
} 
 