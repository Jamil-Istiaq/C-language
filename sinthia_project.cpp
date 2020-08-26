//#include <fstream>
//#include <iostream>
//#include <cstdlib>
//using namespace std;
//
//void create_list(){
////   char input[500];
////   ofstream os;
////   os.open("Foodlist.txt");
////   cout <<"Please Enter food name: ";
////   cin.getline(input, 500);
////   os <<input<< endl;
////   os.close();
//   string x;
//   cout<<"Enter the file name: ";
//   cin>>x;
//   };
//void display_list(){
//   ifstream is;
//   string line;
//   is.open("x");
//   cout << "Reading from a text file: ";
//   while (getline (is,line))
//   {
//   cout<<line<< endl;
//   }
//   is.close();
//}
//
//
//void search_name(){
//string search;
//ifstream is;
//string line;
//
//is.open("Foodlist.txt");
//
//if(!is){
//cout << "Unable to open file" << endl;
//exit(1);
//}
//cout << "Enter word to search for: ";
//cin >>search;
//
//
//size_t pos;
//while(is.good())
//  {
//      getline(is,line); // get line from file
//      pos=line.find(search); // search
//      if(pos!=string::npos) // string::npos is returned if string is not found
//        {
//            cout <<"Found!";
//            break;
//        }
//        else{cout<<"Not Found"<<endl;}
//  }
//
//}
//
//
//int main(){
//int x;
//cout<<"Welcome To Food List"<<endl;
//cout<<"1.Create a list."<<endl;
//cout<<"2.Display list."<<endl;
//cout<<"3.Search in list"<<endl;
////cout<<"Enter your choice: ";
////cin>>x;
////switch(x){
//
//create_list();
//
//
//display_list();
//
//
////search_name();
//
//}
#include <fstream>
#include <iostream>
#include <cstdlib>
using namespace std;

//void create_list(){
//   char input[500];
//   ofstream os;
//   os.open("Foodlist.txt");
//   cout <<"Please Enter food name: ";
//   cin.getline(input, 500);
//   os <<input<< endl;
//   os.close();
//   }
//void display_list(){
//   ifstream is;
//   string line;
//   is.open("Foodlist.txt");
//   cout << "Reading from a text file:" << endl;
//   while (getline (is,line))
//   {
//   cout<<line<< endl;
//   }
//   is.close();}

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
            cout <<"Found!"<<endl;
            cout<<line;
            break;
        }
        else{cout<<"Not Found"<<endl;}
  }

}


int main(){
int x;
cout<<"Welcome To Food List"<<endl;
cout<<"1.tea."<<endl;
cout<<"2.coffee."<<endl;
cout<<"3.noodls"<<endl;
//cout<<"Enter your choice: ";
//cin>>x;
//switch(x){

//create_list();


//display_list();


search_name();

}
