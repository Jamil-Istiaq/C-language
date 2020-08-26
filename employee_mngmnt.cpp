#include<iostream>
#include<cstring>
#include<cstdlib>
#include<iomanip>
#include<windows.h>
#include<dos.h>
#include<conio.h>
#define max 20


using namespace std;
struct employee

{
char name[20];
long int code;
char designation[20];
int exp;
int age;};


int num;
employee emp[max],tempemp[max],sortemp[max],sortemp1[max];


int main()
{
void build();
void list();
void insert();
void deletes();
void edit();
void search();
void sort();
char option;
void menu();

menu();
while((option=cin.get())!='8')
{
switch(option)
{
case '1':build();
break;
case '2':list();
break;
case '3':insert();
break;
case '4':deletes();
break;
case '5':edit();
break;
case '6':search();
break;
case '7':sort();
break;
case '8':return 0;}

menu();
}
return 0;
}


void menu(){
cout<<"Main menu "<<endl;
cout<<"1.Built The Employee Table"<<endl;
cout<<"2.List The Employee Table"<<endl;
cout<<"3.Insert New Entry"<<endl;
cout<<"4.Delete An Entry"<<endl;
cout<<"5.Edit An Entry"<<endl;
cout<<"6.Search Arecord"<<endl;
cout<<"7.Sort The Table"<<endl;
cout<<"8.Quite"<<endl;
cout<<"Select Your Option Please"<<endl;}

void build(){
cout<<endl;
cout<<"maximum number of entries 20"<<endl;
cout<<"how many do you want";
cin>>num;
cout<<"Enter The Following Items"<<endl;
for(int i=0;i<=num-1;i++)
{cout<<"Name:"<<endl;
cin>>emp[i].name;
cout<<"Code:"<<endl;
cin>>emp[i].code;
cout<<"Designation:"<<endl;
cin>>emp[i].designation;
cout<<"Years of Experience:"<<endl;
cin>>emp[i].exp;
cout<<"Age:"<<endl;
cin>>emp[i].age;}
cout<<"going to main menu"<<endl;
Sleep(500);}

void  list(){
cout<<endl;
cout<<"Name     Code     Designation     Years(EXP)     Age "<<endl;
cout<<"------------------------------------------------------"<<endl;
for(int i=0;i<=num-1;i++){
cout<<setw(13)<<emp[i].name;
cout<<setw(6)<<emp[i].code;
cout<<setw(15)<<emp[i].designation;
cout<<setw(10)<<emp[i].exp;
cout<<setw(15)<<emp[i].age;
cout<<endl;}
cout<<"going to main menu";
getch();}

void insert(){
int i=num;
num+=1;
cout<<endl;
cout<<"Enter The Following Items"<<endl;
cout<<"Name:"<<endl;
cin>>emp[i].name;
cout<<"Code:"<<endl;
cin>>emp[i].code;
cout<<"Designation:"<<endl;
cin>>emp[i].designation;
cout<<"Years of Experience:"<<endl;
cin>>emp[i].exp;
cout<<"Age:"<<endl;
cin>>emp[i].age;
cout<<endl<<endl;
cout<<"going to main menu";
Sleep(500);
}


