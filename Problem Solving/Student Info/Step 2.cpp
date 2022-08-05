#include<iostream>
using namespace std ;
class Book
{
  public :
  string isbn;
  string bookTitle;
  string authorName;
  double price;
  int availableQuantity;

  Book(string isbn,string bookTitle,string authorName,double price,int availableQuantity)
  {
        this->isbn= isbn;
        this->bookTitle=bookTitle;
        this->authorName=authorName;
        this->price=price;
        this->availableQuantity=availableQuantity;

  }

  void setIsbn(string isba)
  {
     isbn=isba;
  }

   string  getIsbn()
  {
    return isbn;
  }


  void setBookTitle(string Booktitle)
  {
     bookTitle=Booktitle;
  }


  void setAuthorName(string AuthorName)
  {
    authorName=AuthorName;
  }


void setPrice(double Price)
  {
    price=Price;
  }


  void setAvailableQuantity(int AvailableQuantity)
  {
    availableQuantity=AvailableQuantity;
  }




  string getBookTitle()
  {
    return bookTitle;
  }
  string getAuthorName()
  {
    return authorName;
  }
  double getPrice()
  {
    return price;
  }
  int getAvailableQuantity()
  {
    return availableQuantity;
  }




  void showDetails1()
  {
      cout<<"Isbn of book is:"<<isbn<<endl;
      cout<<"bookTitle of book is:"<<bookTitle<<endl;
      cout<<"authorName of book is:"<<authorName<<endl;
      cout<<"Price of book is:"<<price<<endl;
      cout<<"availableQuantity of book is:"<<availableQuantity<<endl;
  }
};


class StoryBook:public Book
{
  public :
  string category;


  StoryBook(string isbn,string booktitle,string authorName,double price,int availableQuantity,string cAtegory)
  :Book(isbn,booktitle,authorName,price,availableQuantity)
{
    category=cAtegory;
}
  void setCategory(string Category)
  {
      category=Category;
  }
  string getCategory()
  {}
  void showDetails2()
  {
   cout<<"category"<<category<<endl;
  }

};
class TextBook:public StoryBook
{
  public :
  string standard;

  TextBook(string isbn,string booktitle,string authorName,double price,int availableQuantity,string category,string Standard)
  :StoryBook(isbn,booktitle,authorName,price,availableQuantity,category)
 {
    standard=Standard;
 }
  void setStandard(string Standard)
  {
     standard= Standard;
  }
  string getStandard()
  {
      return standard;
  }
  void showDetails3()
  {
  cout<<"the standard is : "<<standard<<endl;
  }
};

int main()
{
  TextBook obj("Amir","KKK","Avirupa",100,20,"good","bad");
  obj.showDetails1();
  obj.showDetails2();
  obj.showDetails3();

  /*TextBook obb;
  obb.setIsbn("MAL");
  obb.setBookTitle("Arup khanki magi");
  obb.setAuthorName("NILoy");
  obb.setPrice(69);
  obb.setAvailableQuantity(1);
  obb.setCategory("choti");
  obb.setStandard("fuking good ");
  obb.showDetails1();
  obb.showDetails2();
  obb.showDetails3();*/

}
