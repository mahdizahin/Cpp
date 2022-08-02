
#include<iostream>
using namespace std;

class   Weapon
{
 public :
     void display ()
     {
         cout<<"Weapon is the Father of Power"<<endl;
     }

};

class Drone : public Weapon
{
public :
    void display ()
     {
         cout<<"Drone is the Game Changer"<<endl;
     }


};

class NuclearWeapon : public Weapon
{
public :
    void display ()
     {
         cout<<"NuclearWeapon is Planet Changer"<<endl;
     }


};


int main ()
{
   Weapon w1;
   w1.display();

   Drone bayatark;
   bayatark.display();

   NuclearWeapon littleBoy;
   littleBoy.display();


}
