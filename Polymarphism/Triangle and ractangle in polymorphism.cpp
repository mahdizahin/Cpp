#include<iostream>
using namespace std;
class shape
{
public :
    double dim1, dim2;
    shape (double dim1,double dim2 )
    {
        this -> dim1 = dim1;
         this -> dim2 = dim2;
    }
    virtual double shap ()
    {
        return 0;
    }

};

class tri : public shape
{
public :

   tri (double dim1,double dim2 )
     : shape (dim1, dim2)
    {

    }
    double shap ()
    {
        return  dim1*dim2*0.5;
    }


};
class rac : public shape
{
public :

   rac (double dim1,double dim2 )
     : shape (dim1, dim2)
    {

    }
    double shap ()
    {
        return  dim1*dim2;
    }


};

int main ()
{
    shape *sha;
    tri t(10,20);
    rac four(10,40);

    sha =&t;

    cout<<sha->shap()<<endl;
    sha =&four;
     cout<<sha->shap();



}
