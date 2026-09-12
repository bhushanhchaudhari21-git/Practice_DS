#include<iostream>
using namespace std;
 int main()
 {
   int book[5];
   int searchid;
   cout<<"Enter 5 Book IDs:\n";
   
   for(int i=0;i<5;i++)
   {
   cin>>book[i];
   }
  
   cout<<"\nEnter Book ID to search: ";
   cin>>searchid;
  for(int i=0;i<5;i++)
  {
  if (book[i]== searchid)
  {
   cout<<"Book Found!";
   return 0;
  }
}
 cout<<"Book Not Found!";
 return 0;
}
