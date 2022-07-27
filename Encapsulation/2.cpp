#include<iostream>
using namespace std;

class Animal
{
private :
    string animalName;
public :
    void setAnimalName (string animalName)
    {
       this-> animalName = animalName;
    }
   string getAnimalName ()
    {
        return animalName;
    }
};

int main ()
{
   Animal an_1;
   an_1.setAnimalName ("Virmira X-50 mars");
   cout<<an_1.getAnimalName ();



}
