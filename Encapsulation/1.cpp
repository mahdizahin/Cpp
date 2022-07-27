#include<iostream>
using namespace std;

class student
{   private :
    string name;

public :
    void setName(string name)
    {
        this->name = name;
    }

    string getName ()
    {
        return name;
    }

};


int main ()
{
 student name1;
 name1.setName ("KRYPTON-Habbit ");
 cout<<name1.getName();


}

