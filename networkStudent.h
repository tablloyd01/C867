#pragma once
#ifndef NETWORKSTUDENT_H
#define NETWORKSTUDENT_H
#include "degree.h"
#include "student.h"	

//Inheretence class from D.3
class NetworkStudent : public Student {
	using Student::Student;
public:
	NetworkStudent();
	~NetworkStudent();
	virtual string getDegreeProgram(Degree inputDegree) override;
private:
	Degree degree;
};
#endif