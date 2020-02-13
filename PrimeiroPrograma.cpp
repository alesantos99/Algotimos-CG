#include <iostream>
#include <studio.h>
#include <string.h>
#include <GLFW/glut.h>
#include <Windows.h>

void init(void){
	
	glClearColor(1.0,1.0,1.0,0);

	glMatrixMode(GL_PORJECTION);

	gluOrtho2D(0,200,0,150);


}

int main(int argc, char** argv){
	
	// Inicializa GLUT. parâmetros são opcionais
	gluInit(&argc, argv);

	//Opções da janela
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	
	glutInitWindowPosition(50,100);

	glutInitWindowsSize(400,300);

	glutCreateWindow("Hello World!");

	glutDisplayFunc(lineSegment);

	glutMainLoop();

	return 0;

}

void lineSegment(void){
	
	glClear(GL_COLOR_BUFFER_BIT);
	
	glColor3f(0,0.4,0.2);
	
	glBegin(GL_LINES);
	
	glVertex2i(180,15);	

	glEnd();

	glFlush();

}

