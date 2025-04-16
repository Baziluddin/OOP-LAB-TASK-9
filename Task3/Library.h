// Bazil-Uddin-Khan24k-0559 
#ifndef Library_H
#define Library_H
#include "Book.h"


#include<iostream>
using namespace std;

class Library 
{
    protected:
    Book * book;
    int trackbook;
    
    public:
    Library();
    
    void addBook();
    
    void removeBook();

    void searchBook();
   
};

#endif