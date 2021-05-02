#include "Pocupatel_.h"

ostream& operator<<(ostream& out, Pocupatel& obj)
{
	out << "Name:" << obj.name
		<< "\nSurname:" << obj.surname
		<< "\nOcestvo:" << obj.ocestvo
		<< "\nPhone:" << obj.telefon
		<< "\nAdres:" << obj.adres
		<< "\nIndentificator:" << obj.innom << endl;
	return out;
}
Pocupatel::Pocupatel()
{
	name = name;
	surname = surname;
	ocestvo = ocestvo;
	telefon = telefon;
	adres = adres;
	innom = innom;
}

Pocupatel::Pocupatel(string name, string surname, string ocestvo, string telefon, string adres, string innom)
{
	this->name = name;
	this->surname = surname;
	this->ocestvo = ocestvo;
	this->telefon = telefon;
	this->adres = adres;
	this->innom = innom;
}

Pocupatel::Pocupatel(const Pocupatel& obj)
{
	this->name = obj.name;
	this->surname = obj.surname;
	this->ocestvo = obj.ocestvo;
	this->telefon = obj.telefon;
	this->adres = obj.adres;
	this->innom = obj.innom;
}

Pocupatel::~Pocupatel()
{
}

void Pocupatel::setName(string name)
{
	this->name = name;
}

void Pocupatel::setSurname(string surname)
{
	this->surname = surname;
}

void Pocupatel::setOcestvo(string ocestvo)
{
	this->ocestvo = ocestvo;
}

void Pocupatel::setTelefon(string telefon)
{
	this->telefon = telefon;
}

void Pocupatel::setAdres(string adres)
{
	this->adres = adres;
}

void Pocupatel::setInnom(string innom)
{
	this->innom = innom;
}

string Pocupatel::getName()
{
	return name;
}

string Pocupatel::getSurname()
{
	return surname;
}

string Pocupatel::getOcestvo()
{
	return ocestvo;
}

string Pocupatel::getTelefon()
{
	return telefon;
}

string Pocupatel::getAdres()
{
	return adres;
}

string Pocupatel::getInnom()
{
	return innom;
}

void Pocupatel::showM()
{
}

void Pocupatel::toFile(fstream& p)
{

	p << name << " " << surname << " " << ocestvo << "\ntelefon :" << telefon << "\nadres :" << adres << "\ncod :" << innom << "\n";
}

void Pocupatel::fromFile(fstream& p)
{
	p >> name >> surname >> ocestvo >> telefon >> adres >> innom;
}