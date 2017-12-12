// 06Practica_6.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "06Practica_6.h"

int main()
{
	char *cad = "yes";
	int count = Tools::countWords(cad);
	cout <<"Word: "<<cad<< " Count: "<<count<<endl;
	int sum = Tools::sumNumbers();
	cout << "Numbers sum: " << sum<<endl;
	
	getchar();
    return 0;
}

int Tools::countWords(char *cad) {
	int count = 0;
	ifstream file("Read.txt");
	char str[255];

	while (file.getline(str, 255))
	{
		if (!strcmp(str, cad))
			count++;
	}

	return count;
}

int Tools::sumNumbers() {
	ifstream file("ReadNumbers.txt");
	char str[255];
	int sum = 0;
	while (file.getline(str, 255))
	{
		stringstream ss(str);
		int i;
		while (ss >> i) {
			sum += i;
			if (ss.peek() == ',')
				ss.ignore();
		}
	}
	return sum;
}


