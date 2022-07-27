#include<iostream>
using namespace std;
class keyboard
{
private :
    string K_name;
public:
    void setK_name (string K_name)
    {
       this-> K_name = K_name;
    }
    string getK_name ()
    {
        return K_name;
    }
};

int main ()
{
  keyboard OK41,y;
  OK41.setK_name ("KYPTRON K-3 ");
  cout<<"Keyboard name : "<<OK41.getK_name ();
  cout<<""<<endl;
  y.setK_name ("KYPTRON K-4 ");
  cout<<"Keyboard name : "<<y.getK_name ();

}
