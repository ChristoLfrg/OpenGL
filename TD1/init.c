#include "init.h"

GLvoid Redimensionne(int Width, int Height){
		glViewport (0,0,Width,Height);
		glMatrixMode (GL_PROJECTION);
		glLoadIdentity();
		gluPerspective(45,1.33,0.1,100);
		glMatrixMode (GL_MODELVIEW);
}

int notre_init(int argc, char** argv, void (*Modelisation)()) {
	glutInit(&argc, argv);	
	//argc et argv sont respectivement le nombre et la liste des paramètres passées en ligne de commande
	glutInitDisplayMode(GLUT_RGBA|GLUT_DOUBLE);
	glutInitWindowSize(1080,720);
	glutInitWindowPosition(150,150);
	glutCreateWindow("Donne moi ta main");

	glutDisplayFunc(Modelisation);
	glutIdleFunc(Modelisation);
	glutReshapeFunc(Redimensionne);
	
	
	glutKeyboardFunc(touche_pressee);
	glutSpecialFunc(touche_speciale);
	
	glClearColor(0.3,0.3,0.3,0);
	glutMainLoop();
	return 1;
}