void deletes(){
int code;
int check;
cout<<endl;
cout<<"Enter An Job Code To Delete That Entry: "<<endl;
cin>>code;
int i;
for(i=0;i<=num-1;i++)
{
if(emp[i].code==code)
{check=i;}}
for(i=0;i<=num-1;i++)
{if(i==check)
{continue;}
else{
if(i>check)
{tempemp[i-1]=emp[i];}
else{tempemp[i]=emp[i];}}
}num--;
for(i=0;i<=num-1;i++)
{
emp[i]=tempemp[i];
}}
void edit(){
int jobcode;
cout<<endl;
cout<<endl;
int i;
void editmenu();
void editname(int);
void editcode(int);
void editdes(int);
void editexp(int);
void editage(int);
char option;
cout<<"Enter An jobcode To Edit An Entry:"<<endl;
cin>>jobcode;
editmenu();
for(i=0;i<=num-1;i++)
{if(emp[i].code==jobcode)
{while((option=cin.get())!='q')
{switch(option)
{case '1':editname(i);
break;
case '2':editcode(i);
break;
case '3':editdes(i);
break;
case '4':editexp(i);
break;
case '5':editage(i);
break;}
editmenu();}
}}}
void editmenu(){
cout<<"What Do You Want To edit"<<endl;
cout<<"1.Name"<<endl;
cout<<"2.Code"<<endl;
cout<<"3.Designation"<<endl;
cout<<"4.Experience"<<endl;
cout<<"5.Age"<<endl;
cout<<"Options Pleas"<<endl;
}
void editname(int i)
{cout<<"Enter New Name"<<endl;
cin>>emp[i].name;
}
void editcode(int i)
{
cout<<"Enter New Job Code:"<<endl;
cin>>emp[i].code;
}
void editdes(int i)
{
cout<<"Enter new designation:"<<endl;
cin>>emp[i].designation;
}

void editexp(int i)
{
cout<<"Enter new Years of Experience"<<endl;
cin>>emp[i].exp;
}
void editage(int i)
{
cout<<"Enter new Age "<<endl;
cin>>emp[i].age;
}
void search(){
cout<<endl;
cout<<endl;
int jobcode;
cout<<"You Can Search Only By Jobcode Of An Employee"<<endl;
cout<<"Enter Code Of An Employee"<<endl;
cin>>jobcode;
for(int i=0;i<=num-1;i++)
{if(emp[i].code==jobcode)
{
cout<<" Name     Code     Designation     Years(EXP)     Age "<<endl;
cout<<"------------------------------------------------------"<<endl;
cout<<setw(13)<<emp[i].name;
cout<<setw(6)<<emp[i].code;
cout<<setw(15)<<emp[i].designation;
cout<<setw(10)<<emp[i].exp;
cout<<setw(15)<<emp[i].age;
cout<<endl;}}
cout<<"going to main menu";
getch();}


void sort()
{
void sortmenu();
void sortname();
void sortcode();
void sortdes();
void sortexp();
char option;
void sortage();
cout<<endl;
cout<<endl;
sortmenu();
while((option=cin.get())!='q')
{switch(option)
{case '1':sortname();
break;
case '2':sortcode();
break;
case '3':sortdes();
break;
case '4':sortexp();
break;
case '5':sortage();
break;}

sortmenu();}}


void sortmenu(){
cout<<"What Do You Want To edit"<<endl;
cout<<"1.Name"<<endl;
cout<<"2.Code"<<endl;
cout<<"3.Designation"<<endl;
cout<<"4.Experience"<<endl;
cout<<"5.Age"<<endl;
cout<<"Options Please"<<endl;  }


void sortname(){
int i,j;
struct employee temp[max];
for(i=0;i<=num-1;i++)
{sortemp1[i]=emp[i];}
for(i=0;i<=num-1;i++)
{for(j=0;j<=num-1;j++)
{if(strcmp(sortemp1[i].name,sortemp1[j].name)<=0)
{temp[i]=sortemp1[i];
sortemp1[i]=sortemp1[j];
sortemp1[j]=temp[i];}}}

for(i=0;i<=num-1;i++){
cout<<" Name     Code     Designation     Years(EXP)     Age "<<endl;
cout<<"------------------------------------------------------ "<<endl;
 for( i=0;i<=num-1;i++){
cout<<setw(13)<<sortemp1[i].name;
cout<<setw(6)<<sortemp1[i].code;
cout<<setw(15)<<sortemp1[i].designation;
cout<<setw(10)<<sortemp1[i].exp;
cout<<setw(15)<<sortemp1[i].age;
cout<<endl;}
cout<<"Press Any Key To Go Back";
getch();
} }


