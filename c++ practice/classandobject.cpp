#include <iostream>
using namespace std;


class Book{
    public:
       string title;
       string author;
       int pages;

       Book(string atitle, string aauthor, int  apages){
           title=atitle;
           author=aauthor;
           pages=apages;
       }

};



int main(){
    Book book1("Harry Potter","JK Rowling", 500);

    cout << book1.author;
   

    
    return 0;

}