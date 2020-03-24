#include "init.h"
int blend=0;
int light=0;


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
	glutInitWindowSize(720,420);
	glutInitWindowPosition(200,200);
	glutCreateWindow("Oh deer !");
	
	glutDisplayFunc(Modelisation);
	glutIdleFunc(Modelisation);
	glutReshapeFunc(Redimensionne);
	
	glutKeyboardFunc(touche_pressee);
	glutSpecialFunc(touche_speciale);
	glClearColor(0.337, 0.694, 0.862,0);
	
 	GLfloat position[4];
	position[0]=0; position[1]=0; position[2]=0;
	position[3]=10.0; /* notez le un ici */
	glLightfv(GL_LIGHT0, GL_POSITION, position);
	
	glEnable(GL_LIGHTING);
	glEnable(GL_COLOR_MATERIAL);
	
	glEnable(GL_BLEND);
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
	glEnable(GL_DEPTH_TEST);
	
	glutMainLoop();
	return 1;
}
