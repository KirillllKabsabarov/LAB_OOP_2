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
	
	Square *p = new Square;
	Square *p2 = new Square(20, 20);
	Square *p3 = new Square(*p2);
	//удаление динамических объектов  
	delete p;
	delete p2;
	delete p3;

	_getch();
	return 0;
}
