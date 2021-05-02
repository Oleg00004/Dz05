#include"Eczamen.h"
#include"Avtos.h"
#include <conio.h>
#include <iostream>
#include <fstream>

int main()
{
	string nameA;
	string nameM;
	Avtosalon a;
	a.fromFile();

	a.ClicA(nameA);
	a.ClicM(nameM);

	//a.showA();
	//printf("Vvedite nazvanie avto dla pocupci");
    //a.searchAvto(nameA);
	//a.showM();
	//cout << "Vvedite Ima menedzera u kotorogo budite oformlat zacaz : " << endl;
	//a.searchMenedzer(nameM);

	Pocupca b;
	/*string name;
	string surname;
	string ocestvo;
	string telefon;
	string adres;
	string innom;
	cout << "Vvedite Ima" << endl;
	cin >> name;
	cout << "Vvedite Familiu" << endl;
	cin >> surname;
	cout << "Vvedite Ocestvo" << endl;
	cin >> ocestvo;
	cout << "Vvedite telefon" << endl;
	cin >> telefon;
	cout << "Vvedite adres" << endl;
	cin >> adres;
	cout << "Vvedite IndCode" << endl;
	cin >>innom;
	Pocupatel c(name,surname,ocestvo,telefon,adres,innom);*/
	Pocupatel c("Peta", "Petcin", "Patochin", "(111)222-333", "ul.Gdeto", "i6n5m444");
	b.addPocupatel(c);
	b.addAvtosalon(a);
    b.toFile();
	cout << "Zacaz oformlen na :" << endl;
	cout<< c;
	cout <<"\n"<<"Dannie dobavleni v Sertificat" << endl;


	//const char* PATH = "E:\\Users\\Oleg\\source\\repos\\Project2604\\Project2604\\Sertificat.txt";
	//char ch = 0;
	//ifstream in(PATH);
	//while ((ch = in.get()) != EOF) { 
	//	cout << ch;
	//}
	//in.close();
	return 0;
}
