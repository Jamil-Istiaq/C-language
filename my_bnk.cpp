#include<iostream>
using namespace std;
class ACC
{
string name;
double ACCNO;
public:
void setName(string n){
name = n;
}
void setACCNO(double A){
ACCNO = A;
}
string getname(){
return name;
}
double getACCNO(){
return ACCNO;
}
};
class SavingACC : public ACC

{
double Deposit;
double Balance = 500;
public:
void setDeposit(double D){
Deposit = D;
}
void setBalance(double B){
Balance = B;
}
double getDeposit(){
return Deposit;
}
double getBalance(){
return Balance;
}
void Interest(int money)
{
float Sertax = 2;
Balance = Balance - Sertax;
}
void Withdrawl(){
int money;
cout<<"Enter the amount of Money : ";
cin>>money;
if(Balance - money > 50 ){
if(Balance < 500){
cout<<"We are imposing penality for low minimum balance"<<endl<<endl;
int plty = 50;
Balance = Balance - (money + plty);
Interest(money);
cout<<"Transaction is successfully"<<endl;

}
else{
Balance =Balance - money;
Interest(money);
cout<<"The Transaction is successfully"<<endl;
}
}
else
cout<<"Transaction cannot be done"<<endl;
}
void Deposit1(){
int money;
cout<<"Enter the amount of Money : ";
cin>>money;
Balance =Balance + money;
}
void Display(){
cout<<"\n\nBalance : "<<Balance<<endl;
cout<<"The Minimum Balance : 500\n\n"<<endl;
}
};
class CurrACC : public ACC
{
double Deposit;
double Balance = 500;
public:
void setDeposit(double D){
Deposit = D;
}
void setBalance(double B){
Balance = B;
}

double getDeposit(){
return Deposit;
}
double getBalance(){
return Balance;
}
void Cheque(){
int money;
string Bname;
cout<<"Enter the name of Cheque receiver : ";
cin>>Bname;
cout<<"Enter the amount of Money : ";
cin>>money;
if(Balance - money > 50 ){
if(Balance == 0)
cout<<"Transaction cannot be done"<<endl;
else{
Balance = Balance - money;
cout<<"The Transaction is successfully"<<endl;
cout<<endl;
Display1(Bname,money);
}

