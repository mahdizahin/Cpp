#include<iostream>
using namespace std;
class monitor
{
public :
    double inch;
    string name;

     monitor (double a, string b)
    {
        inch = a;
        name = b;
    }

    void d()
    {
        cout<<" display"<<inch<<name<<endl;
    }

};


int main ()
{
  monitor redmi (23.5, "Redmi 1A");
  redmi.d ();
}
