

// Name:
// Username:
// Date started:

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "libraryStructures.h"
#include "library.h"

////
// Code module for main()
// main function takes command line arguments
// and opens the library menu
// Input: book data filename via command line
// Usage: ./library books.txt

int main( int argc, char **argv )
{
    char bookFile[40];
    //TO DO :

    // check that correct number of command line arguments are entered
    // use the error message
    if (argc != 2)
    {
      printf("Error\nExpected use: ./library books.txt\n");
      return 0;
    }
    // exit the application if there is an error
    // assign command line value to filename string
    // DO NOT ALTER
    // start the system
    else
    {
      printf("\nIntialising library system!\n");
    }
    strcpy(bookFile,argv[1]);

    libraryCLI( bookFile );
    printf("\nClosing library system!\n\n");

    return 0;
}
