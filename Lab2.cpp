//1

//#include <iostream>
//#include <conio.h>
//
//class Square {
//public:
//	int width;
//	int height;
//	std::string name;
//	Square() {//конст. по умол-ию
//		std::cout << "Square()\n";
//		width = 0;
//		height = 0;
//		name = "Square_1";
//	}
//	Square(int width, int height) {//конст. с парам-ми
//		std::cout << "Square(int width, int height)\n";
//		this->width = width;
//		this->height = height;
//		name = "Square_2";
//	}
//	Square(const Square& p) {//копи конст.
//		std::cout << "Square(const Square &p)\n";
//		width = p.width;
//		height = p.height;
//		name = "Square_3";
//	}
//	~Square() {//деструктор 
//		std::cout << width << ", " << height << ", " << name << "\n";
//		std::cout << "~Square()\n";
//	}
//};
//
//int main() {
//	{
//		Square p;
//		Square p2(20, 20);
//		Square p3(p2);
//	}
//
//	_getch();
//	return 0;
//}

//2

//#include <iostream>
//#include <conio.h>
//
//class Square {
//public:
//	int width;
//	int height;
//	std::string name;
//	Square() {//конст. по умол-ию
//		std::cout << "Square()\n";
//		width = 0;
//		height = 0;
//		name = "Square_1";
//	}
//	Square(int width, int height) {//конст. с парам-ми
//		std::cout << "Square(int width, int height)\n";
//		this->width = width;
//		this->height = height;
//		name = "Square_2";
//	}
//	Square(const Square& p) {//копи конст.
//		std::cout << "Square(const Square &p)\n";
//		width = p.width;
//		height = p.height;
//		name = "Square_3";
//	}
//	~Square() {//деструктор 
//		std::cout << width << ", " << height << ", " << name << "\n";
//		std::cout << "~Square()\n";
//	}
//};
//
//int main() {
//	
//	Square *p = new Square;
//	Square *p2 = new Square(20, 20);
//	Square *p3 = new Square(*p2);
//	//удаление динамических объектов  
//	delete p;
//	delete p2;
//	delete p3;
//
//	_getch();
//	return 0;
//}

//3

//#include <iostream>
//#include <conio.h>
//
//class Square {
//private:
//	int width, height;
//	std::string name;
//public:
//	Square() {//конст. по умол-ию
//		std::cout << "Square()\n";
//		width = 0;
//		height = 0;
//		name = "Square_1";
//	}
//	Square(int width, int height) {//конст. с парам-ми
//		std::cout << "Square(int width, int height)\n";
//		this->width = width;
//		this->height = height;
//		name = "Square_2";
//	}
//	Square(const Square& p) {//копи конст.
//		std::cout << "Square(const Square &p)\n";
//		width = p.width;
//		height = p.height;
//		name = "Square_3";
//	}
//	~Square() {//деструктор 
//		std::cout << width << ", " << height << ", " << name << "\n";
//		std::cout << "~Square()\n";
//	}
//	void PlusToSquare(int a_width, int a_height) {
//		width = width + a_width;
//		height = height + a_height;
//	};
//	void reset();
//};
//
//void Square::reset() {//реализация метода вне описания класса
//	width = 0;
//	height = 0;
//}
//
//int main() {
//
//	Square* p = new Square(20, 20);
//
//	p->PlusToSquare(2, 2);
//	delete p;
//
//	_getch();
//	return 0;
//}

//4 наследование 

//#include <iostream>
//#include <conio.h>
//
//class Square {
//protected:
//	int width, height;
//	std::string name;
//public:
//	Square() {//конст. по умол-ию
//		std::cout << "Square()\n";
//		width = 0;
//		height = 0;
//		name = "Square_1";
//	}
//	Square(int width, int height) {//конст. с парам-ми
//		std::cout << "Square(int width, int height)\n";
//		this->width = width;
//		this->height = height;
//		name = "Square_2";
//	}
//	Square(const Square& p) {//копи конст.
//		std::cout << "Square(const Square &p)\n";
//		width = p.width;
//		height = p.height;
//		name = "Square_3";
//	}
//	~Square() {//деструктор 
//		std::cout << width << ", " << height << ", " << name << "\n";
//		std::cout << "~Square()\n";
//	}
//	void PlusToSquare(int a_width, int a_height) {
//		width = width + a_width;
//		height = height + a_height;
//	};
//	void reset();
//};
//
//void Square::reset() {//реализация метода вне описания класса
//	width = 0;
//	height = 0;
//}
//
//class ColoredSquare: public Square {
//protected:
//	int color;
//public:
//	ColoredSquare() : Square(){//конст. по умол-ию
//		std::cout << "ColoredSquare()\n";
//		color = 0;
//	}
//	ColoredSquare(int width, int height, int color) : Square(width, height) {//конст. с парам-ми
//		std::cout << "ColoredSquare(int width, int height)\n";
//		this->color = color;
//		name = "ColoredSquare_2";
//	}
//	ColoredSquare(const ColoredSquare& p) {//копи конст.
//		std::cout << "ColoredSquare(const Square &p)\n";
//		color = p.color;
//		width = p.width;
//		height = p.height;
//		name = "ColoredSquare_3";
//	}
//	~ColoredSquare() {//деструктор 
//		std::cout << width << ", " << height << ", "  << "color=" << color << ", " << name << "\n";
//		std::cout << "~ColoredSquare()\n";
//	}
//	void ChangeColor(int newColor) {
//		color = newColor;
//	};
//};
//
//int main() {
//
//	ColoredSquare* p = new ColoredSquare(20, 20, 12);
//	delete p;
//
//	_getch();
//	return 0;
//}

