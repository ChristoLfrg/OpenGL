#include "actions.h"
#include <stdbool.h>
extern GLfloat xrot;   
extern GLfloat yrot;

extern int blend;
extern int light;

bool phase0 = true;
bool phase1 = false;
bool phase2 = false;
bool phase3 = false;
bool phase4 = false;

int compteur = 0;

extern GLfloat PAvG1;
extern GLfloat PAvG2;
extern GLfloat PAvG3;

extern GLfloat PAvD1;
extern GLfloat PAvD2;
extern GLfloat PAvD3;

extern GLfloat PArG1;
extern GLfloat PArG2;
extern GLfloat PArG3;

extern GLfloat PArD1;
extern GLfloat PArD2;
extern GLfloat PArD3;

void touche_pressee(unsigned char key, int x, int y) 
{
    usleep(100);

    switch (key) {    
    case ESCAPE: 
	exit(1);                   	
	break; 
	
    case ESPACE:
      xrot = 0.0f;
      yrot = 0.0f;
      break;

	case DELETE: {
		phase0 = true;
		phase1 = false;
		phase2 = false;
		phase3 = false;
		phase4 = false;
		
		compteur = 0;
		
		PAvG1=0;
		PAvG2=0;
		PAvG3=0;
		
		PAvD1=0;
		PAvD2=0;
		PAvD3=0;
		
		PArG1=0;
		PArG2=0;
		PArG3=0;
		
		PArD1=0;
		PArD2=0;
		PArD3=0;
		break; }
		
    case TOUCHE_MIN_B: {
    case TOUCHE_MAJ_B: 
     blend =  switch_blend(blend);
      break; }

    case TOUCHE_MIN_L: {
    case TOUCHE_MAJ_L: 
      light = switch_light(light);
      break; }
      
     case TOUCHE_MIN_P:		
		if (phase0) {
			PAvG1 += 1;
			PAvG2 += 1;
			PAvG3 += 1;
			
			compteur += 1;
			
			if ((compteur == 7)) {
				phase0 = false;
				phase1 = true;
			}
		}
		else if (phase1) {
			PAvG1 -= 3;
			PAvG2 += 6;
			PAvG3 += 6;
			
			compteur += 1;
			
			if (compteur == 15) {
				phase1 = false;
				phase2 = true;
			}
		}
		else if (phase2) {
			PAvG1 -= 2;
			PAvG2 -= 6;
			PAvG3 -= 6;
			
			compteur += 1;
			
			if (compteur == 20) {
				phase2 = false;
				phase3 = true;
			}
		}
		else if (phase3) {
			PAvG1 += 5;
			PAvG2 -= 6;
			PAvG3 -= 6;
			
			compteur += 1;
			
			if (compteur == 85) {
				phase3 = false;
				phase4 = true;
			}
		}
		else if (phase4) {
			PAvG1 += 1;
			
			compteur += 1;
			
			if (compteur == 95) {
				phase4 = false;
				phase0 = true;
				compteur = 0;
			}
		}
		break;
		
	 case TOUCHE_MAJ_P:
		if (PAvG2 >= 0) {
			PAvG1 += 1;
			PAvG2 -= 2;
			PAvG3 -= 2;
		}
		break;
		
		/*
	case TOUCHE_MIN_Z:
		if (!trop(angleZ)) angleZ += 1;
		break;
	 case TOUCHE_MAJ_Z:
		if (!moins(angleZ)) angleZ -=1;
		break;
	case TOUCHE_MIN_E:
		if (!trop(angleE)) angleE += 1;
		break;
	 case TOUCHE_MAJ_E:
		if (!moins(angleE)) angleE -=1;
		break;
	case TOUCHE_MIN_R:
		if (!trop(angleR)) angleR += 1;
		break;
	 case TOUCHE_MAJ_R:
		if (!moins(angleR)) angleR -=1;
		break;
	case TOUCHE_MIN_T:
		if (!trop(angleT)) angleT += 1;
		break;
	 case TOUCHE_MAJ_T:
		if (!moins(angleT)) angleT -=1;
		break;*/
    }	
}

void touche_speciale(int key, int x, int y)
{
	usleep(100);
	switch(key)
	{
		case GLUT_KEY_UP:
			xrot -= 5.0f;
			break;
			
		case GLUT_KEY_DOWN:
			xrot += 5.0f;
			break;
			
		case GLUT_KEY_LEFT:
			yrot -= 5.0f;
			break;
			
		case GLUT_KEY_RIGHT:
			yrot += 5.0f;
			break;
	}
	
}
