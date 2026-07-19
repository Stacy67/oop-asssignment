//Stacy kinya...bcs-05-0060/2025
//week 12 polymorphism
//A c++ program that draws different shapes using runtime polymorphism

#include <iostream>
using namespace std;

class Shape
{
public:
    virtual void draw()
    {
        cout << "Drawing Shape" << endl;
    }
};

class Circle : public Shape
{
public:
    void draw()
    {
        cout << "Drawing Circle" << endl;
    }
};

class Rectangle : public Shape
{
public:
    void draw()
    {
        cout << "Drawing Rectangle" << endl;
    }
};

class Triangle : public Shape
{
public:
    void draw()
    {
        cout << "Drawing Triangle" << endl;
    }
};

int main()
{
    Shape *shape;

    Circle c;
    Rectangle r;
    Triangle t;

    // Runtime polymorphism
    shape = &c;
    shape->draw();

    shape = &r;
    shape->draw();

    shape = &t;
    shape->draw();

    return 0;
}