#pragma once
#include<iostream>
#include<fstream>
#include<Windows.h>
#include<algorithm>
#include<list>

using namespace std;

class Pocupatel {
	string name;
	string surname;
	string ocestvo;
	string telefon;
	string adres;
	string innom;
public:
	Pocupatel();
	Pocupatel(string name, string surname, string ocestvo, string telefon, string adres, string innom);
	Pocupatel(const Pocupatel& obj);
	~Pocupatel();
	void setName(string name);
	void setSurname(string surname);
	void setOcestvo(string ocestvo);
	void setTelefon(string telefon);
	void setAdres(string adres);
	void setInnom(string innom);
	string getName();
	string getSurname();
	string getOcestvo();
	string getTelefon();
	string getAdres();
	string getInnom();
	void showM();
	friend ostream& operator<<(ostream& out, Pocupatel& obj);
	void toFile(fstream& p);
	void fromFile(fstream& p);

};

