#pragma once
struct TEntity;

const int JAGUAR_SPEED_X = 2;
const int JAGUAR_SPEED_Y = 0;

const int PIG_SPEED_X = 1;
const int PIG_SPEED_Y = 0;

const int DEER_SPEED_X = 2;
const int DEER_SPEED_Y = 1;

const int DONKEY_SPEED_X = 1;
const int DONKEY_SPEED_Y = 2;

void moveJaguarEntity(TEntity *animal);
void moveDeerEntity(TEntity *animal);
void movePigEntity(TEntity *animal);
void moveDonkeyEntity(TEntity *animal);

void paintEntity(TEntity *jaguar);