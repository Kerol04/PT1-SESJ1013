//CLASSES AND OBJECTS & Constructors

#include <iostream>
using namespace std;
  

  //when creating a class, basically creating a NEW DATA TYPE
class Book
{
   public : 
          string BookTitle;
          string BookAuthor;
          int BookPages;
          //create a constructor in class, can also accept parameters :
          Book(string aTitle, string aAuthor, int aPages)
          {
             BookTitle = aTitle;
             BookAuthor = aAuthor;
             BookPages = aPages;
          }

          Book(){
            cout << "Creating object" << endl; /*OUTPUT = Creating object
                                                          Creating object [sbb kat main ada 2 book. So dia call twice]*/                                    
          }

};

int main()
{
    Book book1 ("Harry Potter","JKROWLING",500 ); //can shortcut using constructor
    
   
    book2.BookTitle = "Awan";
    book2.BookAuthor = "Syafiq Aizat";
    book2.BookPages = 300;
    book2.BookTitle = "Aksara";


    cout << book1.BookTitle;
            //OUTPUT = Harry Potter
    
    cout << book2.BookAuthor;
            //OUTPUT = Syafiq Aizat

    cout << book2.BookTitle;
            // OUTPUT = Aksara

    return 0;
}