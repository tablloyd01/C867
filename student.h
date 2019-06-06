#pragma once
#include "degree.h"
#ifndef STUDENT_H
#define STUDENT_H

using namespace std;

class Student {
public:
	//Accessors from D.2
	string GetStudentID() const;
	string GetFirstName() const;
	string GetLastName() const;
	string GetEmailAddress() const;
	int GetStudentAge() const;
	int GetDaysToComplete() const;
	Degree GetDegreeTypes() const;

	//Mutators from D.2
	void SetStudentID(string studentIDrhs);
	void SetFirstName(string firstNamerhs);
	void SetLastName(string lastNamerhs);
	void SetEmailAddress(string emailAddressrhs);
	void SetStudentAge(int studentAgerhs);
	void SetDaysToComplete(int days1rhs, int days2rhs, int days3rhs);
	void SetDegreeTypes(Degree degreeTypesrhs);

	//Constructor from D.2
	void setDefaults();

	//Virtual Print from D.2
	virtual void print();

	//Deconstructor from D.2
	~Student();

	//Virtual GetDegree from D.2
	virtual Degree getDegreeProgram();

private:
	//Variables from requirement D.1
	string studentID;
	string firstName;
	string lastName;
	string emailAddress;
	int studentAge;
	int daysToComplete[3];
	Degree degreeTypes;
};

#endif