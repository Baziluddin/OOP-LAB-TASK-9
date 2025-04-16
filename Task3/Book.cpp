// Bazil-Uddin-Khan24k-0559 
#include "Book.h"
#include <iostream>
using namespace std;

Book :: Book() : title(" "),author(" "),Isbn(" ")
{}

Book :: Book(string Title,string autho,string isbn): title(Title),author(autho),Isbn(isbn)
{}

void Book ::  SetAttributes()
{   
        string Title;
        cout << " Enter Title " << endl;
        cin >> Title;
        title = Title;
        
        string Author;
        cout << " Enter Author " << endl;
        cin >> Author;
        author = Author;
        
        string isbn;
        cout << " Enter Isbn " << endl;
        cin >> isbn;
        Isbn = isbn;
        
}

string Book :: getTitle()
    {
        return title;
    }
    
string Book ::getAuthor()
    {
        return author;
    }
    
string Book :: getIsbn()
    {
        return Isbn;
    }

 