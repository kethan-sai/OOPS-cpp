/********************************************************************************
Name            : Bhavana Ramarapu
ZID             : Z1827429
Assignment      : 10
Due Date        : Tuesday, November 28, 2017
Description     : Source file for three-dimensioal geometric shapes
*********************************************************************************/

#include "/home/cs689/progs/17f/p10/Shape3.h"  //header file for defining two-dimesional shapes

  //Default constructor of Box class
Box::Box( const double& len, const double& wid, const double& hei )
{

	length=len;
	width=wid;
	height=hei;
}

  //copy constructor of Box class
Box::Box( const Box& box)
{

	length=box.length;
	width=box.width;
	height=box.height;
}

 //function for assignment operator of Box class
Box& Box::operator=( const Box& box )
{

	if(this!=&box)
	{
		length=box.length;
		width=box.width;
		height=box.height;
	}
	return *this;
}

  //function for append operator of Box class
Box& Box::operator+=( const Box& box )
{
	
	length=length+box.length;
	width=width+box.width;
	height=height+box.height;
	return *this;
}

  //function for calculating perimeter of Box class
double Box::perimeter() const   //this isobtained by over-riding the perimeter function of Shape class
{

	return 0;
}

  //function for calculating area of Box class
double Box::area() const   //this is obtained by over-riding the perimeter function of Shape class
{

	Rectangle rect(length,width);
	double A0 = rect.area();
	double P0 = rect.perimeter();
	return (2*A0+height*P0);
}

  //function for calculating volume of Box class
double Box::volume() const
{
	
	Rectangle rect(length,width);
	double A0 = rect.area();
	return (height*A0);
}

  //function for printing dimensions of Box class
void Box::print() const   //this is obtained by over-riding the print function of Shape class
{

	cout<<"length = "<<length<<" : width = "<<width<<" : height = "<<height;
}

  //Destructor of Box class
Box::~Box()
{
}

  //Default constructor of Cube class
Cube::Cube( const double& side )
{

	length=side;
	width=side;
}

  //Copy constructor of Cube class
Cube::Cube ( const Cube& cube )
{

	length=cube.length;
	width=cube.width;
}

  //function for assignment operator of Cube class
Cube& Cube::operator=( const Cube& cube )
{

	if(this!=&cube)
	{
		length=cube.length;
		width=cube.width;
	}
	return *this;
}

 //function for append operator of Cube class
Cube& Cube::operator+=( const Cube& cube )
{

	length=cube.length;
	width=cube.width;
	return *this;
}

  //function for calculating perimeter of Cube class
double Cube::perimeter() const   // this is obtained by over-riding the perimeter function of Shape class
{

	return 0;
}

  //function for calculating area of Cube class
double Cube::area() const   //this is obtained by over-riding the area function of Shape class
{

	Square sq(length);
	double A0 = sq.area();
	return (6*A0);
}

  //function for calculating volume of Cube class
double Cube::volume() const
{

	Square sq(length);
	double A0 = sq.area();
	return (length*A0);
}

  //function for printing dimensions of Cube class
void Cube::print() const
{

	cout<<"length = "<<length;
}

  //Destructor of Cube class
Cube::~Cube()
{
}

  //Default constructor of Cylinder class
Cylinder::Cylinder( const double& rad, const double& hei )
{

	radius = rad;
	height = hei;
}

 //Copy constructor of Cylinder class
Cylinder::Cylinder( const Cylinder& cyl )
{

	 radius = cyl.radius;
	 height = cyl.height;
}

  //function for assignment operator of Cylinder class
Cylinder& Cylinder::operator=( const Cylinder& cyl )
{
	if(this!=&cyl)
	{
		radius = cyl.radius;
		height = cyl.height;
	}
	return *this;
}
  //function for append operator of Cylinder class
Cylinder& Cylinder::operator+=( const Cylinder& cyl )
{

	radius = radius+cyl.radius;
	height = height+cyl.height;
	return *this;
}

  //function for calculating perimeter of Cylinder class
double Cylinder::perimeter() const   //this is obtained by over-riding the perimeter function of Shape class
{

	return 0;
}

  //function for calculating area of Cylinder class
double Cylinder::area() const  //this is obtained by over-riding the area function of Shape class
{

	Circle cir(radius);
	double P0 = cir.perimeter();
	double A0 = cir.area();
	double A1 = height*P0;
	return (2*A0+A1);
}

  //function for calculating volume of Cylinder class
