#include "Avtos.h"
Avto::Avto()
{
	stoimost = NULL;
	nal = NULL;
}

Avto::Avto(string name, string mark, string god, string Obdvig, string kuzov, double stoimost, int nal)
{
	this->name = name;
	this->mark = mark;
	this->god = god;
	this->Obdvig = Obdvig;
	this->kuzov = kuzov;
	this->stoimost = stoimost;
	this->nal = nal;
}

Avto::Avto(const Avto& obj)
{
	this->name = obj.name;
	this->mark = obj.mark;
	this->god = obj.god;
	this->Obdvig = obj.Obdvig;
	this->kuzov = obj.kuzov;
	this->stoimost = obj.stoimost;
	this->nal = obj.nal;
}

Avto::~Avto()
{
}

void Avto::setName(string name)
{
	this->name = name;
}

void Avto::setMark(string mark)
{
	this->mark = mark;
}

void Avto::setGod(string god)
{
	this->god = god;
}

void Avto::setObdvig(string Obdvig)
{
	this->Obdvig = Obdvig;
}

void Avto::setKuzov(string kuzov)
{
	this->kuzov = kuzov;
}

void Avto::setStoimost(double stoimost)
{
	this->stoimost = stoimost;
}

void Avto::setNal(int nal)
{
	this->nal = nal;
}

string Avto::getName()
{
	return name;
}

string Avto::getMark()
{
	return mark;
}

string Avto::getGod()
{
	return god;
}

string Avto::getObdvig()
{
	return Obdvig;
}

string Avto::getKuzov()
{
	return kuzov;
}

double Avto::getStoimost()
{
	return stoimost;
}

int Avto::getNal()
{
	return nal;
}

void Avto::show()
{
	cout << "Name:" <<name
		<< "\nMark:" <<mark
		<< "\nGod:" <<god
		<< "\nObem dvigatela:" <<Obdvig
		<< "\nKuzov:" <<kuzov
		<< "\nStoimost:" <<stoimost
		<< "\nKolicestvo:" <<nal
		<< endl;
}

void Avto::toFile(fstream& f)
{

	f << name << " " << mark << " " << god << " " << Obdvig << " " << kuzov
		<< " " << stoimost << " " << nal << "\n";
}

void Avto::fromFile(fstream& f)
{
	f >> name >> mark >> god >> Obdvig >> kuzov
		>> stoimost >> nal;
}

void Avto::toFileA(fstream& l)
{
		l << "Pocupca avto:\nNazv:" << name << "\nMark :" << mark << "\nGod vipusca:" << god << "\nObem dvigatela :" << Obdvig << "\nKuzov :" << kuzov
			<< "\nStoimost :" << stoimost << "\n";
}

ostream& operator<<(ostream& out, Avto& obj)
{
	out << "Name:" << obj.name
		<< "\nMark:" << obj.mark
		<< "\nGod:" << obj.god
		<< "\nObem dvigatela:" << obj.Obdvig
		<< "\nKuzov:" << obj.kuzov
		<< "\nStoimost:" << obj.stoimost
		<< "\nKolicestvo:" << obj.nal
		<< endl;
	return out;
}
