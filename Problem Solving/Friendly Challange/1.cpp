#include<iostream>
using namespace std;
class insect
{
public :
    string name;
    string wings;

    insect (string name, string wings)
    {
        this -> name=name;
        this -> wings=wings;
    }

    void show()
    {
        cout<<"Insent name "<<name<<endl;
        cout<<"It has "<<wings<<" wings"<<endl;

    }
};

class grasscopper : public insect
{
public :
    string boring_type;
    void show ()
    {
        cout<<"its boring level"<<boring_type;
    }

};

int main()
{
   insect  grasscopper ( "grasscopper","8");
   grasscopper.show();
}
