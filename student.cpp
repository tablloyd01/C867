#pragma once
#include "Student.h"

//Default empty overloaded constructor
Student::Student() {}

//Constructor
Student::Student(string studentIDrhs, string firstNamerhs, string lastNamerhs, string emailAddressrhs, int studentAgerhs,
	int days1, int days2, int days3, Degree degreerhs)
{
	studentID = studentIDrhs;
	firstName = firstNamerhs;
	lastName = lastNamerhs;
	emailAddress = emailAddressrhs;
	studentAge = studentAgerhs;
	daysInCourse[0] = days1;
	daysInCourse[1] = days2;
	daysInCourse[2] = days3;
	studentDegree = degreerhs;
}

//Getters
string Student::GetStudentID()const {
	return studentID;
};
string Student::GetFirstName()const {
	return firstName;
};
string Student::GetLastName()const {
	return lastName;
};
string Student::GetEmailAddress()const {
	return emailAddress;
};
int Student::GetStudentAge()const {
	return studentAge;
};
int Student::GetDaysToComplete()const {
	int avgDays = 0;
	avgDays = (daysInCourse[0] + daysInCourse[1] + daysInCourse[2]) / 3;
	cout << avgDays;
	return avgDays;
};
Degree Student::GetDegreeTypes()const {
	return studentDegree;
};

//Setters
void Student::SetStudentID(string studentIDrhs) {
	Student::studentID = studentIDrhs;
	return;
}
void Student::SetFirstName(string firstNamerhs) {
	Student::firstName = firstNamerhs;
	return;
}
void Student::SetLastName(string lastNamerhs) {
	Student::lastName = lastNamerhs;
	return;
}
void Student::SetEmailAddress(string emailAddressrhs) {
	Student::emailAddress = emailAddressrhs;
	return;
}
void Student::SetStudentAge(int studentAgerhs) {
	Student::studentAge = studentAgerhs;
	return;
}
void Student::SetDaysToComplete(int days1rhs, int days2rhs, int days3rhs) {
	Student::daysInCourse[0] = days1rhs;
	Student::daysInCourse[1] = days2rhs;
	Student::daysInCourse[2] = days3rhs;

}
void Student::SetDegreeTypes(Degree degreeTypesrhs) {
	Student::studentDegree = degreeTypesrhs;
	return;
}

//Destructor
Student::~Student() {}

//Virtual Print. Omitted email, Student ID specifier per E.3
void Student::print() {
	cout << studentID << "\t";
	cout << "First Name: " << firstName << "\t";
	cout << "Last Name: " << lastName << "\t";
	cout << "Age: " << studentAge << "\t";// << "\t";
	cout << "Days in course: " << "{" << daysInCourse[0] << ", " << daysInCourse[1] << ", " << daysInCourse[2] << "}" << "\t";
	cout << "Degree: " << getDegreeProgram(studentDegree) << endl; //printDegree referenced below
}

 string Student::getDegreeProgram(Degree inputDegree) {
	if (inputDegree == DEFAULT) { return "DEFAULT"; }
	else if (inputDegree == NETWORK) { return "NETWORK"; }
	else if (inputDegree == SECURITY) { return "SECURITY"; }
	else if (inputDegree == SOFTWARE) { return "SOFTWARE"; }
	return "DEFAULT";
}