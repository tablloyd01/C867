#include <iostream>
#include "student.h"
#include "degree.h"
using namespace std;

//Getters
string Student::GetStudentID() const {
	return studentID;
};
string Student::GetFirstName() const {
	return firstName;
};
string Student::GetLastName() const {
	return lastName;
};
string Student::GetEmailAddress() const {
	return emailAddress;
};
int Student::GetStudentAge() const {
	return studentAge;
};
int Student::GetDaysToComplete() const {
	return daysToComplete[0];
	return daysToComplete[1];
	return daysToComplete[2];
}
Degree Student::GetDegreeTypes() const {
	return degreeTypes;
};

//Setters
void Student::SetStudentID(string studentIDrhs) {
	Student::studentID = studentIDrhs;
	return;
};
void Student::SetFirstName(string firstNamerhs) {
	Student::firstName = firstNamerhs;
	return;
};
void Student::SetLastName(string lastNamerhs) {
	Student::lastName = lastNamerhs;
	return;
};
void Student::SetEmailAddress(string emailAddressrhs) {
	Student::emailAddress = emailAddressrhs;
	return;
};
void Student::SetStudentAge(int studentAgerhs) {
	Student::studentAge = studentAgerhs;
	return;
};
void Student::SetDaysToComplete(int days1rhs, int days2rhs, int days3rhs) {
	Student::daysToComplete[0] = days1rhs;
	Student::daysToComplete[1] = days2rhs;
	Student::daysToComplete[2] = days3rhs;

};
void Student::SetDegreeTypes(Degree degreeTypesrhs) {
	Student::degreeTypes = degreeTypesrhs;
	return;
};

//Constructors
void Student::setDefaults() {
	int i = 0;
	studentID = "No student ID";
	firstName = "No first name";
	lastName = "No last name";
	emailAddress = "No email address";
	studentAge = -1;
	degreeTypes = DEFAULT;
	for (i = 0; i < 3; ++i) {
		daysToComplete[i] = -1;
	}
}

//Virtual Print
void Student::print() {}

//Deconstructor
Student::~Student() {}

//Get Degree
Degree Student::getDegreeProgram() {
	return Degree::DEFAULT;
}
