#pragma once
#include <iostream>
#include <string>
using namespace std;
#ifndef INHERITANCE_H
#define INHERITANCE_H

///////////////////////////////////////////////////////////////////////////////////////////////// NUMBER 1 /////////////////////////////////////////////////////////////////////////////////////////////////////////
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
	Headman(string n, string s, int g, int d, string c):
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

////////////////////////////////////////////////////////////////////////////////////////////////////////////// NUMBER 2 ////////////////////////////////////////////////////////////////////////////////////////////
class Alive
{
public:
	string name;
	string habitat;
	int age;
	int speed;
	Alive(string n, string h, int a)
	{
		name = n;
		habitat = h;
		age = a;
	}
	void printAnimal()
	{
		cout << name << " lives in " << habitat << ", is " << age << "years old";
	}

};

class fish : public Alive
{
public:
	double depth;
	bool ifPredator;
	fish(string n, string h, int a, double d, bool i) :
		Alive(n, h, a)
	{
		depth = d;
		ifPredator = i;
	}
	void printAnimal()
	{
	Alive::printAnimal();
	if (ifPredator == true)
		cout << ", is a" << depth << "meters deep and is a predator" << endl;
	else
		cout << ", is a" << depth << "meters deep and is not a predator" << endl;
	}
};

class bird : public Alive
{
public:
	int height;
	int wingspan;
	bird(string n, string h, int a, double he, int w):
		Alive(n, h, a)
	{
		height = he;
		wingspan = w;
	}
	void printAnimal()
	{
		Alive::printAnimal();
		cout << ", is at height of " << height << "meters and has a wingspan of " << wingspan << "centimeters" << endl;
	}
};

class animal : public Alive
{
	int weight;
	animal(string n, string h, int a, int w) :
		Alive(n, h, a)
	{
		weight = w;
	}
	void printAnimal()
	{
		Alive::printAnimal();
		cout << " and weights " << "weight" << "kilogrammes" << endl;
	}
};

class Animal1
{
public:
	string name;
	int age;
	unsigned int posx;
	unsigned int posy;
	int catordog = 0;
	void printanimal()
	{
		if(catordog == 0)
		cout << "cat  named " << name << " is " << age << " years old " << "and is now at place of (" << posx << ", " << posy << ")
};

class dog : public Animal1
{

	void move()
	{
		cout << "where do you want to move your dog? \n pos x: ";
		cin >> posx;
		cout << endl;
		cout << "pos y";
		cin >> posy;
	}
};

class cat : public Animal1
{
	void move()
	{
		cout << "where do you want to move your cat?" << endl;
		cout << "pos x: " << endl;
		cin >> posx;
		cout << endl;
		cout << "pos y";
		cin >> posy;
	}
};
/////////////////////////////////////////////////////////////////////////////////////////////////////// NUMBER 3 ///////////////////////////////////////////////////////////////////////////////////////////////////
#endif