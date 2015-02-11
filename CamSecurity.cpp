
#include <iostream>
#include "CamCore.h"

using namespace std;

/// Message Main
void help();

int main( int argc, char** argv )
{
	string input = "";

	CamCore core;

	while (true) {

          help();

          cout << "Please enter an option: ";
          getline(cin, input);

          if (input == "q")
          {
               cout << "Exit" << endl;
        	          return 1;
        	          break;
          }
          else if (input == "r")
          {
         	  cout << "Start cam " << endl;
         	  core.start();
         	  cout << "End cam " << endl;
           }
        }

        return 1;

return 1;

}

 void help()
{
        printf( "\nThis is a camera   sample .\n"
               "Usage: \n"
               "     r, Start \n"
               "     q, Exit \n"
               "     "
               "\n" );

}