//5	Помещение объектов в переменные различных типов 

//#include <iostream>
//#include <conio.h>
//
//class Square {
//protected:
//	int width, height;
//	std::string name;
//public:
//	Square() {//конст. по умол-ию
//		std::cout << "Square()\n";
//		width = 0;
//		height = 0;
//		name = "Square_1";
//	}
//	Square(int width, int height) {//конст. с парам-ми
//		std::cout << "Square(int width, int height)\n";
//		this->width = width;
//		this->height = height;
//		name = "Square_2";
//	}
//	Square(const Square& p) {//копи конст.
//		std::cout << "Square(const Square &p)\n";
//		width = p.width;
//		height = p.height;
//		name = "Square_3";
//	}
//	~Square() {//деструктор 
//		std::cout << width << ", " << height << ", " << name << "\n";
//		std::cout << "~Square()\n";
//	}
//	void PlusToSquare(int a_width, int a_height) {
//		width = width + a_width;
//		height = height + a_height;
//	};
//	void reset();
//};
//
//void Square::reset() {//реализация метода вне описания класса
//	width = 0;
//	height = 0;
//}
//
//class ColoredSquare : public Square {
//protected:
//	int color;
//public:
//	ColoredSquare() : Square() {//конст. по умол-ию
//		std::cout << "ColoredSquare()\n";
//		color = 0;
//	}
//	ColoredSquare(int width, int height, int color) : Square(width, height) {//конст. с парам-ми
//		std::cout << "ColoredSquare(int width, int height)\n";
//		this->color = color;
//		name = "ColoredSquare_2";
//	}
//	ColoredSquare(const ColoredSquare& p) {//копи конст.
//		std::cout << "ColoredSquare(const Square &p)\n";
//		color = p.color;
//		width = p.width;
//		height = p.height;
//		name = "ColoredSquare_3";
//	}
//	~ColoredSquare() {//деструктор 
//		std::cout << width << ", " << height << ", " << "color=" << color << ", " << name << "\n";
//		std::cout << "~ColoredSquare()\n";
//	}
//	void ChangeColor(int newColor) {
//		color = newColor;
//	};
//};
//
//int main() {
//
//	Square *p1 = new ColoredSquare(20, 20, 12);
//	ColoredSquare* p2 = new ColoredSquare(20, 20, 12);
//	delete p1;
//	delete p2;
//
//	_getch();
//	return 0;
//}


//6 

#include <iostream>
#include <conio.h>

class Square {
protected:
	int width, height;
	std::string name;
public:
	Square() {//конст. по умол-ию
		std::cout << "Square()\n";
		width = 20;
		height = 20;
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

class Cube {
protected:
	Square* s1;
	Square* s2;
	Square* s3;
	Square* s4;
	Square* s5;
	Square* s6;
public:
	Cube() {//конст. по умол-ию
		std::cout << "Cube()\n";
		s1 = new Square;
		s2 = new Square;
		s3 = new Square;
		s4 = new Square;
		s5 = new Square;
		s6 = new Square;
	}
	Cube(int width, int height) {//конст. с парам-ми
		std::cout << "Cube(int width, int height)\n";
		s1 = new Square(width, height);
		s2 = new Square(width, height);
		s3 = new Square(width, height);
		s4 = new Square(width, height);
		s5 = new Square(width, height);
		s6 = new Square(width, height);
	}
	Cube(const Cube& cube) {//копи конст.
		std::cout << "Cube(const Square &p)\n";
		s1 = new Square(* (cube.s1));
		s2 = new Square(*(cube.s2));
		s3 = new Square(*(cube.s3));
		s4 = new Square(*(cube.s4));
		s5 = new Square(*(cube.s5));
		s6 = new Square(*(cube.s6));
	}
	~Cube() {//деструктор 
		std::cout << "~Square()\n";
		delete s1;
		delete s2;
		delete s3;
		delete s4;
		delete s5;
		delete s6;
	}
};

int main() {

	Cube* c1 =new Cube;
	Cube* c2 = new Cube(*c1);
	delete c1;
	delete c2;

	_getch();
	return 0;
}