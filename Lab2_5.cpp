#include <iostream>
#include <conio.h>

class Square {
protected:
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

class ColoredSquare : public Square {
protected:
	int color;
public:
	ColoredSquare() : Square() {//конст. по умол-ию
		std::cout << "ColoredSquare()\n";
		color = 0;
	}
	ColoredSquare(int width, int height, int color) : Square(width, height) {//конст. с парам-ми
		std::cout << "ColoredSquare(int width, int height)\n";
		this->color = color;
		name = "ColoredSquare_2";
	}
	ColoredSquare(const ColoredSquare& p) {//копи конст.
		std::cout << "ColoredSquare(const Square &p)\n";
		color = p.color;
		width = p.width;
		height = p.height;
		name = "ColoredSquare_3";
	}
	~ColoredSquare() {//деструктор 
		std::cout << width << ", " << height << ", " << "color=" << color << ", " << name << "\n";
		std::cout << "~ColoredSquare()\n";
	}
	void ChangeColor(int newColor) {
		color = newColor;
	};
};

int main() {

	Square *p1 = new ColoredSquare(20, 20, 12);
	ColoredSquare* p2 = new ColoredSquare(20, 20, 12);
	delete p1;
	delete p2;

	_getch();
	return 0;
}
