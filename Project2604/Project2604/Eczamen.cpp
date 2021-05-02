#include "Eczamen.h"

ostream& operator<<(ostream& out, Avtosalon& obj)
{
	for (list<Avto>::iterator iter = obj.avto.begin(); iter != obj.avto.end(); iter++)
		out << *iter << endl;
	//return out;
	for (list<Menedzers>::iterator iter = obj.menedzer.begin(); iter != obj.menedzer.end(); iter++)
		out << *iter << endl;
	return out;
}

ostream& operator<<(ostream& out, Pocupca& obj)
{
	for (list<Pocupatel>::iterator iter = obj.pocupatel.begin(); iter != obj.pocupatel.end(); iter++)
		out << *iter << endl;
	return out;
}





Avtosalon::Avtosalon()
{
}

Avtosalon::Avtosalon(string name)
{
	this->name = name;
}

Avtosalon::Avtosalon(const Avtosalon& obj)
{
	this->name = obj.name;
}


Avtosalon::~Avtosalon()
{
	avto.clear();
	menedzer.clear();
}

void Avtosalon::setName(string name)
{
	this->name = name;
}

string Avtosalon::getName()
{
	return name;
}

void Avtosalon::addAvto(Avto& obj)
{
	avto.push_back(obj);
}

void Avtosalon::addMenedzer(Menedzers& obj)
{
	menedzer.push_back(obj);
}

void Avtosalon::delAvto(list<Avto>::iterator it)
{
	avto.erase(it);
}

void Avtosalon::delMenedzer(list<Menedzers>::iterator it)
{
	menedzer.erase(it);
}

list<Avto>::iterator Avtosalon::searchAvto(string name)
{
	for (list<Avto>::iterator iter = avto.begin(); iter != avto.end(); iter++)
	{
		if ((*iter).getName() == name) {
			
			fstream l("Sertificat.txt", ios::app);
			(*iter).toFileA(l);
            return iter;
			
		}
	}
	return avto.end();
}

list<Menedzers>::iterator Avtosalon::searchMenedzer(string name)
{

	for (list<Menedzers>::iterator iter = menedzer.begin(); iter != menedzer.end(); iter++)
	{
		if ((*iter).getName() == name) {
			
			fstream k("Sertificat.txt", ios::app);
			(*iter).toFileA(k);
            return iter;
		}
	}
	return menedzer.end();
}

list<Avto>::iterator Avtosalon::ClicA(string y)
{

		for (list<Avto>::iterator iter = avto.begin(); iter != avto.end();)
		{
			cout << "Vibirite avto: \n"
				<< "Dla prolistovania vperd vedi : a\n" << 
				"Dla prolistovania nazd vedi : d\n" <<
				"Dla pocupci vedi : p\n" << endl;
			(*iter).show();
			string y;
			cin >> y;
			if (y == "a" && iter != avto.end()) {
				 iter++;
			}
			 else if (y == "d" && iter != avto.begin()) {
				iter--;
			}
			else if (y=="p") {
				fstream l("Sertificat.txt", ios::out);
				(*iter).toFileA(l);
				iter = avto.end();
			}
			else 
				iter = avto.begin();
		}
		return avto.end();
}

list<Menedzers>::iterator Avtosalon::ClicM(string x)
{
	for (list<Menedzers>::iterator iter = menedzer.begin(); iter != menedzer.end();)
	{

		cout << "Vibirite Menedzera: \n"
			<< "Dla prolistovania vperd vedi : a\n" <<
			"Dla prolistovania nazd vedi : d\n" <<
			"Dla vibora vedi : p\n" << endl;
		(*iter).showM();
		string x;
		cin >> x;
		if (x == "a" && iter != menedzer.end()) {
			iter++;
		}
		else if (x == "d" && iter != menedzer.begin()) {
			iter--;
		}
		else if (x == "p") {
			fstream k("Sertificat.txt", ios::app);
			(*iter).toFileA(k);
			iter = menedzer.end();
		}
		else
			iter = menedzer.begin();
	}
	return menedzer.end();
}

void Avtosalon::showA()
{
	 	for (list<Avto>::iterator iter = avto.begin(); iter != avto.end(); iter++)
		cout << *iter << endl;
}

void Avtosalon::showM()
{
	for (list<Menedzers>::iterator iter = menedzer.begin(); iter != menedzer.end(); iter++)
		cout << *iter << endl;
}

void Avtosalon::toFile()
{
	fstream f("Avto.txt", ios::app);
	for (list<Avto>::iterator iter = avto.begin(); iter != avto.end(); iter++)
	{

		(*iter).toFile(f);
	}

	fstream a("Menedzer.txt", ios::app);
	for (list<Menedzers>::iterator iter = menedzer.begin(); iter != menedzer.end(); iter++)
	{
		(*iter).toFile(a);
	}
	f.close();
	a.close();
}

void Avtosalon::fromFile()
{
	fstream f("Avto.txt", ios::in);
	while (!f.eof())
	{
		Avto temp;
		temp.fromFile(f);
		avto.push_back(temp);
	}

	fstream a("Menedzer.txt", ios::in);
	while (!a.eof())
	{
		Menedzers temp;
		temp.fromFile(a);
		menedzer.push_back(temp);
	}
	f.close();
	a.close();
}

Pocupca::Pocupca()
{
}

Pocupca::~Pocupca()
{
	avtosalon.clear();
	pocupatel.clear();
}

void Pocupca::addPocupatel(Pocupatel& obj)
{
	pocupatel.push_back(obj);
}

void Pocupca::addAvtosalon(Avtosalon& obj)
{
	avtosalon.push_back(obj);
}

void Pocupca::toFile()
{
	fstream p("Sertificat.txt", ios::app);
	for (list<Pocupatel>::iterator iter = pocupatel.begin(); iter != pocupatel.end(); iter++)
	{
		(*iter).toFile(p);
	}
	p.close();
}