#pragma once
#include <iostream>
#include <string>
#include "degree.h"
using namespace std;

class Student {
public:
	//accessors from D.2
	string GetStudentID() const;
	string GetFirstName() const;
	string GetLastName() const;
	string GetEmailAddress() const;
	int GetStudentAge() const;
	int GetDaysToComplete() const;
	Degree GetDegreeTypes() const;

	//mutators from D.2
	void SetStudentID(string studentIDrhs);
	void SetFirstName(string firstNamerhs);
	void SetLastName(string lastNamerhs);
	void SetEmailAddress(string emailAddressrhs);
	void SetStudentAge(int studentAgerhs);
	void SetDaysToComplete(int days1rhs, int days2rhs, int days3rhs);
	void SetDegreeTypes(Degree degreeTypesrhs);

	//constructor from D.2
	void setDefaults();

private:
	//variables from requirement D.1
	string studentID;
	string firstName;
	string lastName;
	string emailAddress;
	int studentAge;
	int daysToComplete[3];
	Degree degreeTypes;
};