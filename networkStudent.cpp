#pragma once
#include "degree.h"
#include "networkStudent.h"
#include <iostream>

//Subclass from D.3
NetworkStudent::NetworkStudent(){
	degree = NETWORK;
}

string NetworkStudent::getDegreeProgram(Degree inputDegree) {
	return "NETWORK";
}

NetworkStudent::~NetworkStudent(){}
