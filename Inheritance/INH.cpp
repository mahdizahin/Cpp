#include<iostream>
using namespace std;
class insect
{
public :
    string name;
    double weight;
    void display()
    {
        cout<<name<<endl;
        cout<<weight<< " KG "<<endl;
    }
};

class gay : public insect
{
public :
    string color;
     void display2()
    {
        display();
        cout<<color<<endl;
    }

};
int main ()
{
    gay arup;
    arup.name = "ARUP";
    arup.weight = (69);
    arup.color= "MARIAR PUTKIR MOTO SHADA";
    arup.display2();
}
