#include<iostream>
using namespace std;
class iftar
{
public :
    string Biriyani;
    string water;
    string cold_drinks;

    iftar (string Biriyani,string water,string cold_drinks)
    {
       this -> Biriyani=Biriyani;
       this -> water = water;
       this -> cold_drinks = cold_drinks;
    }
    void display()
    {
        cout<<"Item Number 1 : "<<Biriyani<<endl;
        cout<<"Item Number 2 : "<<water<<endl;
        cout<<"Item Number 3 : "<<cold_drinks<<endl;
    }
};
class teacher
{
public :
    int num1;
    string name;
    teacher( int num1,string name)
    {
        this -> num1=num1;
        this -> name=name;
    }
    void display()
    {
        cout<<"Teachers numbers : "<<name<<endl;
        cout<<"Teachers name : "<<name<<endl;
    }
};
class batch_18 : public iftar
{
protected :
    string tormuz;
    string apple;
public :

    batch_18(string Biriyani,string water,string cold_drinks,string tormuz,string apple)
    : iftar(Biriyani,water,cold_drinks)

    {
        this -> tormuz=tormuz;
        this -> apple=apple;
    }


     void setTormuz ( string tormuz )
    {
        this-> tormuz=tormuz;
    }
    string getTormuz()
    {
        return tormuz;
    }

    void setapple ( string apple)
    {
        this-> apple=apple;
    }
    string getapple()
    {
        return apple;
    }

    void display()

    {
        iftar :: display ();
        cout<<"Item Number 4 : "<<tormuz<<endl;
        cout<<"Item Number 5 : "<<apple<<endl;
    }
};

class batch_03    : public iftar
{
protected :
    string juice;
    string date;
public :

    batch_03(string Biriyani,string water,string cold_drinks,string juice,string date)
    : iftar(Biriyani,water,cold_drinks)

    {
        this -> juice=juice;
        this -> date=date;
    }


     void setjuice ( string juice )
    {
        this-> juice=juice;
    }
    string getjuice()
    {
        return juice;
    }

    void setdate ( string date)
    {
        this-> date=date;
    }
    string getdate()
    {
        return date;
    }

    void display()

    {
        iftar :: display ();
        cout<<"Item Number 4 : "<<juice<<endl;
        cout<<"Item Number 5 : "<<date<<endl;
    }
};


int main ()
{
    cout<<"*****FOR BATCH 18 TEAM 1*****"<<endl;
    batch_18 team1 ("BIFF BIRIYANI","Kinkey water","COCA COLA","WATER MALON","APPLE");
    team1.display();

    cout<<endl<<endl<<"*****FOR BATCH 03 TEAM 1*****"<<endl;
    batch_03 team ("BIFF BIRIYANI","Kinkey water","COCA COLA","MULAR JUICE","MOKKAR KHEJUR");
    team.display();

    //teacher t1;
    //t1.display();
}
















