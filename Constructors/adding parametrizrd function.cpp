#include<iostream>
using namespace std;
class girls
{
    public :
    int rate;
    float time;
    void display ()
    {
        cout<<rate<<"  " <<time;
    }
    void setvalue (int d, float e)

    {
        rate=d;
        time=e;
    }



};
int main ()
{

 girls zisha;

 zisha.setvalue(100, 3);
 zisha.display ();
}
