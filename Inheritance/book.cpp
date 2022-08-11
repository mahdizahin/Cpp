
#include<iostream>
using namespace std;
class Book
{
public :
  string boookname;
Book ()
  {

  }

  Book (string boookname)
  {
      this -> boookname = boookname;
  }

  void Setboookname (string bookname)
  {
      boookname = bookname;
  }
  string getboookname ()
  {
      return boookname;
  }
  void display ()
  {
      cout<<  "boookname "<< boookname <<endl;
  }
};

int main ()

{
  Book b1;
  b1.Setboookname ("BELA FURABAR AGE");
  b1.display();

}
