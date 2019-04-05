#pragma once
#include <iostream>
#include <string>
using namespace std;
#ifndef ALIVE_H
#define ALIVE_H

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
	bird(string n, string h, int a, double he, int w) :
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
public:
	int posx = 10;
	int posy = 10;
	int weight;
	animal(string n, string h, int a, int w) :
		Alive(n, h, a)
	{
		weight = w;
	}
	void printAnimal()
	{
		Alive::printAnimal();
		cout << ", weights " << weight << " kilogrammes";
	}
};



class dog : public animal
{
public:
	dog(string n, string h, int a, int w) :
		animal(n, h, a, w)
	{}
	void move()
	{
		cout << "where do you want to move your dog? \n pos x: ";
		cin >> posx;
		cout << endl;
		cout << "pos y: ";
		cin >> posy;
	}
	void printAnimal()
	{
		animal::printAnimal();
		cout << ", and is currently at place of (" << posx << ", " << posy << ") " << endl;
	}
};

class cat : public animal
{
public:
	cat(string n, string h, int a, int w) :
		animal(n, h, a, w){}
	void move()
	{
		cout << "where do you want to move your cat?" << endl;
		cout << "pos x: " << endl;
		cin >> posx;
		cout << endl;
		cout << "pos y: ";
		cin >> posy;
	}
	void printAnimal()
	{
		animal::printAnimal();
		cout << ", and is currently at place of (" << posx << ", " << posy << ") " << endl;
	}
};
#endif