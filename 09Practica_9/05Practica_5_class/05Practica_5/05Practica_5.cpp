// 05Practica_5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "practica_5.h"

int main()
{
	char *buffer = "Hello World!";
	char bufferRead[100] = "";
	FilesAPI api;

	open("myFile.txt", api);

	cout << ptrToFile <<endl;

	cout << "Number of characters written: " << write(buffer, 5, api) << endl;
	close(api);

	open("myFile.txt", api);
	cout << "Number of characters read: " << read(bufferRead, 4, api) << " buffer: " << bufferRead<<endl;
	close(api);

	getchar();
    return 0;
}

void open(char *filename, FilesAPI &api) {
	ptrToFile = api.openFilePlease(filename, "at+");
}

void close(FilesAPI &api) {
	api.closeFilePlease(ptrToFile);
}

int write(char *buffer, int cant, FilesAPI &api) {
	int charWritten = api.writeInFilePlease(ptrToFile, buffer, cant);
	return charWritten;
}

int read(char bufferRead[], int cant, FilesAPI &api) {
	int charRead = api.readFromFilePlease(ptrToFile, bufferRead, cant);
	return charRead;
}