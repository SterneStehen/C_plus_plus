#include <iostream>
#include <cmath>
using namespace std;

// Базовый *абстрактный* класс фигуры
class Figure {
protected:
    float weight;

public:
    // Все эти методы будут доступны в дочерних классах
    float getWeight() {
        return weight;
    }

    void setWeight(float weight) {
        this->weight = weight;
    }

    // Чисто виртуальный метод. Его реализация *обязана* быть в дочернем *неабстрактном* классе.
    virtual float square() = 0;
};

// Класс треугольника
class Triangle: public Figure {
private:
    float a, b, c;

public:
    Triangle(float a, float b, float c) {
        this->a = a;
        this->b = b;
        this->c = c;
    }

    float getA() { return a; }
    float getB() { return b; }
    float getC() { return c; }

    // Реализация виртуального метода
    float square() {
        float p = (a+b+c)/2;
        return sqrtf(p*(p-a)*(p-b)*(p-c));
    }
};

// Класс прямоугольника
class Rectangle: public Figure {
private:
    float a, b;

public:
    Rectangle(float a, float b) {
        this->a = a;
        this->b = b;
    }

    float getA() { return a; }
    float getB() { return b; }

    // Реализация виртуального метода
    float square() {
        return a*b;
    }
};

// Класс окружности
class Circle: public Figure {
private:
    float r;

public:
    Circle(float r) {
        this->r = r;
    }

    float getR() { return r; }

    // Реализация виртуального метода
    float square() {
        return M_PI*r*r;
    }
};

int main() {
    // // Массив указателей для хранения объектов. Массив содержит указатели на объекты родительского типа Figure, хотя
    // // на самом деле по соответствующим адресам в памяти буду лежать объекты производных типов (Triangle, Rectangle, Circle).
    // Figure* figs[15];

    // // Создаём 15 фигур различных типов и сохраняем указатели на них
    // for (int i = 0; i < 15; i+=3) {
    //     figs[i] = new Triangle(1, 1, 1);
    //     figs[i+1] = new Rectangle(1, 2);
    //     figs[i+2] = new Circle(1);
    // }

    // // Вызываем метод родительского класса
    // for (int i = 0; i < 15; i++)
    //     figs[i]->setWeight(1);

    // // Вызываем виртуальный метод. Для каждого объекта будет вызвана соответствующая реализация.
    // for (int i = 0; i < 15; i++)
    //     cout << figs[i]->square() << endl;

    // // Нельзя создать экземпляр абстрактного класса (т.е. того, который имеет чисто виртуальные методы).
    // // Поэтому объявление ниже ошибочно.
    // // 
    // // Figure fig;
    
    // for (int i = 0; i < 15; i++)
    //     delete figs[i];

    // return 0;

	Rectangle ab(2.2, 3.4);
	//cout << "a = " << getA() << "b = " << getB() << endl;
	cout << "square Rectangle = " << ab.square() << endl;

	Circle rad(4);
	cout << "square Circle = " << rad.square() << endl;

	Triangle abc(3, 4, 5);
	cout << "square Triangle = " << abc.square() << endl;


	cout << "===============================" << endl;

	Figure *arr[15];

	for (size_t i = 0; i < 15; i = i + 3)
	{
		arr[i] = new Triangle  (2, 3.3, 5);
		arr[i+1] = new Rectangle  (2*i, 5);
		arr[i+2] = new Circle  (2*i);
	}

	for (size_t i = 0; i < 15; i++)
	{
		arr[i]->setWeight(i*2);
	}
	

	for (size_t i = 0; i < 15; i = i + 3)
	{
		cout << "Triangle " << "arr[" << i <<  "] = " <<  arr[i]->getWeight() << endl;
		cout << "Rectangle " << "arr[" << i+1 <<  "] = " <<  arr[i+1]->getWeight() << endl;
		cout << "Circle " << "arr[" << i+2 <<  "] = " <<  arr[i+2]->getWeight() << endl;
	}

	cout << "===============================" << endl;
	
	for (size_t i = 0; i < 15; i+=3)
	{
		cout << "Trianle  square " << "arr[" << i <<  "] = " << arr[i]->square() << endl;
		cout << "Rectangle square " << "arr[" << i+1 <<  "] = " << arr[i+1]->square() << endl;
		cout << "Circle  square " << "arr[" << i+2 <<  "] = " << arr[i+2]->square() << endl;
	}
	
	
	return 0;
}