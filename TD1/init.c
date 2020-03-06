#include "init.h"

GLvoid Redimensionne(int Width, int Height){
		glViewport (0,0,Width,Height);
		glMatrixMode (GL_PROJECTION);
		glLoadIdentity();
		gluPerspective(45,(float) Width/(float) Height,0.1,100);
		glMatrixMode (GL_MODELVIEW);
}

int notre_init(int argc, char** argv, void (*Modelisation)()) {
	glutInit(&argc, argv);	

	glutInitDisplayMode(GLUT_DOUBLE|GLUT_RGBA|GLUT_DEPTH);
	glutInitWindowSize(1080,720);
	glutInitWindowPosition(150,150);
	glutCreateWindow("Donne moi ta main");

	glutDisplayFunc(Modelisation);
	glutIdleFunc(Modelisation);
	glutReshapeFunc(Redimensionne);
	
	glutKeyboardFunc(touche_pressee);
	glutSpecialFunc(touche_speciale);
	glClearColor(0,0,0,0);
	
	int x, y, z = 0;
 	GLfloat position[4];
	position[0]=x; position[1]=y; position[2]=z;
	position[3]=10.0; /* notez le un ici */
	glLightfv(GL_LIGHT0, GL_POSITION, position);
	
	glEnable(GL_LIGHTING);	
	glEnable(GL_COLOR_MATERIAL);
	//glLightModelfv(0,0);
	
	glEnable(GL_BLEND);
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
	glEnable(GL_DEPTH_TEST);
	
	glClearColor(0,0,0,0);
	glutMainLoop();
	return 1;
}
