#include<iostream>
using namespace std;
class biriyani
{
public:
    string name;
    int price;
    void display()
    {
        cout<<"THIS IS " <<name<<endl;
        cout<<"ITS PRICE " <<price<<endl;
    }

};

class kacchi : public biriyani
{
public :
    string restaurentName;
    void displa ()
    {
        display();
        cout<<"THE RESTAURENT IS "<<restaurentName<<endl;
    }
};

int main ()
{
 kacchi basmati;
 basmati.name = "BASMATI KACCHI";
 basmati.price = 450;
 basmati.restaurentName ="KACCHIR RAZZO";
 basmati.displa();

}
