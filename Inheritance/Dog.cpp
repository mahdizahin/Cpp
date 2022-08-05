
#include <iostream>
using namespace std;

class dog
{
public :
    void eat()
    {
        cout<<"eating..."<<endl;
    }

};
class tommy : public dog
{
public :
    void bark()
    {
        cout<<"barking...";
    }

};
int main ()
{
    tommy t1;
    t1.eat();
    t1.bark();
}
