#include "airplane.h"
#include <iostream>
#include <string>
using namespace std;


void Menu(Airplane* airplane1, short kilkist, short a);


int main()
{
	cout << "Zi skilʹkoma litakamy pratsyuvatymemo?\n";
	short kilkist; cin >> kilkist;
	Airplane* airplane1 = new Airplane[kilkist];
	cout << "teper oberit z yakym my mozhemo pratsyuvaty\n";
	short a; cin >> a;

	if (a > kilkist) {
		cout << "Takoho nema";
		return -1;
	}


	Menu(airplane1, kilkist, a);

	
	delete[] airplane1;
	return 0;
}


void Menu(Airplane* airplane1, short kilkist, short a)
{
	while (true)
	{
		cout << "\nAirPlane№ " << a << endl;
		cout << "1. Poshuk \n";
		cout << "2. Sortuvannya za nomerom reysu\n";
		cout << "3. Redahuvannya zapysiv \n";
		cout << "4. Vyvedennya informatsiyi na ekran \n";
		cout << "5. Zmina kilkosti \n";
		cout << "6. Zmina litaka\n";

		short cuc; cin >> cuc;
		switch (cuc)
		{
		case 1:
			airplane1[a].Search(airplane1, a);
			break;
		case 2:
			airplane1[a].Sort(airplane1, kilkist, a);
			break;
		case 3:
			airplane1[a].Edit();
			break;
		case 4:
			airplane1[a].Show();
			break;
		case 5:
			cin >> kilkist;
			break;
		case 6:
			cin >> a;
			break;
		default:
			cout << "takoho variantu nemaye.\n";
			break;
		}
	}
}