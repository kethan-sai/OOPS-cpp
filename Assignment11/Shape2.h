/********************************************************************************
Name            : Bhavana Ramarapu
ZID             : Z1827429
Assignment      : 10
Due Date        : Tuesday, November 28, 2017
Description     : Two-dimensional geometric shapes
*********************************************************************************/
#ifndef TWO_DIMEN
#define TWO_DIMEN
#include <iostream>

using namesapce std;

class Rectangle:public Shape{

private:

double length;
double width;

public:

Rectangle();
Rectangle(const Rectangle&);
Rectangle& operator =(const Rectangle&);
Rectangle& operator +=(const Rectangle&);
double area() const;
double perimeter() const;
void print() const;
~Rectangle();
};

class Circle:public Shape{

private:

double radius;

public:

Circle();
Circle(const Circle&);
Circle& operator =(const Circle&);
Circle& operator +=(const Circle&);
double area() const;
double perimeter() const;
void print() const;
~Circle();
};

class Triangle:public Shape{

private:

double a;
double b;
double c;

public:

Triangle();
Triangle(const Triangle&);
Triangle& operator =(const Triangle&);
Triangle& operator +=(const Trianlge&);
double area() const;
double perimeter() const;
void print() const;
~Triangle();
};

class Square:public Rectangle{

public:

Square();
Square(const Square&);
Square& operator =(const Square&);
Square& operator +=(const Square&);
double area() const;
double perimeter() const;
void print() const;
~Square();
};

class rightTriangle:public Triangle{

public:

rightTriangle();
rightTriangle(const rightTriangle&);
rightTriangle& operator =(const rightTriangle&);
rightTrianlge& operator +=(const rightTriangle&);
double area() const;
double perimeter() const;
void print() const;
~rightTriangle();
};

class equTriangle:public Triangle{

public:

equTriangle();
equTriangle(const equTriangle&);
equTriangle& operator =(const equTriangle&);
equTriangle& operator +=(const equTriangle&);
double area() const;
double perimeter() const;
void print() const;
~equTriangle();
};

#endif
