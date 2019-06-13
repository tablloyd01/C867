#pragma once
#ifndef SOFTWARESTUDENT_H
#define SOFTWARESTUDENT_H
#include "student.h"
#include "degree.h"

//Inheretence class from D.3
class SoftwareStudent : public Student {
	using Student::Student;
public:
	SoftwareStudent();
	virtual string getDegreeProgram(Degree inputDegree) override;
	~SoftwareStudent();

private:
	Degree degree;
};

#endif