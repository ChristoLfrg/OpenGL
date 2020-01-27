// gcc main.c actions.o axes.o init.o lumiere.o switch_blend.o  switch_light.o VM_init.o -lm -lGL -lGLU -lglut -o test

#include "init.h"
#include "axes.h"
#include "VM_init.h"
#include <math.h>

GLfloat xrot = 0.0f;   
GLfloat yrot = 0.0f;   
GLfloat z = -5.0f; 

GLvoid Modelisation()
{
  VM_init(); //initialisation de la matrice de modélisation

  // Entre glPushMatrix et glPopMatrix s'écrit la description de la scène.

  glPushMatrix();
  {
    float t=(0.174533);
    glPushMatrix();
		glScalef(2.5,0.2,1);
		glutSolidCube(1);
    glPopMatrix();
    glPushMatrix(); //AURICULAIRE
		glScalef(0.3,0.2,0.2);	//phalange 1
		glTranslatef(4.6,0,2.5);	//déplacement
		glutSolidCube(1);		//création
		glScalef(0.6,1,1);		//phalange 2
		glTranslatef(1.4,0,0);	//déplacement
		glutSolidCube(1);		//création
		glScalef(0.6,1,1);		//phalange 3
		glTranslatef(1.4,0,0);	//déplacement
		glutSolidCube(1);
	glPopMatrix();
	
	glPushMatrix(); //ANNULAIRE
		glScalef(0.8,0.2,0.2);	//phalange 1
		glTranslatef(2,0,0.8);	//déplacement 1
		glutSolidCube(1);		//création 1
		glScalef(0.6,1,1);		//phalange 2
		glTranslatef(1.7,0,0);	//déplacement 2
		glutSolidCube(1);		//création 2
		glScalef(0.6,1,1);		//phalange 3
		glTranslatef(1.7,0,0);	//déplacement 3
		glutSolidCube(1);		//création 3
	glPopMatrix();
	
	glPushMatrix(); //MAJEUR
		glScalef(0.5,0.2,0.2);	//phalange 1
		glTranslatef(3,0,-0.8);	//déplacement 1
		glutSolidCube(1);		//création 1
		glScalef(0.6,1,1);		//phalange 2
		glTranslatef(1.4,0,0);	//déplacement 2
		glutSolidCube(1);		//création 2
		glScalef(0.6,1,1);		//phalange 3
		glTranslatef(1.4,0,0);	//déplacement 3
		glutSolidCube(1);		//création 3
	glPopMatrix();
	
	glPushMatrix(); //INDEX
		glScalef(0.5,0.2,0.2);	//phalange 1
		glTranslatef(3,0,-2.5);	//déplacement 1
		glutSolidCube(1);		//création 1
		glScalef(0.6,1,1);		//phalange 2
		glTranslatef(1.4,0,0);	//déplacement 2
		glutSolidCube(1);		//création 2
		glScalef(0.6,1,1);		//phalange 3
		glTranslatef(1.4,0,0);	//déplacement 3
		glutSolidCube(1);		//création 3
	glPopMatrix();
    
    
  }
  glPopMatrix();


  axes();
  glutSwapBuffers();
}

int main(int argc, char **argv) 
{  
  return notre_init(argc, argv, &Modelisation);
}
