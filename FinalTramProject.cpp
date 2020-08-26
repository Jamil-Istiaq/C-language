#include <iostream>
#include<math.h>
using namespace std;



class Case1
    {public:
    int fig_code;
void count2(){
    cout<<"\nChoose a Rectangle type \a "<<endl;
    cout<<" 1.Rhombus"<<endl;
    cout<<" 2.Trapezium"<<endl;
    cout<<" 3.Parallelogram"<<endl;
    cout<<" 4.Kite"<<endl;
    cin>>fig_code;}};

class rhombus
    {public:
    float bredth,length,area;
void result(){
    cout<<"\nEnter the bredth and length"<<endl;
    cin>>bredth;
    cin>>length;
    area=(bredth*length);
    cout<<"\nArea of a Rhombus: "<<area<<endl;}};

class trapezium
    {public:
        float length1,length2,heigth,area;
void result(){
    cout<<"\nEnter the Lengths and Height: "<<endl;
    cin>>heigth>>length1>>length2;
    area =0.5*heigth*(length1+length2);
    cout<<"\nArea of a Trapezium: "<<area<<endl;}};


class Parallelogram
    {public:
        float bredth,length,area;
void result(){
    cout<<"\nEnter the bredth and length"<<endl;
    cin>>bredth>>length;
    area = bredth * length;
    cout<<"\nArea of a Parallelogram: "<<area<<endl;}};

class Kite
    {public:
        float length1,length2,heigth,area;
void result(){
    cout<<"\nEnter the Lengths and Height: "<<endl;
    cin>>heigth>>length1>>length2;
    area =heigth*((length1*length2)/2) ;
    cout<<"\nArea of a Kite: "<<area<<endl;}};


























class circle
    {public:
        int r;
        float area, pi;
void result()
    {pi=3.1416;
    cout<<"\nEnter the radius: ";
    cin>>r;
    area = pi*r*r;
    cout<<"\nArea of a circle: "<<area<<endl;}};

class ractangle
    {public:
        float bredth,length,area;
void result(){
    cout<<"\nEnter the bredth and length"<<endl;
    cin>>bredth>>length;
    area = bredth * length;
    cout<<"\nArea of a Rectangle: "<<area<<endl;}};

class Case
    {public:
    int fig_code;
void count1(){
    cout<<"\nChoose a Triangle type \a "<<endl;
    cout<<" 1.Equilateral"<<endl;
    cout<<" 2.Isosceles"<<endl;
    cout<<" 3.Scalene"<<endl;
    cout<<" 4.Acute"<<endl;
    cout<<" 5.Obtuse "<<endl;
    cout<<" 6.Right"<<endl;
    cout<<" 7.Equiangular"<<endl;
    cout<<"Enter choice code"<<endl;
    cin>>fig_code;}};

class equit
    {public:
    float side,area;
void result(){
      cout<<"\nEnter the same side"<<endl;
	  cin>>side;
	  area = sqrt (3) * side * side / 4;
	  cout<<"\nArea of Equilateral Triangle: "<<area<<endl;}};

class Isosceles
    {public:
    float side, side1,area;
void result(){
      cout<<"\nEnter same side and other side1"<<endl;
	  cin>>side>>side1;
	  area = (side1 * sqrt ((4 * side * side) - (side1 * side1))) / 4;
	  cout<<"\nArea of Isosceles Triangle: "<<area<<endl;}};

class Scalene
    {public:
    float side,side1,side2,side3,area,s;
void result(){
      cout<<"\nEnter the side1, side2, side3"<<endl;
	  cin>>side1>>side2>>side3;
	  s = (side1 + side2 + side3) / 2;
	  area = sqrt (s * (s - side1) * (s - side2) * (s - side3));
	  cout<<"\nArea of Scalene Triangle: "<<area<<endl;}};

class Acute
    {public:
    float side1,side2,angle,area;
void result(){
      cout<<"\nEnter the side1, side2, angle<90\xf8 "<<endl;
	  cin>>side1>>side2>>angle;
	  area = 0.5 * side1 * side2 * sin (angle);
	  cout<<"\nArea of Acute Triangle: "<<area<<endl;}};

class Obtuse
    {public:
    float side1,side2,angle,area;
void result(){
    cout<<"\nEnter the side1, side2 and angle>90\xf8 "<<endl;
    cin>>side1>>side2>>angle;
    area = 0.5 * side1 * side2 * sin (angle);
    cout<<"\nArea of Obtuse Triangle: "<<area<<endl;
}};

class Rightangle
    {public:
     float base,height,area;
void result(){
    cout<<"\nEnter the base and height"<<endl;
    cin>>base>>height;
    area = 0.5 * base * height;
    cout<<"\nArea of Right angle Triangle: "<<area<<endl;}};

class EquiangularTriangle{
    public:
    float side,area;
void result(){
    cout<<"\nEnter the same side"<<endl;
    cin>>side;
    area = sqrt (3) * side * side / 4;
    cout<<"\nArea of Equiangular Triangle: "<<area<<endl;}};

class Square
 {public:
    float side,area;
void result(){
      cout<<"\nEnter the side"<<endl;
      cin>>side;
      area = side * side;
      cout<<"\nArea of a Square: "<<area<<endl;}};



int main ()
{
  int fig_code;
  float s, side, side1, side2, side3, base, length, bredth, height, angle,
    area, radius;

  cout<<"Chose a geometrical type \a"<<endl;
  cout<<" 1.Circle"<<endl;
  cout<<" 2.Rectangle"<<endl;
  cout<<" 3.Triangle"<<endl;
  cout<<" 4.Square"<<endl;
  cout<<"Enter choice code"<<endl;
  cin>>fig_code;


  switch (fig_code)
    {
    case 1:circle a;
        a.result();

      break;

    case 2:ractangle b;
        b.result();

      break;

    case 3:Case c;
        c.count1();

      switch (fig_code)
	{
	case 1:equit d;
        d.result();

	  break;

	case 2:Isosceles e;
	e.result();

	  break;

	case 3:Scalene f;
	f.result();

	  break;

	case 4:Acute g;
	g.result();

	  break;

	case 5:Obtuse h;
	h.result();

	  break;

	case 6:Rightangle i;
	i.result();

	  break;

	case 7:EquiangularTriangle j;
    j.result();
	  break;
	  default:
      cout<<"\nError in figure code"<<endl;
      break;
	}
      break;

    case 4:Square k;
    k.result();

      break;

    default:
      cout<<"\nError in figure code"<<endl;
      break;
    }
return main();}
