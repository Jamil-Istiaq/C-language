#include <iostream>
#include<math.h>


using namespace std;


void info(){cout<<"Group-7"<<endl;
cout<<"Jamil and Ridwon"<<endl;
cout<<"Id:18-37918-2,Id:18-37919-2"<<endl<<endl<<endl;};





class Circle{public:float radius,area;
void result1(){
      cout<<"Enter the radius"<<endl;
      cin>>radius;
      area = 3.142 * radius * radius;
      cout<<"Area of a circle: "<<area<<endl;}};



class Rhombus{public:float bredth,length,area;
void result2(){cout<<"\nEnter the bredth and length"<<endl;
    cin>>bredth>>length;
    area=(bredth*length);
    cout<<"\nArea of a Rhombus: "<<area<<endl;}};



class Trapezium{public:float length1,length2,heigth,area;
void result22(){cout<<"\nEnter the Length1, Length2 and Height: "<<endl;
    cin>>heigth>>length1>>length2;
    area =0.5*heigth*(length1+length2);
    cout<<"\nArea of a Trapezium: "<<area<<endl;}};



class Parallelogram{public:float bredth,length,area;
void result3(){cout<<"\nEnter the bredth and length"<<endl;
    cin>>bredth>>length;
    area = bredth * length;
    cout<<"\nArea of a Parallelogram: "<<area<<endl;}};





class Kite{public:float length1,length2,heigth,area;
void result4(){cout<<"\nEnter the Length1, Length2 and Height: "<<endl;
    cin>>heigth>>length1>>length2;
    area =heigth*((length1*length2)/2) ;
    cout<<"\nArea of a Kite: "<<area<<endl;}};





class Equilateral{public:float side,area;
void result5(){cout<<"Enter the same side"<<endl;
    cin>>side;
    area = sqrt(3)*side*side/4;
    cout<<"Area of Equilateral Triangle: "<<area<<endl;}};




class Isosceles{public:float area,side1,side;
void result6(){cout<<"Enter same side and other side1"<<endl;
    cin>>side>>side1;
    area = (side1 * sqrt ((4 * side * side) - (side1 * side1))) / 4;
    cout<<"Area of Isosceles Triangle: "<<area<<endl;}};




class Scalene{public:float area,side1, side2, side3,s;
void result7(){cout<<"Enter the side1, side2, side3"<<endl;
    cin>>side1>>side2>>side3;
    s = (side1 + side2 + side3) / 2;
    area = sqrt(s*(s -side1)*(s -side2)*(s - side3));
    cout<<"Area of Scalene Triangle: "<<area<<endl;}};





class Acute{public:float side1,side2,angle,area;
void result8(){cout<<"Enter the side1, side2, angle<90\xf8 "<<endl;
    cin>>side1>>side2>>angle;
    area = 0.5 * side1 * side2 * sin (angle);
    cout<<"Area of Acute Triangle: "<<area<<endl;}};




class Obtuse{public:float side1,side2,angle,area;
void result9(){cout<<"Enter the side1, side2 and angle>90\xf8 "<<endl;
    cin>>side1>>side2>>angle;
    area = 0.5 * side1 * side2 * sin (angle);
    cout<<"Area of Obtuse Triangle: "<<area<<endl;}};





class Right{public:float base,height,area;
void result10(){cout<<"Enter the base and height"<<endl;
    cin>>base>>height;
    area = 0.5 * base * height;
    cout<<"Area of Right angle Triangle: "<<area<<endl;}};




class Equiangular{public:float area,side;
void result11(){cout<<"Enter the same side"<<endl;
    cin>>side;
    area = sqrt (3) * side * side / 4;
    cout<<"Area of Equiangular Triangle: "<<area<<endl;}};




class Square{public:float area,side;
void result12(){cout<<"Enter the side"<<endl;
    cin>>side;
    area = side * side;
    cout<<"Area of a Square: "<<area<<endl;}};



int main ()
{info();
int fig_code;
char option;
char C,c,E,e;

  cout<<"Chose a geometrical type "<<endl;
  cout<<" 1.Circle"<<endl;
  cout<<" 2.Rectangle"<<endl;
  cout<<" 3.Triangle"<<endl;
  cout<<" 4.Square"<<endl;
  cout<<"Enter choice code"<<endl;
  cin>>fig_code;

    switch (fig_code)
    {
    case 1:Circle a;
    a.result1();
    break;

    case 2:{int fig_code;
    cout<<"\nChoose a Rectangle type  "<<endl;
    cout<<" 1.Rhombus"<<endl;
    cout<<" 2.Trapezium"<<endl;
    cout<<" 3.Parallelogram"<<endl;
    cout<<" 4.Kite"<<endl;
    cin>>fig_code;

    if(fig_code==1){Rhombus c;
    c.result2();}

    else if(fig_code==2){Trapezium d;
    d.result22();}


    else if(fig_code==3){Parallelogram e;
    e.result3();}


    else if (fig_code==4){Kite f;
    f.result4();}
      return main();





   case 3:{int fig_code;
    cout<<"Choose a Triangle type "<<endl;
    cout<<" 1.Equilateral"<<endl;
    cout<<" 2.Isosceles"<<endl;
    cout<<" 3.Scalene"<<endl;
    cout<<" 4.Acute"<<endl;
    cout<<" 5.Obtuse "<<endl;
    cout<<" 6.Right"<<endl;
    cout<<" 7.Equiangular"<<endl;
    cout<<"Enter choice code"<<endl;
    cin>>fig_code;

   switch (fig_code)
	{
	case 1:Equilateral h;
	h.result5();
	  break;

	case 2:Isosceles i;
	i.result6();

    break;

	case 3:Scalene j;
	j.result7();

	  break;

	case 4:Acute k;
	k.result8();

	  break;

	case 5:Obtuse l;
	l.result9();

	  break;

	case 6:Right m;
	m.result10();

	  break;

	case 7:Equiangular n;
	n.result11();
	  break;


    default:
    cout<<"Error in figure code"<<endl;
    break;
	}}
    break;


    case 4:Square o;
    o.result12();
      break;

    default:
      cout<<"Error in figure code"<<endl;
      break;}}


      return 0;}



//cout<<"Do you want to continue the program "<<endl;
//cout<<"If want to Continue press C/c"<<endl;
//cout<<"If want to Exit press E/e"<<endl;
//cin>>option;
//
//if((option=='c')||(option=='C')){return main();}
//else if ((option=='E')||(option=='e')){return 0;}
//}

