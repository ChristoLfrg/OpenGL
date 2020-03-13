#include "VM_init.h"

GLfloat z = -8.0f;
extern float xrot;
extern float yrot;

void VM_init() {
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	glTranslatef(0,0,z);
	glRotatef(xrot,1,0,0);
	glRotatef(yrot,0,1,0);
}
