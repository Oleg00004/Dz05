#include "Menedzers.h"
ostream& operator<<(ostream& out, Menedzers& obj)
{
	out << "Name:" << obj.name
		<< "\nSurname:" << obj.surname
		<< "\nOcestvo:" << obj.ocestvo
		<< "\nDateBig:" << obj.dateBig
		<< "\nPhone:" << obj.telefon
		<< "\nStaz:" << obj.staz << " goda" << endl;
	return out;
}

Menedzers::Menedzers()
{
	staz = NULL;
}

Menedzers::Menedzers(string name, string surname, string ocestvo, string dateBig, string telefon, int staz)
{
	this->name = name;
	this->surname = surname;
	this->ocestvo = ocestvo;
	this->dateBig = dateBig;
	this->telefon = telefon;
	this->staz = staz;

}

Menedzers::Menedzers(const Menedzers& obj)
{
	this->name = obj.name;
	this->surname = obj.surname;
	this->ocestvo = obj.ocestvo;
	this->dateBig = obj.dateBig;
	this->telefon = obj.telefon;
	this->staz = obj.staz;
}

Menedzers::~Menedzers()
{
}

void Menedzers::setName(string name)
{
	this->name = name;
}

void Menedzers::setSurname(string surname)
{
	this->surname = surname;
}

void Menedzers::setOcestvo(string ocestvo)
{
	this->ocestvo = ocestvo;
}

void Menedzers::setDateBig(string dateBig)
{
	this->dateBig = dateBig;
}

void Menedzers::setTelefon(string telefon)
{
	this->telefon = telefon;
}

void Menedzers::setStaz(int staz)
{
	this->staz = staz;
}

string Menedzers::getName()
{
	return name;
}

string Menedzers::getSurname()
{
	return surname;
}

string Menedzers::getOcestvo()
{
	return ocestvo;
}

string Menedzers::getDateBig()
{
	return dateBig;
}

string Menedzers::getTelefon()
{
	return telefon;
}

int Menedzers::getStaz()
{
	return staz;
}

void Menedzers::showM()
{
	cout << "Name:" <<name
		<< "\nSurname:" <<surname
		<< "\nOcestvo:" <<ocestvo
		<< "\nDateBig:" <<dateBig
		<< "\nPhone:" <<telefon
		<< "\nStaz:" <<staz << " goda" << endl;
}

void Menedzers::toFile(fstream& a)
{
	a << name << " " << surname << " " << ocestvo << " " << dateBig << " " << telefon << " " << staz << "\n";
}

void Menedzers::fromFile(fstream& a)
{
	a >> name >> surname >> ocestvo >> dateBig >> telefon >> staz;
}

void Menedzers::toFileA(fstream& k)
{
		k << "Oformil zacaz Menedzer:\n" << name << "\n" << surname << "\n" << ocestvo << "\ndata ustroistva :" << dateBig << "\ntelefon:" << telefon << "\nstaz :" << staz << "\nPocupatel :" << "\n";

}
