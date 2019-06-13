#pragma once
#ifndef SECURITYSTUDENT_H
#define SECURITYSTUDENT_H
#include "student.h"
#include "degree.h"

//Inheretence class from D.3
class SecurityStudent : public Student {
	using Student::Student;
public:
	SecurityStudent();
	virtual string getDegreeProgram(Degree inputDegree) override;
	~SecurityStudent();
private:
	Degree degree;
};
#endif