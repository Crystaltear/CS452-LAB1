
#include <glut.h>
#include <cmath>

using namespace std;
int counter=0;

////vertexIDs
//GLuint vaoID, vboID;// the buffers that are going to be linked too
////vertices
//GLfloat vertexarray[]={0.2f,0.2f,0.0f,
//					   0.8f,0.2f,0.0f,
//					   0.2f,0.5f,0.0f,
//					   0.8f,0.5f,0.0f,
//					   0.2f,0.8f,0.0f,
//					   0.2f,0.8f,0.0f};// vertices that are drawn x,y,z ...
////indices of triangle
//GLubyte indices[6]={0,1,2,3,4,5};

void drawpoints(){
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1.0, 1.0, 1.0);
	glBegin(GL_POINTS);
		for (int i=1;i<50;i++){
			for (int j=1;j<50;j++){
				glVertex3f(0.02*i,0.02*j,0.0);
			}
		}
	glEnd();
	glFlush();
}

void drawlines(){
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1.0, 1.0, 1.0);
	glBegin(GL_LINE_STRIP);
		glVertex3f(0.2, 0.2, 0.0);
		glVertex3f(0.8, 0.2, 0.0);
		glVertex3f(0.2, 0.5, 0.0);
		glVertex3f(0.8, 0.5, 0.0);
		glVertex3f(0.2, 0.8, 0.0);
		glVertex3f(0.8, 0.8, 0.0);
	glEnd();
	glFlush();
	//glClear(GL_COLOR_BUFFER_BIT);//clears the screen
	// 
	//glGenVertexArrays(1, &vaoID);//generates object name for Vertex Array Objects
	//glBindVertexArray(vaoID);//bind the object to the array

	//glGenBuffers(1, &vboID);//generates object name for the Vertex Buffer Object
	//glBindBuffer(GL_ARRAY_BUFFER, vboID);//bind the object to the array
	//glBufferData(GL_ARRAY_BUFFER, sizeof(vertexarray), vertexarray, GL_STATIC_DRAW);//allocates the memory of the vertices

	//ShaderInfo shaders[]={//create the shader specified by my initshaders 
	//{ GL_VERTEX_SHADER , "vertexshader.glsl"} ,
	//{ GL_FRAGMENT_SHADER , "fragmentshader.glsl"},
	//{ GL_NONE , NULL} 
	//};

	//initShaders(shaders);//creates shaders
	// 
	//glEnableVertexAttribArray(0);//enables the vertex attribute index 
	//glVertexAttribPointer(0,6,GL_FLOAT,GL_FALSE,0,(void*)0);//specified the start the vertice array used to the draw

	//glDrawArrays(GL_LINE_STRIP, 0, 6);//draws array
	//glFlush();//makes sure the prcesses finish
}

void triangle(){
 	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1.0, 1.0, 1.0);
	glBegin(GL_TRIANGLES);
		glVertex3f(0.2, 0.2, 0.0);
		glVertex3f(0.8, 0.2, 0.0);
		glVertex3f(0.2, 0.5, 0.0);
		glVertex3f(0.8, 0.5, 0.0);
		glVertex3f(0.2, 0.8, 0.0);
		glVertex3f(0.8, 0.8, 0.0);
	glEnd();
	glFlush();
	//glClear(GL_COLOR_BUFFER_BIT);//clears the screen
	// 
	//glGenVertexArrays(1, &vaoID);//generates object name for Vertex Array Objects
	//glBindVertexArray(vaoID);//bind the object to the array

	//glGenBuffers(1, &vboID);//generates object name for the Vertex Buffer Object
	//glBindBuffer(GL_ARRAY_BUFFER, vboID);//bind the object to the array
	//glBufferData(GL_ARRAY_BUFFER, sizeof(vertexarray), vertexarray, GL_STATIC_DRAW);//allocates the memory of the vertices

	//ShaderInfo shaders[]={//create the shader specified by my initshaders 
	//{ GL_VERTEX_SHADER , "vertexshader.glsl"} ,
	//{ GL_FRAGMENT_SHADER , "fragmentshader.glsl"},
	//{ GL_NONE , NULL} 
	//};

	//initShaders(shaders);//creates shaders
	// 
	//glEnableVertexAttribArray(0);//enables the vertex attribute index 
	//glVertexAttribPointer(0,6,GL_FLOAT,GL_FALSE,0,(void*)0);//specified the start the vertice array used to the draw

	//glDrawArrays(GL_TRIANGLES, 0, 6);//draws array
	//glFlush();//makes sure the prcesses finish
}

void drawsquare(){
 	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1.0, 1.0, 1.0);
	glBegin(GL_TRIANGLE_STRIP);
		glVertex3f(0.2, 0.2, 0.0);
		glVertex3f(0.8, 0.2, 0.0);
		glVertex3f(0.2, 0.5, 0.0);
		glVertex3f(0.8, 0.5, 0.0);
		glVertex3f(0.2, 0.8, 0.0);
		glVertex3f(0.8, 0.8, 0.0);
	glEnd();
	glFlush();
	//glClear(GL_COLOR_BUFFER_BIT);//clears the screen
	// 
	//glGenVertexArrays(1, &vaoID);//generates object name for Vertex Array Objects
	//glBindVertexArray(vaoID);//bind the object to the array

	//glGenBuffers(1, &vboID);//generates object name for the Vertex Buffer Object
	//glBindBuffer(GL_ARRAY_BUFFER, vboID);//bind the object to the array
	//glBufferData(GL_ARRAY_BUFFER, sizeof(vertexarray), vertexarray, GL_STATIC_DRAW);//allocates the memory of the vertices

	//ShaderInfo shaders[]={//create the shader specified by my initshaders 
	//{ GL_VERTEX_SHADER , "vertexshader.glsl"} ,
	//{ GL_FRAGMENT_SHADER , "fragmentshader.glsl"},
	//{ GL_NONE , NULL} 
	//};

	//initShaders(shaders);//creates shaders
	// 
	//glEnableVertexAttribArray(0);//enables the vertex attribute index 
	//glVertexAttribPointer(0,6,GL_FLOAT,GL_FALSE,0,(void*)0);//specified the start the vertice array used to the draw

	//glDrawArrays(GL_TRIANGLE_STRIP, 0, 6);//draws array
	//glFlush();//makes sure the prcesses finish
}

