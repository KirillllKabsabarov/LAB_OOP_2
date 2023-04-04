#include <iostream>
#include <conio.h>

class Square {
public:
	int width;
	int height;
	std::string name;
	Square() {//конст. по умол-ию
		std::cout << "Square()\n";
		width = 0;
		height = 0;
		name = "Square_1";
	}
	Square(int width, int height) {//конст. с парам-ми
		std::cout << "Square(int width, int height)\n";
		this->width = width;
		this->height = height;
		name = "Square_2";
	}
	Square(const Square& p) {//копи конст.
		std::cout << "Square(const Square &p)\n";
		width = p.width;
		height = p.height;
		name = "Square_3";
	}
	~Square() {//деструктор 
		std::cout << width << ", " << height << ", " << name << "\n";
		std::cout << "~Square()\n";
	}
};

int main() {
	{
		Square p;
		Square p2(20, 20);
		Square p3(p2);
	}

	_getch();
	return 0;
}