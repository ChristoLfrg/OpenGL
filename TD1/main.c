// gcc main.c actions.c axes.o init.o lumiere.o switch_blend.o  switch_light.o VM_init.o -lm -lGL -lGLU -lglut -o test

#include "init.h"
#include "axes.h"
#include "VM_init.h"
#include <math.h>

GLfloat xrot = 0.0f;   
GLfloat yrot = 0.0f;   
GLfloat z = -5.0f;

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
	{5, 0, 3, 6}, 		//GAUCHE
	{3, 2, 7, 6}, 		//DESSUS
	{4, 5, 0, 1}		//DESSOUS
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
};

struct cube creer_cube(float taille){
	struct cube c;
	
	c.coord[0][0] = -taille;
	c.coord[0][1] = -taille;
	c.coord[0][2] = taille;
	
	c.coord[1][0] = -taille;
	c.coord[1][1] = taille;
	c.coord[1][2] = taille;
	
	c.coord[2][0] = taille;
	c.coord[2][1] = taille;
	c.coord[2][2] = taille;
	
	c.coord[3][0] = taille;
	c.coord[3][1] = -taille;
	c.coord[3][2] = taille;
	
	c.coord[4][0] = -taille;
	c.coord[4][1] = -taille;
	c.coord[4][2] = -taille;
	
	c.coord[5][0] = -taille;
	c.coord[5][1] = taille;
	c.coord[5][2] = -taille;
	
	c.coord[6][0] = taille;
	c.coord[6][1] = taille;
	c.coord[6][2] = -taille;
	
	c.coord[7][0] = taille;
	c.coord[7][1] = -taille;
	c.coord[7][2] = -taille;
	
	return c;
}

void afficher_cube (struct cube c){
	glBegin(GL_QUADS);
		for (int i=0; i<6; i++){
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


GLvoid Modelisation()
{
  VM_init(); //initialisation de la matrice de modélisation

  // Entre glPushMatrix et glPopMatrix s'écrit la description de la scène.
	
  //ma_main();
  
  //mon_triangle();
  
	afficher_cube(creer_cube(1));

  axes();
  glutSwapBuffers();
}


int main(int argc, char **argv) 
{  
  return notre_init(argc, argv, &Modelisation);
}
