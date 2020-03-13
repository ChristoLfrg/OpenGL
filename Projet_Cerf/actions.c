#include "actions.h"
#include <stdbool.h>
extern GLfloat xrot;   
extern GLfloat yrot;

extern int blend;
extern int light;

extern GLfloat angleA;
extern GLfloat angleZ;
extern GLfloat angleE;
extern GLfloat angleR;
extern GLfloat angleT;

bool trop (float a){
	return  (a>=90);
}
bool moins (float a){
	return (a<=0);
}

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

    case TOUCHE_MIN_B: 
    case TOUCHE_MAJ_B: 
     blend =  switch_blend(blend);
      break;

    case TOUCHE_MIN_L: 
    case TOUCHE_MAJ_L: 
      light = switch_light(light);
      break;
      
     case TOUCHE_MIN_A:
		if (!trop(angleA)) angleA += 1;
		break;
	 case TOUCHE_MAJ_A:
		if (!moins(angleA)) angleA -=1;
		break;
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
		break;
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
