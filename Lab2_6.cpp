#include <iostream>

class Square {
protected:
	int width, height;
	std::string name;
public:
	Square() {//конст. по умол-ию
		std::cout << "Square()\n";
		width = 2;
		height = 2;
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
	}
	ColoredSquare(const ColoredSquare& p) {//копи конст.
		std::cout << "ColoredSquare(const Square &p)\n";
		color = p.color;
		width = p.width;
		height = p.height;
	}
	~ColoredSquare() {//деструктор 
		std::cout << width << ", " << height << ", " << "color=" << color << ", " << name << "\n";
		std::cout << "~ColoredSquare()\n";
	}
	void ChangeColor(int newColor) {
		color = newColor;
	};
};

class Cube {
protected:
	Square s1;
	Square* s2;
public:
	Cube() {//конст. по умол-ию
		std::cout << "Cube()\n";
		Square s1;
		s2 = new Square;

	}
	Cube(int width, int height, int width2, int height2) {//конст. с парам-ми
		std::cout << "Cube(int width, int height)\n";
		this->s1 = s1;
		s2 = new Square(width2, height2);
	}
	Cube(const Cube& cube) {//копи конст.
		std::cout << "Cube(const Square &p)\n";
		s1 = cube.s1;
		s2 = new Square(*(cube.s2));

	}
	~Cube() {//деструктор 
		std::cout << "~Square()\n";
		delete s2;
	}
};

int main() {
	setlocale(LC_ALL, "Russian");
	std::cout << "\nСтатически созданные объекты" << std::endl;
	{
		Square s1;
		Square s2(10, 10);
		Square s3(s2);
		std::cout << '\n';
		ColoredSquare cols1;
		ColoredSquare cols2(20, 20, 45);
		ColoredSquare cols3(cols2);
		std::cout << '\n';
	}

	std::cout << "\nПрименение композиции (объекты создаются статистически)" << std::endl;
	{
		Cube c1;
		Cube c2(10, 10, 20, 20);
		Cube c3(c2);
		std::cout << '\n';
	}

	std::cout << "\nДинамически созданные объекты" << std::endl;
	Square* s1 = new Square();
	Square* s2 = new Square(20, 20);
	Square* s3 = new Square(*s2);
	std::cout << '\n';
	ColoredSquare* cols1 = new ColoredSquare ();
	ColoredSquare* cols2 = new ColoredSquare(20, 20, 45);
	ColoredSquare* cols3= new ColoredSquare(*cols2);
	std::cout << "Удаление динамически созданных объектов" << std::endl;
	delete s1;
	delete s2;
	delete s3;

	delete cols1;
	delete cols2;
	delete cols3;
	std::cout << '\n';
	std::cout << "\nПрименение композиции(объекты создаются динамически)" << std::endl;
	Cube* c1 = new Cube();
	Cube* c2 = new Cube(22,22,11,11);
	Cube* c3 = new Cube(*c2);
	std::cout << "Удаление динамически созданных объектов" << std::endl;
	delete c1;
	delete c2;
	delete c3;
	return 0;
}