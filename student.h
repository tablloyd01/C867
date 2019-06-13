#pragma once
#include "degree.h"
#include <iostream>
#include <cstddef>

//Class from D.2
class Student {
public:

	//Constructors from D.2
	Student(); //Overloaded empty constructor
	Student(string studentIDrhs, string firstNamerhs, string lastNamerhs, string emailAddressrhs, int studentAgerhs,
		int days1, int days2, int days3, Degree degreerhs);
	
	//Destructor from D.2
	~Student();

	//Getters from D.2
	string GetStudentID()const;
	string GetFirstName()const;
	string GetLastName()const;
	string GetEmailAddress()const;
	int GetStudentAge()const;
	int GetDaysToComplete()const;
	Degree GetDegreeTypes()const;

	//Setters from D.2
	void SetStudentID(string studentIDrhs);
	void SetFirstName(string firstNamerhs);
	void SetLastName(string lastNamerhs);
	void SetEmailAddress(string emailAddressrhs);
	void SetStudentAge(int studentAgerhs);
	void SetDaysToComplete(int days1rhs, int days2rhs, int days3rhs);
	void SetDegreeTypes(Degree degreeTypesrhs);

	//Virtual Print from D.2
	virtual void print();
	virtual string getDegreeProgram(Degree inputDegree);

private:

	//Variables from D.1
	string studentID;
	string firstName;
	string lastName;
	string emailAddress;
	int studentAge;
	int daysInCourse[3];
	Degree studentDegree;
};




