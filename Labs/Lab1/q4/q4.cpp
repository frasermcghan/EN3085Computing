#include "q4funcs.h"
#include<iostream>
#include<string>
#include<fstream>

using namespace std;

int main()
{
	ifstream myfile("EquipmentInfo.txt");

	readFile(myfile);

	return 0;
}

