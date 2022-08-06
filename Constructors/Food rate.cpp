#include<iostream>
using namespace std;
class food
{
public :
    int weight;
    double price;

    void display ()
    {
        cout<<weight<<"   "<<price<<endl;
    }
    void setvalue (int w, double p)
    {
        weight = w;
        price = p;
    }


};

int main ()
{

  food biscuit, cake, chocolate, softdrinks;

  biscuit.setvalue(200, 6000);
  biscuit.display ();

  cake.setvalue(5, 6000);
  cake.display ();

  chocolate.setvalue(7000, 63450);
  chocolate.display ();

  softdrinks.setvalue(25630, 6034634600);
  softdrinks.display ();





}
