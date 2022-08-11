#include<iostream>
using namespace std;
class person
{
public :
   virtual void display1 ()
    {
        cout<<" i am a person "<<endl;
    }




};


class student : public person
{
public :
   virtual void display2 ()
    {
        display1();
        cout<<" I am a student "<<endl;

    }
};


class teacher : public person
{
    public :

   void display3 ()
    {

        cout<<" I am a teacher "<<endl;
    }
};






int main()
{

     //person p;
    //student s;
    teacher t;

   // p.display ();
    //s.display ();
    t.display3 ();
}
