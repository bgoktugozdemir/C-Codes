// Simple Rectangle 
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>

using namespace std;

class Dikdortgen
{
public:
	int x, y;

	Dikdortgen();
	~Dikdortgen();
	void EkranaCiz();
	void EkranaCiz2();
	void setW(int x);
	void setH(int y);
	int getW();
	int getH();

private:

};

Dikdortgen::Dikdortgen()
{
}

Dikdortgen::~Dikdortgen()
{
}

void Dikdortgen::EkranaCiz()
{
	for (int i = 0; i < getH(); i++)
	{
		for (int j = 0; j < getW(); j++)
		{
			cout << "*";
		}
		cout << endl;
	}
}

void Dikdortgen::EkranaCiz2()
{
	for (int i = 0; i < getH(); i++)
	{
		if (i == 0 || i == getH()-1) {
			for (int j = 0; j < getW(); j++)
			{
				cout << '*';
			}
		}
		else
		{
			cout << '*' << setw((getW() - 1)) << '*';
		}
		cout << endl;
	}
}

void Dikdortgen::setW(int x)
{
	this->x = x;
}

void Dikdortgen::setH(int y)
{
	this->y = y;
}

int Dikdortgen::getW()
{
	return x;
}

int Dikdortgen::getH()
{
	return y;
}

int main()
{
	Dikdortgen d = Dikdortgen();

	d.setW(50);
	d.setH(10);

	d.EkranaCiz();

	cout << endl  << "######################################" << endl << endl;

	d.EkranaCiz2();

    return 0;
}

