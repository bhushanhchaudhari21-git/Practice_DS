#include<iostream>
#include<string>
using namespace std;

 int main()
 {
  int id1,id2,id3,id4;
  string name1,name2,name3,name4;

 cout<<"Enter Book ID 1 ";
 cin>>id1;
 
 cin.ignore();
 cout<<"Enter Book Name 1 ";
 getline(cin,name1);
 
 cout<<"Enter Book ID 2 ";
 cin>>id2;
 
 cin.ignore();
 cout<<"Enter Book Name 2 ";
 getline(cin,name2);
 
 cout<<"Enter Book ID 3 ";
 cin>>id3;
 
 cin.ignore();
 cout<<"Enter Book Name 3 ";
 getline(cin,name3);
 
 cout<<"Enter Book ID 4 ";
 cin>>id4;
 
 cin.ignore();
 cout<<"Enter Book Name 4 ";
 getline(cin,name4);
 
 //Display Books
 cout<<"\n====THE Library====";
 
 cout<<"\nBook ID : "<<id1;
 cout<<"\nBook Name : "<<name1;
 
 cout<<"\nBook ID : "<<id2;
 cout<<"\nBook Name : "<<name2;
 
 cout<<"\nBook ID : "<<id3;
 cout<<"\nBook Name : "<<name3;
 
 cout<<"\nBook ID : "<<id4; 
 cout<<"\nBook Name : "<<name4;
 
  return 0;
}
  
