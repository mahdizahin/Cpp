#include<iostream>
using namespace std;
class person
{
public :
    virtual void display ()
    {
        cout<<" i am a person "<<endl;
    }

};


class student : public person
{
public :
   void display ()
    {
        cout<<" i am a student "<<endl;

    }
};


class teacher : public person
{
    public :

   void display ()
    {
        cout<<" i am a teacher "<<endl;
    }
};






int main()
{

    person *p;
    student s;
    teacher t;

    p = &s;
    p -> display();

    p = &t;
    p -> display();


}

