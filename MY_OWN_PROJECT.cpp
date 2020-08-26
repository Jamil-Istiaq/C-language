#include<fstream>
#include<iostream>

#include<cstdlib>
using namespace std;

void create_file(){
string x;
ifstream inputFile;
cout<<"Enter the txt file name: ";
getline(cin, x);
  // Open the file
    inputFile.open(x.c_str());

    // Check for successful opening
    if(inputFile.fail())
    {
       cerr << "Error Opening File" << endl;

    }

    cout << "\nThe file has been successfully opened for reading.\n";}



int main(){

create_file();

return 0;}
