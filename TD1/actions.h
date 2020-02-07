#ifndef __ACTIONS
#define __ACTIONS

#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>
#include <unistd.h>
#include <stdio.h> 
#include <stdlib.h> 
/* ascii codes for various special keys */

#include "touches.h"
#include "switch_blend.h"
#include "switch_light.h"
#include <stdlib.h>

void touche_pressee(unsigned char key, int x, int y);
void touche_speciale(int key, int x, int y);
#endif
