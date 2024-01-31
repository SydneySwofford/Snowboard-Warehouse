#include "board.h"
#include<iostream>

//constructor
board::board() {};

board::board(int shape, int flex, int size, int ability, double price, std::string color, std::string name, std::string brand)
	:shape{ shape }, flex{ flex }, size{ size }, ability{ ability }, price{ price }, color{ color }, name{ name }, brand{ brand } {

};

//copy constructor 
board::board(const board& source) 
	:shape{ source.shape }, flex{ source.flex }, size{ source.size }, ability{ source.ability }, price{ source.price }, color{ source.color }, name{ source.name }, brand{ source.brand }  {
};


//destructor
board::~board() {
	
};