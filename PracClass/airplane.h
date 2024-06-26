#pragma once
#include <iostream>
#include <string>
using namespace std;

class Airplane
{
private:
	double number;
	int type;
	string napryamok;
	double period;

public:
	Airplane()
	{ }
	Airplane(double originNumber, int originType, string originNapryamok, double originperiod);

	double GetNumber()	  const	{ return number; }
	int GetType()         const	{ return type; }
	string GetNapryamok() const { return napryamok; }
	double GetPeriod()    const	{ return period; }


	void SetNumber(double newNumber);
	void SetType(int newType);
	void SetNapryamok(string newNapryamok);
	void SetPeriod(double newPeriod);


	void Show() const;
	void Sort(Airplane* airplanes, short kilkist, short a) const;
	void Search(Airplane* airplane1, short a) const;
	void Edit();
};


class 
