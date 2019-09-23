//Authors:Lyell Schroeder
#include<iostream>
#include<string>

using namespace std;

int main()
{
  //declare variables
string firstName= " ";
string lastName= " ";
int lucky =0;
  //get user input
cout<< "What is your first name?"<<endl;
cin >> firstName;
cout<<"What is your last name?"<<endl;
cin >> lastName;
lucky=firstName.length();
  //tell fortune
cout<<"Welcome, "<<firstName.at(0)<<"."<<lastName.at(0)<<"., here is your fortune..."<<endl;
cout<<"your lucky number is "<<lucky;
  return 0;
}
