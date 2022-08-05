
#include<iostream>
using namespace std;

class Employe
{
 public :
     string name;
     int id;

     void display()
     {
         cout<<name<<endl;
         cout<<id;
     }

};
class person : public Employe
{
public :

    int id_per;
    void display2()
    {
        cout<<id_per<<endl;
        display();
    }

};

int main ()
{
   person object_1;

   object_1.id_per =43804;
   object_1.name = "JEFF BEZOS";
   object_1.id =  2993;
   object_1.display2();
}
