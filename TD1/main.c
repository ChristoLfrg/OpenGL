// gcc main.c actions.c axes.o init.c lumiere.o switch_blend.o  switch_light.o VM_init.c -lm -lGL -lGLU -lglut -o test

#include "init.h"
#include "axes.h"
#include "VM_init.h"
#include <math.h>

GLfloat xrot = 0.0f;   
GLfloat yrot = 0.0f;  

int blend=0;
int light=0;

GLfloat angleA = 0; 
GLfloat angleZ = 0; 
GLfloat angleE = 0; 
GLfloat angleR = 0; 
GLfloat angleT = 0; 

void ma_main (){
	glPushMatrix();
  {
    float t=(0.174533);
    glPushMatrix();
		glScalef(2.5,0.2,1);
		glutSolidCube(1);
    glPopMatrix();
    glPushMatrix(); 
    //********** AURICULAIRE **********
		
		glTranslatef(1.3,0,0);
		glRotated(angleA, 0,0,1);
		glTranslatef(-1.3,0,0);
		
		glColor3f(0.1,0,0);
		glTranslatef(1.5,0,0.5);//déplacement 1
		
		glPushMatrix();
		glScalef(0.5,0.2,0.2);	//phalange 1
		glutSolidCube(1);
		glPopMatrix();
		
		glTranslatef(0.2,0,0);
		glRotated(angleA, 0,0,1);
		glTranslatef(-0.2,0,0);
		
		glColor3f(0.2,0,0);
		glTranslatef(0.45,0,0);//déplacement 2
		
		glPushMatrix();
		glScalef(0.4,0.2,0.2);	//phalange 2
		glutSolidCube(1);
		glPopMatrix();
		
		glTranslatef(0.15,0,0);
		glRotated(angleA, 0,0,1);
		glTranslatef(-0.15,0,0);
		
		glColor3f(0.3,0,0);
		glTranslatef(0.35,0,0);//déplacement 3
		
		glPushMatrix();
		glScalef(0.3,0.2,0.2);	//phalange 3
		glutSolidCube(1);
		glPopMatrix();
	glPopMatrix();
	
	glPushMatrix(); 
	//********** ANNULAIRE **********
	
		glTranslatef(1.3,0,0);
		glRotated(angleZ, 0,0,1);
		glTranslatef(-1.3,0,0);
	
		glColor3f(0,0.1,0);
		glTranslatef(1.55,0,0.2);//déplacement 1
		
		glPushMatrix();
		glScalef(0.6,0.2,0.2);	//phalange 1
		glutSolidCube(1);
		glPopMatrix();
		
		glTranslatef(0.25,0,0);
		glRotated(angleZ, 0,0,1);
		glTranslatef(-0.25,0,0);
		
		glColor3f(0,0.2,0);
		glTranslatef(0.6,0,0);//déplacement 2
		
		glPushMatrix();
		glScalef(0.6,0.2,0.2);	//phalange 2
		glutSolidCube(1);
		glPopMatrix();
		
		glTranslatef(0.3,0,0);
		glRotated(angleZ, 0,0,1);
		glTranslatef(-0.3,0,0);
		
		glColor3f(0,0.3,0);
		glTranslatef(0.6,0,0);//déplacement 3
		
		glPushMatrix();
		glScalef(0.6,0.2,0.2);	//phalange 3
		glutSolidCube(1);
		glPopMatrix();
	glPopMatrix();
	
	
	glPushMatrix();
	//********** MAJEUR **********
	
		glTranslatef(1.3,0,0);
		glRotated(angleE, 0,0,1);
		glTranslatef(-1.3,0,0);
		
		glColor3f(0,0,0.1);
		glTranslatef(1.65,0,-0.1);//déplacement 1
		
		glPushMatrix();
		glScalef(0.8,0.2,0.2);	//phalange 1
		glutSolidCube(1);
		glPopMatrix();
				
		glTranslatef(0.35,0,0);
		glRotated(angleE, 0,0,1);
		glTranslatef(-0.35,0,0);
		
		glColor3f(0,0,0.2);
		glTranslatef(0.8,0,0);//déplacement 2
		
		glPushMatrix();
		glScalef(0.8,0.2,0.2);	//phalange 2
		glutSolidCube(1);
		glPopMatrix();
		
		glTranslatef(0.4,0,0);
		glRotated(angleE, 0,0,1);
		glTranslatef(-0.4,0,0);
		
		glColor3f(0,0,0.3);
		glTranslatef(0.75,0,0);//déplacement 3
		
		glPushMatrix();
		glScalef(0.7,0.2,0.2);	//phalange 3
		glutSolidCube(1);
		glPopMatrix();
		
	glPopMatrix();
	
	glPushMatrix();
	//********** INDEX **********
	
		glTranslatef(1.3,0,0);
		glRotated(angleR, 0,0,1);
		glTranslatef(-1.3,0,0);
		
		glColor3f(0.2,0.1,0);
		glTranslatef(1.575,0,-0.4);//déplacement 1
				
		glPushMatrix();
		glScalef(0.65,0.2,0.2);	//phalange 1
		glutSolidCube(1);
		glPopMatrix();
		
		glTranslatef(0.275,0,0);
		glRotated(angleR, 0,0,1);
		glTranslatef(-0.275,0,0);
		
		glColor3f(0.2,0.2,0);
		glTranslatef(0.6,0,0);//déplacement 2
		
		glPushMatrix();
		glScalef(0.6,0.2,0.2);	//phalange 2
		glutSolidCube(1);
		glPopMatrix();
		
		glTranslatef(.3,0,0);
		glRotated(angleR, 0,0,1);
		glTranslatef(-.3,0,0);
		
		glColor3f(0.2,0.3,0);
		glTranslatef(0.7,0,0);//déplacement 3
		
		glPushMatrix();
		glScalef(0.8,0.2,0.2);	//phalange 3
		glutSolidCube(1);
		glPopMatrix();
		
	glPopMatrix();
  }
  glPopMatrix();
}

