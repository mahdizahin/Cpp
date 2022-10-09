#include<iostream>
using namespace std;
int main (){

int x=5;
int *p;
p=&x; //store here memory address of x

cout<<x;//Printing the value of x
cout<<endl;
cout<<*p;//Printing the value of x
cout<<endl;

cout<<&x;//printing the memory address of x
cout<<endl;
cout<<p;//printing the memory address of p
//memory address p and x is same cause p is storing memory address of x by using pointer



}