double Cylinder::volume() const
{

	Circle cir(radius);
	double A0 = cir.area();
	return (height*A0);
}

  //function for printing dimensions of Cylinder class
void Cylinder::print() const   //this is obtained by over-riding the print function of Shape class
{

	cout<<"radius = "<<radius<<" : height = "<<height;
}

   //Destructor of Cylinder class
Cylinder::~Cylinder()
{
}

  //Default constructor of Cone class
Cone::Cone( const double& rad, const double& hei )
{

	radius = rad;
	height = hei;
}

  //Copy constructor of Cone class
Cone::Cone( const Cone& cone )
{

	radius = cone.radius;
	height = cone.height;
}

  //function for assignment operator of Cone class
Cone& Cone::operator=( const Cone& cone )
{

	if(this!=&cone)
	{
		radius = cone.radius;
		height = cone.height;
	}
	return *this;
}

  //function for append operator of Cone class
Cone& Cone::operator+=( const Cone& cone )
{

	radius = radius+cone.radius;
	height = height+cone.height;
	return *this;
}

  //function for calculating perimeter of Cone class
double Cone::perimeter() const   //this is obtained by over-riding the perimeter function of Shape class
{

	return 0;
}

  //function for calculating area of Cone class
double Cone::area() const   //this is obtained by over-riding the area function  of Shape class
{
	
	Circle cir(radius);
	double A0 = cir.area();
	double P0 = cir.perimeter();
	double s = sqrt( radius*radius + height*height );
	double A1 = (s*P0)/2;
	return (A0+A1);
}

  //function for calculating volume of Cone class
double Cone::volume() const
{

	Circle cir(radius);
	double A0 = cir.area();
	return (height*A0)/3;
}

  //function for printing the dimensions of Cone class
void Cone::print() const   //this is obtained by over-riding the print function of Shape class
{
	
	cout<<"radius = "<<radius<<" : height = "<<height;
}

  //Destructor of Cone class
Cone::~Cone()
{
}

  //Default constructor of Sphere class
Sphere::Sphere( const double& rad )
{

	radius = rad;
}

  //Copy constructor of Square class
Sphere::Sphere( const Sphere& sph )
{

	radius = sph.radius;
}

  //function for  assignment operator of Sphere class
Sphere& Sphere::operator=( const Sphere& sph )
{
	
	if(this!=&sph)
	{
		radius = sph.radius;
	}
	return *this;
}

  //function for append operator of Sphere class
Sphere& Sphere::operator+=( const Sphere& sph )
{

	radius = radius+sph.radius;
	return *this;
}

  //function for calculating area of Sphere class
double Sphere::area() const  //this is obtained by over-riding the area function of Shape class
{
	Circle cir(radius);
	double A0 = cir.area();
	return (4*A0);
}

  //function for calculating volume of Sphere class
double Sphere::volume() const
{
	
	Circle cir(radius);
	double A0 = cir.area();
	return ((4*radius*A0)/3);
}

  //Destructor of Sphere class
Sphere::~Sphere()
{
}

  //Default constructor of Tetrahedron class
Tetrahedron::Tetrahedron( const double& side )
{

	a = side;
	b = side;
	c = side;
}

 //Copy constructor of Tetrahedron class
Tetrahedron::Tetrahedron( const Tetrahedron& th )
{

	a = th.a;
	b = th.a;
	c = th.a;
}

  //function for assignment operator of Tetrahedron class
Tetrahedron& Tetrahedron::operator=( const Tetrahedron& th )
{

	if(this!=&th)
	{	
		a = th.a;
		b = th.a;
		c = th.a;
	}
	return *this;
}

 //function for append operator of Tetrahedron class
Tetrahedron& Tetrahedron::operator+=( const Tetrahedron& th )
{

	a = a+th.a;
	b = b+th.a;
	c = c+th.a;
	return *this;
}

  //function for calculating perimeter of Tetrahedron class
double Tetrahedron::perimeter() const  //this is obtained by over-riding the perimeter function of Shape class
{

	return 0;
}

  //function for calculating area of Tetrahedron class
double Tetrahedron::area() const  //this is obtained by over-riding the area function of Shape class
{
	
	equTriangle et(a);
	double A0 = et.area();
	return (4*A0);
}

 //function for calculating volume of Tetrahedron class
double Tetrahedron::volume() const
{

	equTriangle et(a);
	double A0 = et.area();
	double height = (sqrt(2)*a)/sqrt(3);
	return (height*A0)/3;
}

  //Destructor of Tetrahedron class
Tetrahedron::~Tetrahedron()
{
}