GLfloat triangle = 0; 
GLfloat time = 0;

void mon_triangle(){
	glPushMatrix();
	{
			glRotatef(triangle, 0, 0, 0);
			triangle = triangle+1;
			glBegin(GL_TRIANGLES);
				glVertex3f(0,2,0);
				glVertex3f(-1,-1,0);
				glVertex3f(1,-1,0);
			glEnd();
	}
	glPopMatrix();
	
	//time = glutGet(GLUT_ELAPSED_TIME);

	//printf=(time);

}

// 0 : avant, 1 : arriere, 2 : droit, 3 : gauche, 4 : dessus, 5 : dessous
static int faces[6][4] = {
	{0, 1, 2, 3}, 		//AVANT
	{4, 5, 6, 7}, 		//ARRIERE
	{1, 4, 7, 2}, 		//DROITE
	{0, 3, 6, 5}, 		//GAUCHE
	{2, 7, 6, 3}, 		//DESSUS
	{1, 0, 5, 4}		//DESSOUS
};
float sommets[8][3] = {
	{0, 3, 5}, 
	{0, 2, 5}, 
	{0, 2, 4}, 
	{0, 3, 4}, 
	{1, 2, 5}, 
	{1, 3, 5}, 
	{1, 3, 4}, 
	{1, 2, 4}
};

struct cube {
	int coord[8][3];
	float color[6][4];
};

struct cube creer_cube(float taille){
	struct cube c;
	
	c.coord[0][0] = -taille; //0
	c.coord[0][1] = -taille;
	c.coord[0][2] =  taille;
	
	c.coord[1][0] = taille;  //1
	c.coord[1][1] = -taille;
	c.coord[1][2] =  taille;
	
	c.coord[2][0] = taille;  //2
	c.coord[2][1] = taille;
	c.coord[2][2] = taille;
	
	c.coord[3][0] = -taille; //3
	c.coord[3][1] = taille;
	c.coord[3][2] = taille;
	
	c.coord[4][0] = taille;  //4
	c.coord[4][1] = -taille;
	c.coord[4][2] = -taille;
	
	c.coord[5][0] = -taille; //5
	c.coord[5][1] = -taille;
	c.coord[5][2] = -taille;
	
	c.coord[6][0] = -taille; //6
	c.coord[6][1] = taille;
	c.coord[6][2] = -taille;
	
	c.coord[7][0] = taille;  //7
	c.coord[7][1] = taille;
	c.coord[7][2] = -taille;
	
	c.color[0][0] = 1;	// AVANT
	c.color[0][1] = 0;
	c.color[0][2] = 0;
	c.color[0][3] = 0;
	
	c.color[1][0] = 0;	// ARRIERE
	c.color[1][1] = 1;
	c.color[1][2] = 0;
	c.color[1][3] = 0;
	
	c.color[2][0] = 0;	// DROITE
	c.color[2][1] = 0;
	c.color[2][2] = 1;
	c.color[2][3] = 0;
	
	c.color[3][0] = 1;	// GAUCHE
	c.color[3][1] = 0;
	c.color[3][2] = 1;
	c.color[3][3] = 0;
	
	c.color[4][0] = 1;	// DESSUS
	c.color[4][1] = 1;
	c.color[4][2] = 0;
	c.color[4][3] = 0.8;
	
	c.color[5][0] = 0;	// DESSOUS
	c.color[5][1] = 1;
	c.color[5][2] = 1;
	c.color[5][3] = 1;

	return c;
}

void afficher_cube (struct cube c){
	glBegin(GL_QUADS);
		for (int i=0; i<6; i++){
			glColor4f(	c.color[i][0],
						c.color[i][1],
						c.color[i][2],
						c.color[i][3]);
			for (int j=0; j<4; j++){
				glVertex3f(
					c.coord[faces[i][j]][0], 
					c.coord[faces[i][j]][1], 
					c.coord[faces[i][j]][2]
					);
			}
		}
	glEnd();
}

void ma_sphere () {
	glPushMatrix();
	{
		glColor3f(1,1,0);
		glRotatef(xrot, 1, 0, 0);	
		glRotatef(yrot, 0, 1, 0);
		glutSolidSphere(0.5,10,10);
		glEnd();
	}
	glPopMatrix();
}

GLvoid Modelisation()
{
	VM_init(); //initialisation de la matrice de modélisation
	glRotatef(xrot, 1, 0, 0);	
	glRotatef(yrot, 0, 1, 0);
	// Entre glPushMatrix et glPopMatrix s'écrit la description de la scène.

	//ma_main();

	//mon_triangle();
	afficher_cube(creer_cube(1));
	//ma_sphere();

	axes();
	glutSwapBuffers();
}


int main(int argc, char **argv) 
{  
  return notre_init(argc, argv, &Modelisation);
}
