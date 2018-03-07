// Simple Rectangle 
//

#include "stdafx.h"
#include <iostream>

using namespace std;

class Dikdortgen
{
public:
	int x, y;

	Dikdortgen();
	~Dikdortgen();
	void EkranaCiz();
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

    return 0;
}

