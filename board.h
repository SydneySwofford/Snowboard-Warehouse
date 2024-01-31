#ifndef _BOARD_H
#define _BOARD_H

#include <string>
class board
{public:
	int shape{};
	int flex{};
	int size{};
	int ability{};
	double price{};
	std::string color{};
	std::string name{};
	std::string brand{};

	//constructor
	board();
	board(int shape, int flex, int size, int ability, double price, std::string color, std::string name, std::string brand);

	//copy constructor
	board(const board& source);

	//destructor
	~board();

	//setter/getter
	void set_shape(int sh_) {
		shape = sh_;
	}
	void set_flex(int fl_) {
		flex = fl_;
	}
	void set_size(int sz) {
		size = sz;
	}
	void set_ability(int abil_) {
		ability = abil_;
	}
	void set_price(double pri_) {
		price =pri_;
	}
	void set_color(std::string col_) {
		color = col_;
	}
	void set_name(std::string nm_) {
		name = nm_;
	}
	void set_brand(std::string bran_) {
		brand = bran_;
	}

};

#endif