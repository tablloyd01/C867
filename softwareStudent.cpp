#pragma once
#include "degree.h"
#include "softwareStudent.h"
#include <iostream>

//Subclass from D.3
SoftwareStudent::SoftwareStudent() {
	degree = SOFTWARE;
}

string SoftwareStudent::getDegreeProgram(Degree inputDegree) {
	return "SOFTWARE";
}

SoftwareStudent::~SoftwareStudent() {}
