#pragma once
#include "degree.h"
#include "securityStudent.h"
#include <iostream>

//Subclass from D.3
SecurityStudent::SecurityStudent() {
	degree = SECURITY;
}

string SecurityStudent::getDegreeProgram(Degree inputDegree) {
	return "SECURITY";
}

SecurityStudent::~SecurityStudent() {}
