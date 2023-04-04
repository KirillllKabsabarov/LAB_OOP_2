#include <iostream>
#include <conio.h>

class Square {
private:
	int width, height;
	std::string name;
public:
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
	void PlusToSquare(int a_width, int a_height) {
		width = width + a_width;
		height = height + a_height;
	};
	void reset();
};

void Square::reset() {//реализация метода вне описания класса
	width = 0;
	height = 0;
}

int main() {

	Square* p = new Square(20, 20);

	p->PlusToSquare(2, 2);
	delete p;

	_getch();
	return 0;
}