#pragma once
#ifndef ROSTER_H
#define ROSTER_H
#include <sstream>
#include "degree.h"
#include "student.h"	
#include "NetworkStudent.h"
#include "SoftwareStudent.h"
#include "SecurityStudent.h"

class Roster
{
public:
	//Creating array for E.1
	Roster();

	//Destructor
	~Roster();

	//Create Objects and populate the array E.2 and E.3
	void add(string studentID, string firstName, string lastName, string emailAddress, int age, int daysInCourse1, int daysInCourse2, int daysInCourse3, Degree degree);
	
	//Removal function from E.3
	void remove(string studentID);

	//Print function from E.3
	void printAll();
	void printAverageDaysInCourse(string studentID);
	void printInvalidEmails();
	void printByDegreeProgram(Degree degreeProgram);

	Student* classRosterArray[5];
private:
	int rosterSize = 0;
	int i = 0;
};
#endif