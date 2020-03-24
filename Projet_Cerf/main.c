// cerf
// http://doc.instantreality.org/tools/color_calculator/

#include "init.h"
#include "axes.h"
#include "VM_init.h"
#include <math.h>

GLfloat xrot = 0.0f;   
GLfloat yrot = 0.0f;   

GLfloat PAvG1 = 0; //angle P.atte A.vant G.auche niv 1
GLfloat PAvG2 = 0; //angle P.atte A.vant G.auche niv 2 _ genoux
GLfloat PAvG3 = 0; //angle P.atte A.vant G.auche niv 3 _ sabot

GLfloat PAvD1 = 0; //angle P.atte A.vant D.roite niv 1
GLfloat PAvD2 = 0; //angle P.atte A.vant D.roite niv 2 _ genoux
GLfloat PAvD3 = 0; //angle P.atte A.vant D.roite niv 3 _ sabot

GLfloat PArG1 = 0; //angle P.atte Ar.rière G.auche niv 1
GLfloat PArG2 = 0; //angle P.atte Ar.rière G.auche niv 2 _ genoux
GLfloat PArG3 = 0; //angle P.atte Ar.rière G.auche niv 3 _ sabot

GLfloat PArD1 = 0; //angle P.atte Ar.rière D.roite niv 1
GLfloat PArD2 = 0; //angle P.atte Ar.rière D.roite niv 2 _ genoux
GLfloat PArD3 = 0; //angle P.atte Ar.rière D.roite niv 3 _ sabot


