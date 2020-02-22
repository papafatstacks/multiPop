#pragma once
#include <SFML/Graphics.hpp>
//must provide openall libary when using sfml-audio

typedef struct Player {
	int points;
	int health;
	int money;
}player;
typedef struct Terrain {
	short** landType;
	short** standingOn;

}terrain;


typedef struct MultiPopGameData {
	struct player* player;

	char board;
} gameData;


//#include <SFML/Graphics.hpp>