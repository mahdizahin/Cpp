#include<iostream>
using namespace std;

class person
{
public:
    virtual void display ()
    {
        cout<<"IM A PERSON"<<endl;
    }
};

class boxer: public person
{
public:
     void display ()
    {
        cout<<"I'M A BOXER"<<endl;
    }
};


class toxic: public person
{
public:
    void display ()
    {
        cout<<"I'M TOXIC"<<endl;
    }
};

int main ()
{
    person *p;

    boxer b;
    p= &b;
    p->display ();

    toxic t;
    p= &t;
    p->display ();


}














