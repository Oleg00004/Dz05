#pragma once
#include<iostream>
#include<fstream>
#include<Windows.h>
#include<algorithm>
#include<map>
#include<list>
#include<vector>
using namespace std;

class Menedzers
{
	string name;
	string surname;
	string ocestvo;
	string dateBig;
	string telefon;
	int staz;
public:
	Menedzers();
	Menedzers(string name, string surname, string ocestvo, string dateBig, string telefon, int staz);
	Menedzers(const Menedzers& obj);
	~Menedzers();
	void setName(string name);
	void setSurname(string surname);
	void setOcestvo(string ocestvo);
	void setDateBig(string dateBig);
	void setTelefon(string telefon);
	void setStaz(int staz);
	string getName();
	string getSurname();
	string getOcestvo();
	string getDateBig();
	string getTelefon();
	int getStaz();
	void showM();
	friend ostream& operator<<(ostream& out, Menedzers& obj);
	void toFile(fstream& a);
	void toFileA(fstream& k);
	void fromFile(fstream& a);

};
