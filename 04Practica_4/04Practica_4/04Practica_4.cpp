// 04Practica_4.cpp : Defines the entry point for the console application.
//
//
#include "stdafx.h"
#include <stdio.h>
#include "consola.h"
#include <iostream>
#include "Practica.h"

using namespace std;

struct TEntity;
typedef void(*funcEntity)(TEntity *);
typedef void(*functionEntity)();

// ***************************************************************************************
// ENTIDAD
// ***************************************************************************************
struct TEntity
{
	int m_ix;
	int m_iy;
	int m_speed_x;
	int m_speed_y;
	char m_graphic;
	funcEntity *m_funcs;
	TEntity(funcEntity *funcs, int x, int y, int speed_x, int speed_y, char graphic)
	{
		m_ix = x;
		m_iy = y;
		m_speed_x = speed_x;
		m_speed_y = speed_y;
		m_funcs = funcs;
		m_graphic = graphic;
	}
};


// ***************************************************************************************
// MAIN
// ***************************************************************************************
unsigned int uKey;
void main(int argc, char* argv[])
{
	// THIS IS AN ANIMAL RACE!
	
	
	//JAGUAR  ----> X

	//void (*pf[1])(int, int);
	//pf[0] = moveJaguar;
	//pf = moveJaguar;
	//pf(x,y);

	funcEntity functions[] = { paintEntity, moveEntity};

	
	TEntity *jaguar = new TEntity(functions, 0,	5, JAGUAR_SPEED_X, JAGUAR_SPEED_Y, '>');

	TEntity *deer= new TEntity(functions, 0, 10, DEER_SPEED_X, DEER_SPEED_Y, 'O');

	TEntity *pig = new TEntity(functions, 0, 15, PIG_SPEED_X, PIG_SPEED_Y, '&');

	TEntity *donkey = new TEntity(functions, 0, 20, DONKEY_SPEED_X, DONKEY_SPEED_Y, 'D');

	TEntity *animals[] = { jaguar, deer, pig, donkey };

	for (int i = 0; i < 100; i++) {

		

		cout << "---------------------ANIMALS RELEASED!---------------------";
		
		for each (TEntity *animal in animals)
		{
			animal->m_funcs[0](animal);
			animal->m_funcs[1](animal);

		}
		//Sleep(1000);
		clear();
		hidecursor();
		
		
	}
	
	getchar();
	
}

void paintEntity(TEntity *animal) {

	gotoxy(animal->m_ix, animal->m_iy);
	cout << animal->m_graphic<<endl;

}

void moveEntity(TEntity *animal) {

	animal->m_ix += animal->m_speed_x;
	animal->m_iy += animal->m_speed_y;
}

