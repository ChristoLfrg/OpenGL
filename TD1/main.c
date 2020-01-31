// gcc main.c actions.o axes.o init.o lumiere.o switch_blend.o  switch_light.o VM_init.o -lm -lGL -lGLU -lglut -o test

#include "init.h"
#include "axes.h"
#include "VM_init.h"
#include <math.h>

GLfloat xrot = 0.0f;   
GLfloat yrot = 0.0f;   
GLfloat z = -5.0f; 
GLfloat angleA = 0; 
GLfloat angleZ = 0; 

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
		
		glColor3f(0,0.2,0);
		glTranslatef(1,0,0);//déplacement 2
		
		glPushMatrix();
		glScalef(0.6,0.2,0.2);	//phalange 2
		glutSolidCube(1);
		glPopMatrix();
		
		glColor3f(0,0.3,0);
		glTranslatef(0.9,0,0);//déplacement 3
		
		glPushMatrix();
		glScalef(0.6,0.2,0.2);	//phalange 3
		glutSolidCube(1);
		glPopMatrix();
	glPopMatrix();
	
	glPushMatrix(); //MAJEUR
		glColor3f(0,0,0.1);
		glTranslatef(1.65,0,-0.1);//déplacement 1
		glScalef(0.8,0.2,0.2);	//phalange 1
		glutSolidCube(1);		//création 1
		
		glColor3f(0,0,0.2);
		glTranslatef(0.9,0,0);//déplacement 2
		glScalef(0.8,1,1);	//phalange 2
		glutSolidCube(1);		//création 2
		
		glColor3f(0,0,0.3);
		glTranslatef(0.9,0,0);//déplacement 3
		glScalef(0.8,1,1);	//phalange 3
		glutSolidCube(1);		//création 3
	glPopMatrix();
	
	glPushMatrix(); //INDEX
		glColor3f(0.2,0.1,0);
		glTranslatef(1.575,0,-0.4);//déplacement 1
		glScalef(0.65,0.2,0.2);	//phalange 1
		glutSolidCube(1);		//création 1
		
		glColor3f(0.2,0.2,0);
		glTranslatef(1,0,0);//déplacement 2
		glScalef(1,1,1);	//phalange 2
		glutSolidCube(1);		//création 2
		
		glColor3f(0.2,0.3,0);
		glTranslatef(0.9,0,0);//déplacement 3
		glScalef(0.8,1,1);	//phalange 3
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
