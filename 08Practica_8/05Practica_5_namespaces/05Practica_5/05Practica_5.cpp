// 05Practica_5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "practica_5.h"

int main()
{
	char *buffer = "Hello World!";
	char bufferRead[100] = "";
	open("myFile.txt");

	cout << ptrToFile <<endl;

	cout << "Number of characters written: " << write(buffer, 5) << endl;
	close();

	open("myFile.txt");
	cout << "Number of characters read: " << read(bufferRead, 4) << " buffer: " << bufferRead<<endl;
	close();

	getchar();
    return 0;
}

void open(char *filename) {
	ptrToFile = FileTools::openFilePlease(filename, "at+");
}

void close() {
	FileTools::closeFilePlease(ptrToFile);
}

int write(char *buffer, int cant) {
	int charWritten = FileTools::writeInFilePlease(ptrToFile, buffer, cant);
	return charWritten;
}

int read(char bufferRead[], int cant) {
	int charRead = FileTools::readFromFilePlease(ptrToFile, bufferRead, cant);
	return charRead;
}