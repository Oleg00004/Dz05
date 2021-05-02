#pragma once
#include<iostream>
#include<fstream>
#include<Windows.h>
#include<algorithm>
#include<map>
#include<list>
#include<vector>
#include "Menedzers.h"
#include "Avtos.h"
#include "Pocupatel_.h"

using namespace std;
//class Avtosalon {
//	map< vector<Avto>,vector<Menedzer>> avto;
//
//};

class Avtosalon {
	list<Avto>avto;
	list<Menedzers>menedzer;
	string name;
public:
	Avtosalon();
	Avtosalon(string name);
	Avtosalon(const Avtosalon& obj);
	~Avtosalon();
	void setName(string name);
	string getName();

	void addAvto(Avto& obj);
	void addMenedzer(Menedzers& obj);

	void delAvto(list<Avto>::iterator it);
	void delMenedzer(list<Menedzers>::iterator it);

	list<Avto>::iterator searchAvto(string name);
	list<Menedzers>::iterator searchMenedzer(string name);

	list<Avto>::iterator ClicA(string y);
	list<Menedzers>::iterator ClicM(string x);

	void showA();
	void showM();

	friend ostream& operator<<(ostream& out, Avtosalon& obj);
	void toFile();
	void fromFile();
};

class Pocupca {
	list<Pocupatel>pocupatel;
	list<Avtosalon>avtosalon;
public:
	Pocupca();
	~Pocupca();
	void addPocupatel(Pocupatel& obj);
	void addAvtosalon(Avtosalon& obj);

	friend ostream& operator<<(ostream& out, Pocupca& obj);
	void toFile();
};
