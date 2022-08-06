
#include<iostream>
using namespace std;
class Human
{
    public :
    int rate;
    float time;

    void display ()
    {
        cout<<rate<<"    " <<time<<endl;

    }

    void setvalue (int x, float y)
    {
        rate = x;
        rate = x;
        time = y;
    }


};
int main ()
{

 Human white, black, grey;

 white.setvalue(2000, 4);
 white.display ();

 black.setvalue(500,2);
 black.display ();

 grey.setvalue (93000, .50);
 grey.display ();


}
