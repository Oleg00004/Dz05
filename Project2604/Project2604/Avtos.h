#pragma once
#include<iostream>
#include<fstream>
#include<Windows.h>
#include<algorithm>
#include<map>
#include<list>

using namespace std;

class Avto
{
	string name;
	string mark;
	string god;
	string Obdvig;
	string kuzov;
	double stoimost;
	int nal;
public:
	Avto();
	Avto(string name, string mark, string god, string Obdvig, string kuzov, double stoimost, int nal);
	Avto(const Avto& obj);
	~Avto();

	void setName(string name);
	void setMark(string mark);
	void setGod(string god);
	void setObdvig(string Obdvig);
	void setKuzov(string kuzov);
	void setStoimost(double stoimost);
	void setNal(int nal);

	string getName();
	string getMark();
	string getGod();
	string getObdvig();
	string getKuzov();
	double getStoimost();
	int getNal();

	void show();
	friend ostream& operator<<(ostream& out, Avto& obj);
	void toFile(fstream& f);
	void fromFile(fstream& f);
	void toFileA(fstream& l);
};