void sortcode(){
int i,j;
struct employee temp[max];
for(i=0;i<=num-1;i++){
sortemp1[i]=emp[i];}
for(i=0;i<=num-1;i++)
{for(j=0;j<=num-1;j++)
{if(sortemp1[i].code<sortemp1[j].code)
{temp[i]=sortemp1[i];
sortemp1[i]=sortemp1[j];
sortemp1[j]=temp[i];}}}

for(i=0;i<=num-1;i++){
cout<<"Name     Code     Designation     Years(EXP)     Age "<<endl;
cout<<"------------------------------------------------------ "<<endl;
for( i=0;i<=num-1;i++)
{
cout<<setw(13)<<sortemp1[i].name;
cout<<setw(6)<<sortemp1[i].code;
cout<<setw(15)<<sortemp1[i].designation;
cout<<setw(10)<<sortemp1[i].exp;
cout<<setw(15)<<sortemp1[i].age;
cout<<endl;}
cout<<"Press Any Key To Go Back";
getch();}}

void sortdes(){
int i,j;
struct employee temp[max];
for(i=0;i<=num-1;i++){
sortemp1[i]=emp[i];}
for(i=0;i<=num-1;i++)
{for(j=0;j<=num-1;j++)
{if(strcmp(sortemp1[i].designation,sortemp1[j].designation)<=0)
{temp[i]=sortemp1[i];
sortemp1[i]=sortemp1[j];
sortemp1[j]=temp[i];}}}
for( i=0;i<=num-1;i++){
cout<<"Name     Code     Designation     Years(EXP)     Age"<<endl;
cout<<"------------------------------------------------------"<<endl;
for( i=0;i<=num-1;i++){
cout<<setw(13)<<sortemp1[i].name;
cout<<setw(6)<<sortemp1[i].code;
cout<<setw(15)<<sortemp1[i].designation;
cout<<setw(10)<<sortemp1[i].exp;
cout<<setw(15)<<sortemp1[i].age;
cout<<endl;}
cout<<"Press Any Key To Go Back";
getch();}}

void sortage(){
int i,j;
struct employee temp[max];
for(i=0;i<=num-1;i++){
sortemp1[i]=emp[i];
}
for(i=0;i<=num-1;i++)
{for(j=0;j<=num-1;j++)
{if(sortemp1[i].age<sortemp1[j].age)
{temp[i]=sortemp1[i];
sortemp1[i]=sortemp1[j];
sortemp1[j]=temp[i];}}}
for( i=0;i<=num-1;i++)
{
cout<<"Name     Code     Designation     Years(EXP)     Age"<<endl;
cout<<"------------------------------------------------------"<<endl;
for( i=0;i<=num-1;i++){
cout<<setw(13)<<sortemp1[i].name;
cout<<setw(6)<<sortemp1[i].code;
cout<<setw(15)<<sortemp1[i].designation;
cout<<setw(10)<<sortemp1[i].exp;
cout<<setw(15)<<sortemp1[i].age;
cout<<endl;}
cout<<"Press Any Key To Go Back";
getch();}}

void sortexp(){
int i,j;
struct employee temp[max];
for(i=0;i<=num-1;i++)
{sortemp1[i]=emp[i];}
for(i=0;i<=num-1;i++)
{for(j=0;j<=num-1;j++){
if(sortemp1[i].exp<sortemp1[j].exp)
{temp[i]=sortemp1[i];
sortemp1[i]=sortemp1[j];
sortemp1[j]=temp[i];}}}

for( i=0;i<=num-1;i++){
cout<<"Name     Code     Designation     Years(EXP)     Age "<<endl;
cout<<"------------------------------------------------------ "<<endl;
for( i=0;i<=num-1;i++)
{
cout<<setw(13)<<sortemp1[i].name;
cout<<setw(6)<<sortemp1[i].code;
cout<<setw(15)<<sortemp1[i].designation;
cout<<setw(10)<<sortemp1[i].exp;
cout<<setw(15)<<sortemp1[i].age;
cout<<endl;}
cout<<"Press Any Key To Go Back";
getch();} }
