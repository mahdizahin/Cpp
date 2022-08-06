#include<iostream>
using namespace std;

float c(int n1, char ch, int n2 );
int main ()
{
int n1, n2;
char ch;
float result;
cout<<"Enter first number : ";
cin>>n1;
cout<<"Enter sign : ";
cin>>ch;
cout<<"Enter second number : ";
cin>>n2;
result = c(n1,ch,n2);
cout<<" The result is "<<result;

return 0;
}

float c(int n1, char ch, int n2 )

{
 float result ;
 if (ch == '+')
   result = n1+n2;
else if ( ch=='-')
     result = n1- n2;
else if ( ch=='*')
     result = n1* n2;
else if ( ch=='^')
     result = n1^ n2;

return result;
}
