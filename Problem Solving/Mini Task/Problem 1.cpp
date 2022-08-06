#include<iostream>
using namespace std;
class b_eight
{
    public :
    string Size;
    float bf;



     b_eight (string s, float b)
     {
         Size = s;
         bf=b;
     }


 void print()
    {
        cout<<Size<<" "<<bf<<endl;
    }

};
int main()
{

   cout<<"Write here for output"<<endl;

   b_eight maxion (  "Dog",36);
   maxion.print ();


}
