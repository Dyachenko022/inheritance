#pragma once
#include <iostream>
#include <string>
using namespace std;

#ifndef STUDENT_H
#define STUDENT_H
class Student
{
public:
	string name;
	string surname;
	int group;
	void printStudent()
	{
		cout << name << " " << surname << " is in group # " << group << endl;
	}
	Student(string n, string s, int g)
	{
		name = n;
		surname = s;
		group = g;
	}
};

class Headman : public Student
{
public:
	int daysAsHeadman;
	string currentObj;
	Headman(string n, string s, int g, int d, string c) :
		Student(n, s, g)
	{
		daysAsHeadman = d;
		currentObj = c;
	}
	void printStudent()
	{
		Student::printStudent();
		cout << "Days as headman: " << daysAsHeadman << ", current objective: " << currentObj << endl;
	}
};
#endif
