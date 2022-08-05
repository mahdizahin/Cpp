#include<iostream>
using namespace std;

class person
{
    public :
    string personName;
    int personId;
    void display ()
    {
        cout<<"HER NAME IS : "<<personName<<endl;
        cout<<"HER ID IS : "<<personId<<endl;
    }

};

class student : public person
{
  public:
  string hobby;
  void display2 ()
  {
      display ();
  cout<<"HER HOBBY IS "<<hobby<<endl;
  }
};
int main ()
{

student salsa;
salsa.personName = " SALSA RAHMAN";
salsa.personId = 23884;
salsa.hobby = " GARDENING";
salsa.display2 ();

}
