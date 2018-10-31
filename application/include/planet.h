//
// Created by Rosemary Adejoh && Liselot Ramirez on 26.10.18.
//
#include <iostream>
#include <glm/gtc/type_ptr.hpp>
using namespace std;

//ASSIGNMENT 1 - RENDER PLANETS
struct Planet {
	string name;
	glm::fvec3 size;
	glm::fvec3 translate;
	float rotation;
	float timeDiff;
	float orbitDiff;
};


//OPENGL_FRAMEWORK_APPLICATION_SYSTEM_H
