
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
    food (int w, double p)
    {
        cout<<"Parameterised Constructior"<<endl;
        weight = w;
        price = p;
    }
    food ()
    {
        cout<<"Default Constructior"<<endl;
    }

};

int main (){

  food ob;

  food biscuit (200, 6000);
  biscuit.display ();

  food cake (5, 6000);
  cake.display ();

  food chocolate (7000, 63450);
  chocolate.display ();

  food softdrinks (25630, 6034634600);
  softdrinks.display ();
}
