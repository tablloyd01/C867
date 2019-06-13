#pragma once
#include "roster.h"
#include "degree.h"
#include "networkStudent.h"
#include "securityStudent.h"
#include "softwareStudent.h"
#include "student.h"
#include <vector>

//Creating array for E.1
Roster::Roster() {
	for (int i = 0; i < sizeof(classRosterArray) / sizeof(classRosterArray[0]); ++i) {
		classRosterArray[i] = nullptr;
	}
}

//Destructor
Roster::~Roster(){
	delete* classRosterArray;
}

//Create Objects and populate the array E.2 and E.3
void Roster::add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, Degree degree) {	
	for (int i = 0; i < sizeof(classRosterArray) / sizeof(classRosterArray[i]); i++) {
		if (classRosterArray[i] == nullptr) {
			if (degree == NETWORK) {
				classRosterArray[i] = new NetworkStudent(studentID, firstName, lastName, emailAddress, age, daysInCourse1, daysInCourse2, daysInCourse3, degree);
			}
			else if (degree == SECURITY) {
				classRosterArray[i] = new SecurityStudent(studentID, firstName, lastName, emailAddress, age, daysInCourse1, daysInCourse2, daysInCourse3, degree);
			}
			else if (degree == SOFTWARE) {
				classRosterArray[i] = new SoftwareStudent(studentID, firstName, lastName, emailAddress, age, daysInCourse1, daysInCourse2, daysInCourse3, degree);
			}
			else {
				classRosterArray[i] = new Student(studentID, firstName, lastName, emailAddress, age, daysInCourse1, daysInCourse2, daysInCourse3, degree);
			}
			break;
		}
	}
}

//Removal function from E.3
void Roster::remove(string studentID) {
	for (int i = 0; i < sizeof(classRosterArray) / sizeof(classRosterArray[0]); ++i) {
		if (classRosterArray[i] == nullptr) {}
		else if (classRosterArray[i]->GetStudentID() == studentID) {
			classRosterArray[i]->~Student();
			classRosterArray[i] = nullptr;
			std::cout << "Student removed" << endl;
			return;
		}
		else {}
	}
	std::cout << "Student not found." << endl;
	return;
}

//Print function from E.3
void Roster::printAll()
{
	for (int i = 0; i < sizeof(classRosterArray) / sizeof(classRosterArray[0]); ++i) {
		classRosterArray[i]->print();
	}
	return;
}

//Find and print average days in course
void Roster::printAverageDaysInCourse(string studentID) {
	for (int i = 0; i < sizeof(classRosterArray) / sizeof(classRosterArray[0]); ++i) {
		if (classRosterArray[i] != nullptr) {
			if (classRosterArray[i]->GetStudentID() == studentID) {
				std::cout << "Average days in course: ";
				classRosterArray[i]->GetDaysToComplete();
				std::cout << endl;
				return;
			}
		}
	}
}

//Invalid email identifier from E.3
void Roster::printInvalidEmails() {
	for (int i = 0; i < sizeof(classRosterArray) / sizeof(classRosterArray[0]); ++i) {
		string email = classRosterArray[i]->GetEmailAddress();
		if (email.find(' ') != string::npos || email.find('@') == string::npos || email.find('.') == string::npos) {
			std::cout << email << " is invalid" << endl;
		}
	}
}

//Print Degree by Program from E.3
void Roster::printByDegreeProgram(Degree degreeProgram) {
	std::cout << "Finding students in specified program:" << endl;
	for (int i = 0; i < sizeof(classRosterArray) / sizeof(classRosterArray[0]); ++i) {
		if (classRosterArray[i] != nullptr) {
			if (degreeProgram == classRosterArray[i]->GetDegreeTypes()) {
				classRosterArray[i]->print();
			}
		}
	}
}

int main() {

	Roster classRoster;

	const string studentData[] =
	{
	"A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY",
	"A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK",
	"A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE",
	"A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY",
	"A5,Lloyd,Nelson,lnel140@wgu.edu,27,14,12,3,SOFTWARE"
	};

	Degree tempDegree;
	string degreeName;

	for (int i = 0; i < 5; i++) {
		stringstream ss(studentData[i]);

		vector<string> result;

		while (ss.good()) {
			string substr;
			getline(ss, substr, ',');
			result.push_back(substr);
		}
		if (result[8] == "SECURITY") {
			tempDegree = Degree::SECURITY;
		}
		if (result[8] == "SOFTWARE") {
			tempDegree = Degree::SOFTWARE;
		}
		if (result[8] == "NETWORK") {
			tempDegree = Degree::NETWORK;
		}
		classRoster.add(result[0], result[1], result[2], result[3], stoi(result[4]), stoi(result[5]), stoi(result[6]), stoi(result[7]), tempDegree);
	}

	std::cout << "Scripting and Programming - Applications - C867" << endl;
	std::cout << "Written in C++" << endl;
	std::cout << "Lloyd Nelson" << endl;
	std::cout << "001121334" << endl;
	std::cout << endl << "*************************************************************************************" << endl << endl;

	classRoster.printAll();

	std::cout << endl << "*************************************************************************************" << endl << endl;

	classRoster.printInvalidEmails();

	std::cout << endl << "*************************************************************************************" << endl << endl;

	for (int j = 0; j < 5; ++j) {
		if (classRoster.classRosterArray[j] != nullptr) {
			string currentID = classRoster.classRosterArray[j]->GetStudentID();
			string currentName = classRoster.classRosterArray[j]->GetFirstName() + " " + classRoster.classRosterArray[j]->GetLastName();
			std::cout << "Name: " << currentName << endl;
			std::cout << "Student ID: " << currentID << endl;
			classRoster.printAverageDaysInCourse(currentID);
			std::cout << endl << "*************************************************************************************" << endl << endl;
		}
	}
	classRoster.printByDegreeProgram(SOFTWARE);
	std::cout << endl << "*************************************************************************************" << endl << endl;
	classRoster.remove("A3");
	classRoster.remove("A3");
	return 0;
}