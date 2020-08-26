#include <fstream>
#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

void create_list(){
   char input[500];
   ofstream os;
   os.open("Foodlist.txt");
   cout << "Please Enter food name: ";
//   cin>>input;
   cin.getline(input, 500);
   os << input << endl;
   os.close();
   }
void display(){
   ifstream is;
   string line;
   is.open("Foodlist.txt");
   cout << "Reading from a text file:" << endl;
   while (getline(is,line))
   {
   cout << line << endl;
   }
   is.close();
}

void search_name(){
string search;
ifstream is;
string line;

is.open("Foodlist.txt");

if(!is){
cout << "Unable to open file" << endl;
exit(1);
}
cout << "Enter word to search for: ";
cin >>search;


size_t pos;
while(is.good())
  {
      getline(is,line); // get line from file
      pos=line.find(search); // search
      if(pos!=string::npos) // string::npos is returned if string is not found
        {
            cout <<"Found!";
            break;
        }
        else cout<<"Not Found"<<endl;}
  }




int main(){
int x;

create_list();

display();
search_name();}
