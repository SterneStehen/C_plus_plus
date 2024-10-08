#include <iostream>

/* Стек в объектном стиле */

using namespace std;

class stack
{
// Публичные методы класса (доступны вызывающему коду)
public:
	// Конструктор: создаёт стек заданного размера
	stack(int size);
	// Деструктор: уничтожает существующий стек
	~stack();
	// Складывает новый элемент в стек
	void push(int a);
	// Достаёт верхний элемент из стека
	int pop();
	// Чистит данные в стеке, сохраняя сам стек
	void clear();

// Поля класса, объявлены как приватные (недоступны внешнему коду)
private:
	int top;	// индекс первого свободного элемента
	int size;	// размер стека
	int* data;	// указатель на область памяти (не очень красиво, позже обсудим)
};

// Конструктор класса stack. Принимает размер стека в качестве аргумента.
stack::stack(int stack_size)
{
    cout << "stack::stack() called" << endl; // Вывод сообщения о вызове конструктора.
    this->top = 0; // Инициализация указателя на верхушку стека.
    this->size = stack_size; // Установка размера стека.
    this->data = new int[stack_size]; // Выделение памяти для хранения данных стека.
}

// Деструктор класса stack.
stack::~stack()
{
    cout << "stack::~stack() called" << endl; // Вывод сообщения о вызове деструктора.
    delete[] this->data; // Освобождение памяти, выделенной для данных стека.
}

// Метод для очистки стека. Просто сбрасывает указатель на верхушку стека.
void stack::clear()
{
    this->top = 0; // Сброс указателя на верхушку стека, данные остаются в памяти.
}

// Метод для добавления элемента в стек.
void stack::push(int a)
{
    // Проверка на переполнение стека.
    if(this->top == this->size)
    {
        cout << "ERROR: Stack overflow! Can not push " << a << endl; // Сообщение об ошибке, если стек переполнен.
        return;
    }
    this->data[this->top] = a; // Добавление элемента на вершину стека.
    this->top++; // Смещение указателя на вершину стека вверх.
}

// Метод для извлечения элемента из стека.
int stack::pop()
{
    // Проверка на пустоту стека.
    if(this->top == 0)
    {
        cout << "ERROR: Stack empty, can not pop" << endl; // Сообщение об ошибке, если стек пуст.
        return -1; // Возврат значения -1 в случае ошибки (может быть проблемой, если -1 допустимое значение).
    }
    this->top--; // Смещение указателя на вершину стека вниз.
    return this->data[this->top]; // Возврат верхнего элемента стека.
}


int main()
{
	// Пример, как всё работает в хорошем случае
	stack s1(2);
	s1.push(1);
	s1.push(2);
	s1.push(3);
	cout << "Data from s1: " << s1.pop() << endl;
	cout << "Data from s1: " << s1.pop() << endl;
	s1.pop();

	/*
	// Решение проблемы: теперь так просто всё не сломать
	stack s2(10);
	s2.push(1);
	s2.push(2);
	s2.push(3);
	cout << "Data from s2: " << s2.pop() << endl;
	s2.top = 1;	// это просто не скомпилируется
	cout << "Data from s2: " << s2.pop() << endl;
	*/

	return 0;
}