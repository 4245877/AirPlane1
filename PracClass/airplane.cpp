#include "airplane.h"
#include <iostream>
#include <string>
using namespace std;

Airplane::Airplane(double originNumber, int originType, string originNapryamok, double originperiod)
{
    SetNumber(0.0);
    SetType(0);
    SetNapryamok("None");
    SetPeriod(0);
}


void Airplane::SetNumber(double newNumber)
{
	if (newNumber > 0)
	{
		number = newNumber;
	}
}
void Airplane::SetType(int newType)
{
	if (newType < 20)
	{
		type = newType;
	}
}
void Airplane::SetNapryamok(string newNapryamok)
{
	if (newNapryamok.length() < 20)
	{
		napryamok = newNapryamok;
	}

}
void Airplane::SetPeriod(double newPeriod)
{
	if (newPeriod > 0)
	{
		period = newPeriod;
	}
}
void Airplane::Show() const
{
    cout << "Airplane: \n";
    cout << "\nNumber: " << GetNumber();
    cout << "\nType: " << GetType();
    cout << "\nNapryamok: " << GetNapryamok();
    cout << "\nPeriod: " << GetPeriod();
    cout << endl;
}

void Airplane::Sort(Airplane* airplane1, short kilkist, short a) const
{
    // ïî òèïó ë³òàêà 
    for (short i = 1; i < kilkist; i++)
    {
        short key = airplane1[i].type;
        short j;

        for (j = i - 1; j >= 0 && airplane1[j].type > key; j--)
        {
            airplane1[j + 1].type = airplane1[j].type;
        }
        airplane1[j + 1].type = key;
    }
    for (short i = 0; i < kilkist; i++)
    {
        cout << "\nAirPlane¹ " << a << airplane1[i].type << endl;
    }
}

void Airplane::Search(Airplane* airplane1, short a) const
{
	// ïî òèïó ë³òàêà 
    cout << "Enter value: ";
    short typePlane;
    cin >> typePlane;
    cout << endl;
    for (short i = 0; i < GetType(); i++)
    {
        if (airplane1[i].GetType() == typePlane)
        {
            cout << "Tak, litak taeoho typu ye\n";
        }
        else
        {
            cout << "Litaka z takym typom nemaye. :(\n";
        }
    }
}

void Airplane::Edit()
{
	cout << "1  Edit number.\n";
	cout << "2. Edit type\n";
	cout << "3. Edit napryamok\n";
	cout << "4. Edit period\n";
    int num;
    cin >> num;

    switch (num) {
    case 1: {
        short numb;
        cin >> numb;
        SetNumber(numb);
        break;
    }
    case 2: {
        int numb;
        cin >> numb;
        SetType(numb);
        break;
    }
    case 3: {
        string text;
        cin >> text;
        SetNapryamok(text);
        break;
    }

    case 4: {
        double nap;
        cin >> nap;
        SetPeriod(nap);
        break;
    }
    default:
        cout << "Error\n";
        break;
    }
}
