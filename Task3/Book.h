// Bazil-Uddin-Khan24k-0559 
#ifndef Book_H
#define Book_H

#include<iostream>
using namespace std;

class Book
{
    protected:
    string title;
    string author;
    string Isbn;
    

    public:
    Book();
    
    
    Book(string tile,string autho,string isbn);
    
    
    string getTitle();
    
    string getAuthor();
    
    string getIsbn();
    
    void SetAttributes();  
};

#endif