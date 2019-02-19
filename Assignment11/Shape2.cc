/********************************************************************************
Name            : Bhavana Ramarapu
ZID             : Z1827429
Assignment      : 10
Due Date        : Tuesday, November 28, 2017
Description     : Source file for two-dimensional geometric shapes
*********************************************************************************/
#include "/home/cs689/progs/17f/p10/Shape2.h"   //header file for defining two-dimesional shapes

   //Default constructor of Rectangle class
Rectangle::Rectangle ( const double& len, const double& wid )
{
	length=len;
	width=wid;
}

   //Copy constructor of  Rectangle class
Rectangle::Rectangle ( const Rectangle& rect )
{
	length=rect.length;
	width=rect.width;
}

  //function for the assignment operator of Rectangle class
Rectangle& Rectangle::operator= ( const Rectangle& rect ){

	if(this!=&rect)
	{
		length=rect.length;
		width=rect.width;
	}
	return *this;
}

  //function for the append operator of Rectangle class
Rectangle& Rectangle::operator+= ( const Rectangle& rect )
{

	length=length+rect.length;
	width=width+rect.width;
	return *this;
}

  //function for calculating perimeter of the Rectangle
double Rectangle::perimeter() const  //this is obtained by over-riding perimeter function of Shape class
{

	return 2*(length+width);
}

  //function for calculating area of the Rectangle
double Rectangle::area() const   //this is obtained by over-riding area function of Shape class
{

	return length*width;
}

  //Destructor for Rectangle class
Rectangle::~Rectangle()
{
}

  //function for printing dimensions of rectangle class
void Rectangle::print() const   //this is obtained by over-riding print function of Shape class
{

	cout<<"length = "<<length<<" : width = "<<width;
}

  //Default constructor of Circle class
Circle::Circle ( const double& rad)
{

	radius=rad;
}

  //Copy constructor of Circle class
Circle::Circle ( const Circle& cir )
{

	radius=cir.radius;
}

  //function for assignment operator of Circle class
Circle& Circle::operator= ( const Circle& cir )
{

	if(this!=&cir)
	{
		radius=cir.radius;
	}
	return *this;
}

 //function for append operator of Circle class
Circle& Circle::operator+= ( const Circle& cir )
{

	radius=radius+cir.radius;
	return *this;
}

  //function for calculating perimeter of Circle and Sphere
double Circle::perimeter() const  // this is obtained by over-riding the perimeter function of Shape class
{

	return 2*PI*radius;
}

  //function for calculating area of Circle
double Circle::area() const   //this is obtained by over-riding the area function of Shape class
{

	return PI*radius*radius;
}

  //function for printing the dimensions of Circle and Sphere
void Circle::print() const   //this is obtained by over-riding the print function of Shape class
{

	cout<<"radius = "<<radius;
}

   //Destructor of Circle class
Circle::~Circle()
{
}

  //Default constructor of Triangle class
Triangle::Triangle ( const double& side1, const double& side2, const double& side3 )
{

	a=side1;
	b=side2;
	c=side3;
}

   //Copy constructor of Triangle class
Triangle::Triangle ( const Triangle& tri )
{

	a=tri.a;
	b=tri.b;
	c=tri.c;
}

  //function for assignment operator of Triangle class
Triangle& Triangle::operator= ( const Triangle& tri )
{

	if(this!=&tri)
	{
		a=tri.a;
		b=tri.b;
		c=tri.c;
	}
	return *this;
}

  //function for append operator of Triangle class
Triangle& Triangle::operator+= ( const Triangle& tri )
{
	a=a+tri.a;
	b=b+tri.b;
	c=c+tri.c;
	return *this;
}

  //function for calculating perimeter of Triangle class
double Triangle::perimeter() const   //this is obtained by over-riding the perimeter function of Shape class
{

	return (a+b+c);
}

  //function for calculating area of Triangle class
double Triangle::area() const  //this is obtained by over-riding the area function of Shape class
{

	double p = perimeter();
	double k = (p/2);
	return sqrt(k*(k-a)*(k-b)*(k-c));
}

  //function for printing the dimesions of Triangle class
void Triangle::print() const   //this is obtained by over-riding the print function of Shape class
{

	cout<<"a = "<<a<<" : b = "<<b<<" : c = "<<c;
}

   //Destructor of Triangle class
Triangle::~Triangle()
{
}

   //Default constructor of Square class
Square::Square ( const double& side )
{

	length=side;
	width=side;
}

  //Copy constructor of Square class
Square::Square ( const Square& sq )
{

	length=sq.length;
	width=sq.width;
}

  //function for assignment operator of Square class
Square& Square::operator= ( const Square& sq )
{

	if(this!=&sq)
	{
		length=sq.length;
		width=sq.width;
	}
	return *this;
}

 //function of append operator for Square class
Square& Square::operator+= ( const Square& sq )
{

	length=length+sq.length;
	width=width+sq.width;
	return *this;
}

  //function for  printing the dimensions of Square class
void Square::print() const   //this is obtained by over-riding the print function of Rectangle class
{
	cout<<"length = "<<length;
}

  //Destructor of Square class
Square::~Square()
{
}

  //Default constructor of rightTriangle class
rightTriangle::rightTriangle ( const double& base, const double& height )
{

	a=base;
	b=height;
	c=sqrt((a*a)+(b*b));
}

  //Copy constructor of rightTriangle class
rightTriangle::rightTriangle ( const rightTriangle& rt )
{

	a=rt.a;
	b=rt.b;
	c=rt.c;
}

  //function for assignment operator of rightTriangle class
rightTriangle& rightTriangle::operator= ( const rightTriangle& rt )
{

	if(this!=&rt)
	{
		a=rt.a;
		b=rt.b;
		c=rt.c;
	}
	return *this;
}

  //function for append operator of Square class
rightTriangle& rightTriangle::operator+= ( const rightTriangle& rt )
{

	a=a+rt.a;
	b=b+rt.b;
	c=c+rt.c;
	return *this;
}

  //function for printing the dimensions of Square class
void rightTriangle::print() const   //this is obtained by over-riding the print function of Triangle class
{

	cout<<"length = "<<a<<" : height = "<<b;
}

  //Destructor of rightTriangle class
rightTriangle::~rightTriangle()
{
}

  //Default constructor of equTriangle class
equTriangle::equTriangle ( const double& side )
{

	a=side;
	b=side;
	c=side;
}

  //Copy constructor of equTriangle class
equTriangle::equTriangle ( const equTriangle& eqt )
{

	a=eqt.a;
	b=eqt.b;
	c=eqt.c;
}

 //function for assignment operator of equTriangle class
equTriangle& equTriangle::operator= ( const equTriangle& eqt )
{

	if(this!=&eqt)
	{
		a=eqt.a;
		b=eqt.b;
		c=eqt.c;
	}
	return *this;
}

 //function for append operator of equTriangle class
equTriangle& equTriangle::operator+= ( const equTriangle& eqt )
{
	a=a+eqt.a;
	b=b+eqt.b;
	c=c+eqt.c;
	return *this;
}

 //function for printing the dimensions of equTriangle and Tetrahedron class
void equTriangle::print() const   //this is obtained by over-riding the print function of Triangle class
{
	cout<<"length = "<<a;
}

 //Destructor of equTriangle class
equTriangle::~equTriangle()
{
} 
