// Bazil-Uddin-Khan24k-0559 
#include "Library.h" 
#include "Book.h"
#include<iostream>
using namespace std;

Library :: Library()
{
     trackbook =0;
     book = new Book[100];
}
    
    
void Library :: addBook()
    
{
        if(trackbook < 100)
        {
            book[trackbook].SetAttributes();
            trackbook++;
        }
        else
        {
            cout << " Cant Add " << endl;
        }
}
    
    
void Library ::  removeBook()
{
        string bookisbn; 
        cout << " Enter Isbn no to Remove " << endl;
        cin >> bookisbn;
        
        for(int y =0; y < trackbook; y++)
        {
            if(bookisbn == book[y].getIsbn())
            {
                for(int i =y; i< trackbook-1;i++)
                {
                    book[i] = book[i+1];
                }
                trackbook--;
                cout << "Book Succesfully Removed" << book[y].getTitle() << " uPdated count is " << trackbook << endl;
                return;
            }
        }
        
}

  
    
void Library ::  searchBook()
{
        string bookisbn;
        cout << " Enter Book Isbn To Search " << endl;
        cin >> bookisbn;
        int found =0;
        
        for(int y =0; y < trackbook ; y++)
        {
            if(book[y].getIsbn() == bookisbn)
            {
                cout << " Succesfully Found isbn = " << bookisbn  << endl;
                cout << " Title is " << book[y].getTitle() << " author is " << book[y].getAuthor() << endl;
                found =1;
            }
        }
        
        if(found == 0)
        {
            cout << " Sorry!. Couldnt Found " << endl;
        }
}
   
 
    