void drawquad(){
 	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1.0, 1.0, 1.0);
	glBegin(GL_QUADS);
		glVertex3f(0.2, 0.2, 0.0);
		glVertex3f(0.8, 0.2, 0.0);
		glVertex3f(0.6, 0.4, 0.0);
		glVertex3f(0.4, 0.4, 0.0);
	glEnd();
	glFlush(); 
}

void drawpoly1(){
 	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1.0, 1.0, 1.0);
	glBegin(GL_POLYGON);
		glVertex3f(0.2, 0.2, 0.0);
		glVertex3f(0.6, 0.1, 0.0);
		glVertex3f(0.8, 0.4, 0.0);
		glVertex3f(0.7, 0.6, 0.0);
		glVertex3f(0.4, 0.8, 0.0);
	glEnd();
	glFlush(); 
}
void drawpoly2(){
 	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1.0, 1.0, 1.0);
	glBegin(GL_POLYGON);
		glVertex3f(0.2, 0.2, 0.0);
		glVertex3f(0.6, 0.1, 0.0);
		glVertex3f(0.8, 0.4, 0.0);
		glVertex3f(0.7, 0.6, 0.0);
		glVertex3f(0.5, 0.5, 0.0);
		glVertex3f(0.4, 0.8, 0.0);
	glEnd();
	glFlush(); 
}

void drawstar() {
	const float kfPi = 3.141592653589793238462643383279;
	// Draw ten triangles
	const float kfRadius = 0.4;
	const float kfInnerRadius = kfRadius*(1.0/(sin((2.0*kfPi)/5.0)*2.0*cos(kfPi/10.0) + sin((3.0*kfPi)/10.0)));
 	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1.0, 1.0, 1.0);
	glBegin(GL_TRIANGLE_FAN);
		glVertex3f(0.5, 0.5, 0.0);
		for (int iVertIndex = 0; iVertIndex < 10; ++iVertIndex) {
			float fAngleStart	= kfPi/2.0 + (iVertIndex*2.0*kfPi)/10.0;
			float fAngleEnd		= fAngleStart + kfPi/5.0;
			if (iVertIndex % 2 == 0) {
				glVertex3f(0.5 + kfRadius*cos(fAngleStart)/1.1, 0.5 + kfRadius*sin(fAngleStart), 0.0);
				glVertex3f(0.5 + kfInnerRadius*cos(fAngleEnd)/1.1, 0.5 + kfInnerRadius*sin(fAngleEnd), 0.0);
			} else {
				glVertex3f(0.5 + kfInnerRadius*cos(fAngleStart)/1.1, 0.5 + kfInnerRadius*sin(fAngleStart), 0.0);
				glVertex3f(0.5 + kfRadius*cos(fAngleEnd)/1.1, 0.5 + kfRadius*sin(fAngleEnd), 0.0);
			}
		}
	glEnd();
	glFlush();
}

void drawscene(){
  switch(counter%8){//easy way to switch throw functions
    case 0:
      glutDisplayFunc(drawpoints);
      glutPostRedisplay();//sets flags for opengl to redraw the display
      break;
    case 1:
      glutDisplayFunc(drawlines);
      glutPostRedisplay();
      break;
	case 2:
      glutDisplayFunc(triangle);
      glutPostRedisplay();
      break;
	case 3:
      glutDisplayFunc(drawsquare);
      glutPostRedisplay();
      break;
	case 4:
      glutDisplayFunc(drawquad);
      glutPostRedisplay();
      break;
	case 5:
      glutDisplayFunc(drawpoly1);
      glutPostRedisplay();
      break;
	case 6:
      glutDisplayFunc(drawpoly2);
      glutPostRedisplay();
      break;
	case 7:
      glutDisplayFunc(drawstar);
      glutPostRedisplay();
      break;
  }
}
//this function create the interaction with the mouse
void mousepress(int button, int state, int x, int y){
  if(button==GLUT_RIGHT_BUTTON && state==GLUT_DOWN)//right click closes the screen
    exit(0);
  else if(button==GLUT_LEFT_BUTTON && state==GLUT_DOWN){//left click changes the shape color
    counter++;
    drawscene();
  }
}

void Initialize() {
	glClearColor(0.0, 0.0, 0.0, 0.0);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(0.0, 1.0, 0.0, 1.0, -1.0, 1.0);
}

int main(int iArgc, char** cppArgv) {
	glutInit(&iArgc, cppArgv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(250, 250);
	glutInitWindowPosition(200, 200);
	glutCreateWindow("Lab1");
	Initialize();
	glutDisplayFunc(drawscene);//displays callback draws the shapes
	glutMouseFunc(mousepress);//control callback specifies the mouse controls
	glutMainLoop();
	return 0;
}
