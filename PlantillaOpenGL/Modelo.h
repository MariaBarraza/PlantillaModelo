#pragma once

//--------------------------------------------------------Las clases van con la primera letra MAYUSCULA--------------------------------------------------------


#include <stdio.h>
#include <stdlib.h>
#define GLEW_STATIC
#include "GL/glew.h"
#include "GLFW/glfw3.h"

#include <vector>
#include "Vertice.h"
#include "Shader.h"

using namespace std;

//aqui no se ocupa incluir glm porque ya esta vinculado en vertice y se uso pragma once
class Modelo {

public:

	vector<Vertice> vertices;
	glm::mat4 transformaciones;

	Shader *shader;
	GLuint vertexArrayID;
	GLuint bufferID;
	GLuint transformacionesID;


	Modelo();

	void inicializarVertexArray(GLuint posicionID, GLuint colorID,GLuint transformacionesID);

	void dibujar(GLenum modoDibujo);
		
};
