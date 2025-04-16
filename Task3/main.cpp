// Bazil-Uddin-Khan24k-0559 
#include "Book.h"
#include "Library.h"
#include<iostream>
using namespace std;

int main()
{
    Book book("Qas Is","Qasim","123456H");
    
    cout << " Book Author Is " << book.getAuthor() << endl;
    cout << " Book Title Is " << book.getTitle() << endl;
    cout << " Book Isbn Is " << book.getIsbn() << endl;

    Library library;
    library.addBook();
    library.addBook();
    library.addBook();
    library.searchBook();
    library.removeBook();
    
    return 0;
}