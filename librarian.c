#include <stdio.h>
#include <stdlib.h>

#include "libraryStructures.h"
#include "librarian.h"
#include "utility.h"

////
// Code module for librarian
// They can list the books and see what is borrowed


// List the borrowed books on the screen
// Format should be "author - title" on each line

void listBorrowedBooks( Book *bookList, int numBooks )
{
  int i;
  int a;
  int b;
  // TO DO :
  //
  // list the books in format "name - title"
  a = sizeof(bookList);
  b = a-1;
  for(i=0; i<b; i++)
  {
    if (bookList[i].available == 0)
    {
      removeNewLine(bookList[i].author);
      removeNewLine(bookList[i].title);
      printf("%s - %s\n",bookList[i].author,bookList[i].title );
    }
  }

  return;
}


// List the books on the screen
// Format should be "author - title" on each line

void listBooks( Book *bookList, int numBooks )
{
  int i;
  int a;
  int b;
  // TO DO :
  //
  // list the books in format "name - title"
  a = sizeof(bookList);
  b = a-1;
  for(i=0; i<b; i++)
  {
    if (bookList[i].available == 1)
    {
      removeNewLine(bookList[i].author);
      removeNewLine(bookList[i].title);
      printf("%s - %s \n",bookList[i].author,bookList[i].title);
    }
  }
  return;
}


// DO NOT ALTER THIS CODE

// Menu system for the librarian

void librarianCLI( Library *theLibrary ) {
    int librarianLoggedIn = 1;
    int option;

    while( librarianLoggedIn ){
        printf("\n Librarian options\n 1 List books\n 2 List borrowed books\n 3 Log out\n Choice:");
        option = optionChoice();

        if( option == 1 ) {
            printf("\nList of books:\n");
            listBooks( theLibrary->bookList, theLibrary->numBooks );
        }
        else if( option == 2 ) {
            printf("\nList of borrowed books:\n");
            listBorrowedBooks( theLibrary->bookList, theLibrary->numBooks );
        }
        else if( option == 3 ) {
            librarianLoggedIn = 0;
            printf("\nLogging out\n");
        }
        else
            printf("\nUnknown option\n");
    }
    return;
}