void mon_cerf(){
	GLUquadricObj *obj = gluNewQuadric();
	glPushMatrix();
	glColor3f(0.415, 0.180, 0.160);
	
	//********** CORPS **********
	{
	glPushMatrix();
		glColor3f(0.384, 0.172, 0.156);
		glTranslatef(0,-1,-2);
		glutSolidSphere(4.5,32,32);
    glPopMatrix();
	glPushMatrix();
		glColor3f(0.415, 0.180, 0.160);
		glTranslatef(0,-1,-8.5);
		gluCylinder(obj,3.8,4.3,5,32,32);
    glPopMatrix();
	glPushMatrix();
		glColor3f(0.384, 0.172, 0.156);
		glTranslatef(0,-1,-10);
		glutSolidSphere(4,32,32);
    glPopMatrix();
	glPushMatrix();		//Queue
		glColor3f(0.450, 0.188, 0.168);
		glTranslatef(0,-1,-13.5);
		glRotatef(125,1,0,0);
		gluCylinder(obj,0.8,0.1,2,32,32);
    glPopMatrix();    
    }
	
	glColor3f(0.450, 0.188, 0.168);
	//********** PATTES ARRIÈRES **********
	glPushMatrix(); { // GAUCHE
		glTranslatef(2,-3.5,-10);
			glRotated(PArG1, 1,0,0);
		glTranslatef(-2,3.5,10);
		
		glPushMatrix();//haute
			glTranslatef(2,-3.5,-10);
			glRotatef(110,1,0,0);
			glScalef(0.4,1,1);
			gluCylinder(obj,2.5,0.6,6,32,32);
		glPopMatrix();
		
		glTranslatef(2,-9,-12);
			glRotated(PArG2, 1,0,0);
		glTranslatef(-2,9,12);
		
		glPushMatrix();//basse
			glTranslatef(2,-9,-12);
			glRotatef(85,1,0,0);
			gluCylinder(obj,0.5,0.4,5.5,32,32);
		glPopMatrix();
		
		glTranslatef(2,-14.5,-11.5);
			glRotated(PArG3, 1,0,0);
		glTranslatef(-2,14.5,11.5);
		
		glPushMatrix();	//sabot
			glTranslatef(2,-14.5,-11.5);
			glRotatef(90,1,0,0);
			gluCylinder(obj,0.4,0.6,1,32,32);
		glPopMatrix();
	}glPopMatrix();
	
	glPushMatrix(); { // DROITE
		glTranslatef(2,-3.5,-10);
			glRotated(PArD1, 1,0,0);
		glTranslatef(-2,3.5,10);		
		
		glPushMatrix();//haute
			glTranslatef(-2,-3.5,-10);
			glRotatef(110,1,0,0);
			glScalef(0.4,1,1);
			gluCylinder(obj,2.5,0.6,6,32,32);
		glPopMatrix();
		
		glTranslatef(-2,-9,-12);
			glRotated(PArD2, 1,0,0);
		glTranslatef(2,9,12);
		
		glPushMatrix();//basse
			glTranslatef(-2,-9,-12);
			glRotatef(85,1,0,0);
			gluCylinder(obj,0.5,0.4,5.5,32,32);
		glPopMatrix();
		
		glTranslatef(-2,-14.5,-11.5);
			glRotated(PArD3, 1,0,0);
		glTranslatef(2,14.5,11.5);
		
		glPushMatrix();	//sabot
			glTranslatef(-2,-14.5,-11.5);
			glRotatef(90,1,0,0);
			gluCylinder(obj,0.4,0.6,1,32,32);
		glPopMatrix();
	}glPopMatrix();
	
	//********** PATTES AVANTS **********
	glPushMatrix(); { // GAUCHE			
		glTranslatef(1.8,-3.5,0);
			glRotated(PAvG1, 1,0,0);
		glTranslatef(-1.8,3.5,0);
			
		glPushMatrix();//haute
			glTranslatef(1.8,-3.5,0);
			glRotatef(80,1,0,0);
			glScalef(0.8,1,1);
			gluCylinder(obj,2,0.5,6,32,32);
		glPopMatrix();
		
		glTranslatef(1.8,-9,1);
			glRotated(PAvG2, 1,0,0);
		glTranslatef(-1.8,9,-1);
		
		glPushMatrix();//basse
			glTranslatef(1.8,-9,1);
			glRotatef(90,1,0,0);
			gluCylinder(obj,0.5,0.4,5.5,32,32);
		glPopMatrix();
		
		glTranslatef(1.8,-14.5,1);
			glRotated(PAvG3, 1,0,0);
		glTranslatef(-1.8,14.5,-1);		
		
		glPushMatrix();	//sabot
			glTranslatef(1.8,-14.5,1);
			glRotatef(90,1,0,0);
			gluCylinder(obj,0.4,0.7,1,32,32);
		glPopMatrix();
	}glPopMatrix();
	
	glPushMatrix(); { // DROITE
		glTranslatef(-1.8,-3.5,0);
			glRotated(PAvD1, 1,0,0);
		glTranslatef(1.8,3.5,0);		
		
		glPushMatrix();//haute
			glTranslatef(-1.8,-3.5,0);
			glRotatef(80,1,0,0);
			glScalef(0.8,1,1);
			gluCylinder(obj,2,0.5,6,32,32);
		glPopMatrix();
		
		glTranslatef(-1.8,-9,1);
			glRotated(PAvD2, 1,0,0);
		glTranslatef(1.8,9,-1);	
		
		glPushMatrix();//basse
			glTranslatef(-1.8,-9,1);
			glRotatef(90,1,0,0);
			gluCylinder(obj,0.5,0.4,5.5,32,32);
		glPopMatrix();
		
		glTranslatef(-1.8,-14.5,1);
			glRotated(PAvD3, 1,0,0);
		glTranslatef(1.8,14.5,-1);	
		
		glPushMatrix();	//sabot
			glTranslatef(-1.8,-14.5,1);
			glRotatef(90,1,0,0);
			gluCylinder(obj,0.4,0.7,1,32,32);
		glPopMatrix();
	}glPopMatrix();
	
	glColor3f(0.415, 0.180, 0.160);
	//********** COU VERS TETE **********
	/* 1 */ {
	glPushMatrix();
		glRotatef(-30,1,0,0);				//rotation		1
		gluCylinder(obj,4.3,3,4,32,32);
    glPopMatrix(); }
	/* 2 */ {
	glPushMatrix();
		glTranslatef(0,2,3);				//déplacement	2
		glRotatef(-38,1,0,0);				//rotation		2
		gluCylinder(obj,3.5,2,3,32,32);		//cylindre		2
    glPopMatrix(); }
	/* 3 */ {
	glColor3f(0.450, 0.188, 0.168);
	glPushMatrix();
		glTranslatef(0,4,5);				//déplacement	3
		glRotatef(-55,1,0,0);				//rotation		3
		gluCylinder(obj,2.3,1.5,3,32,32);	//cylindre		3
    glPopMatrix(); }
    
	//********** TETE **********
	glColor3f(0.505,0.215,0.196);
    /* TETE */ {
    glPushMatrix();
		glTranslatef(0,7,7);
		glRotatef(5,1,0,0);
		gluCylinder(obj,2.5,1.5,5,32,32);
		
    /* MUSEAU */
		glPushMatrix();
			glTranslatef(0,0,5);
			glutSolidSphere(1.45,32,32);
		glPopMatrix();
		glPushMatrix();
			glColor3f(0,0,0);
			glTranslatef(0,0,5.2);
			glutSolidSphere(1.3,32,32);
		glPopMatrix();
	
	/* YEUX */ {
		glPushMatrix();						//oeil gauche
			glColor3f(0,0,0);
			glTranslatef(1.8,1,2);
			glutSolidSphere(0.5,32,32);
		glPopMatrix();
		glPushMatrix();						//oeil droit
			glColor3f(0,0,0);
			glTranslatef(-1.8,1,2);
			glutSolidSphere(0.5,32,32);
		glPopMatrix();
		}
    glPopMatrix();
	}
	/* OREILLES */ {
    glPushMatrix();
		
	glPopMatrix();
	}
	
    /* BOIS gauche */ {
    glPushMatrix();
    glColor3f(0.388, 0.133, 0.113);
		glTranslatef(1.5,9,9);
		glPushMatrix();				// niveau 1 devant
			glRotatef(-40,1,0,0);
			gluCylinder(obj,0.4,0.2,3,32,32);
			glRotatef(45,0,1,0);
			gluCylinder(obj,0.4,0.2,3,32,32);
		glPopMatrix();				// niveau 2
		glPushMatrix();
		glTranslatef(0,1.9,2.2);
			glRotatef(-110,1,0,0);
			glRotatef(-10,0,1,0);
			gluCylinder(obj,0.2,0.05,2,32,32);	
		glPopMatrix();	
		glPushMatrix();
		glTranslatef(2.1,1.3,1.6);
			glRotatef(-110,1,0,0);
			glRotatef(-20,0,1,0);
			gluCylinder(obj,0.2,0.05,2,32,32);	
		glPopMatrix();		
		glPushMatrix();				// niveau 1 derrière	
			glRotatef(-140,1,0,0);
			glRotatef(10,0,1,0);
			gluCylinder(obj,0.5,0.3,5,32,32);
			
			glPushMatrix();		{	//pic a
				glTranslatef(0,0,2);
				glRotatef(70,0,1,0);
				glRotatef(30,1,0,0);
				gluCylinder(obj,0.4,0.3,2,32,32);
				
				glTranslatef(0,0,2);
				glRotatef(-45,0,0,1);
				glRotatef(40,1,0,0);
				gluCylinder(obj,0.3,0.2,3,32,32);
				
				glTranslatef(0,0,3);
				glRotatef(30,1,0,0);
				gluCylinder(obj,0.2,0.05,1.5,32,32);
			glPopMatrix();		}
			
			glPushMatrix();		{ // pic b
				glTranslatef(0,0,5);
				glRotatef(70,0,1,0);
				glRotatef(30,1,0,0);
				gluCylinder(obj,0.3,0.2,2,32,32);
				
				glTranslatef(0,0,2);
				glRotatef(-45,0,0,1);
				glRotatef(40,1,0,0);
				gluCylinder(obj,0.2,0.1,2,32,32);
				
				glTranslatef(0,0,2);
				glRotatef(30,1,0,0);
				gluCylinder(obj,0.1,0.05,1,32,32);
				
			glPopMatrix();		}
			
			glPushMatrix();		{ // pic c
				glTranslatef(0,0,5);
				gluCylinder(obj,0.3,0.2,2,32,32);
				
				glTranslatef(0,0,2);
				glRotatef(-45,0,0,1);
				glRotatef(40,1,0,0);
				gluCylinder(obj,0.2,0.1,2,32,32);
				
				glTranslatef(0,0,2);
				glRotatef(30,1,0,0);
				gluCylinder(obj,0.1,0.05,1,32,32);
				
			glPopMatrix();		}
			
		glPopMatrix();
		
    glPopMatrix();
	}
    /* BOIS droit */{
    glPushMatrix();
    glColor3f(0.388, 0.133, 0.113);
		glTranslatef(-1.5,9,9);
		glPushMatrix();				// niveau 1 devant
			glRotatef(-40,1,0,0);
			gluCylinder(obj,0.4,0.2,3,32,32);
			glRotatef(-45,0,1,0);
			gluCylinder(obj,0.4,0.2,3,32,32);
		glPopMatrix();				// niveau 2
		glPushMatrix();
		glTranslatef(0,1.9,2.2);
			glRotatef(-110,1,0,0);
			glRotatef(10,0,1,0);
			gluCylinder(obj,0.2,0.05,2,32,32);	
		glPopMatrix();	
		glPushMatrix();
		glTranslatef(-2.1,1.3,1.6);
			glRotatef(-110,1,0,0);
			glRotatef(20,0,1,0);
			gluCylinder(obj,0.2,0.05,2,32,32);	
		glPopMatrix();		
		glPushMatrix();				// niveau 1 derrière	
			glRotatef(-140,1,0,0);
			glRotatef(-10,0,1,0);
			gluCylinder(obj,0.5,0.3,5,32,32);
			
			glPushMatrix();		{	//pic a
				glTranslatef(0,0,2);
				glRotatef(-70,0,1,0);
				glRotatef(30,1,0,0);
				gluCylinder(obj,0.4,0.3,2,32,32);
				
				glTranslatef(0,0,2);
				glRotatef(45,0,0,1);
				glRotatef(40,1,0,0);
				gluCylinder(obj,0.3,0.2,3,32,32);
				
				glTranslatef(0,0,3);
				glRotatef(30,1,0,0);
				gluCylinder(obj,0.2,0.05,1.5,32,32);
			glPopMatrix();		}
			
			glPushMatrix();		{ // pic b
				glTranslatef(0,0,5);
				glRotatef(-70,0,1,0);
				glRotatef(30,1,0,0);
				gluCylinder(obj,0.3,0.2,2,32,32);
				
				glTranslatef(0,0,2);
				glRotatef(45,0,0,1);
				glRotatef(40,1,0,0);
				gluCylinder(obj,0.2,0.1,2,32,32);
				
				glTranslatef(0,0,2);
				glRotatef(30,1,0,0);
				gluCylinder(obj,0.1,0.05,1,32,32);
				
			glPopMatrix();		}
			
			glPushMatrix();		{ // pic c
				glTranslatef(0,0,5);
				gluCylinder(obj,0.3,0.2,2,32,32);
				
				glTranslatef(0,0,2);
				glRotatef(45,0,0,1);
				glRotatef(40,1,0,0);
				gluCylinder(obj,0.2,0.1,2,32,32);
				
				glTranslatef(0,0,2);
				glRotatef(30,1,0,0);
				gluCylinder(obj,0.1,0.05,1,32,32);
				
			glPopMatrix();		}
			
		glPopMatrix();
		
    glPopMatrix();
	}
    
    glPopMatrix();
    
	glColor3f(0.87,0.72,0.52);
}

GLvoid Modelisation()
{
	VM_init(); //initialisation de la matrice de modélisation
	GLUquadricObj *obj = gluNewQuadric();
	// Entre glPushMatrix et glPopMatrix s'écrit la description de la scène.
	glColor3f(1,1,1);
	//ma_main();

	mon_cerf();
	
	axes();
	glutSwapBuffers();
}

int main(int argc, char **argv) 
{  
  return notre_init(argc, argv, &Modelisation);
}
