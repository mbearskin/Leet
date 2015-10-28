//Programmer: Martha Winger-Bearskin   Date:4/12/13
//File Name: main.cpp                 Class:CS 53 A
//Purpose: This is the main file for program 8. This program will translate
//english to leet and leet to english. 


#include "leet.h"
#include "leetPrototypes.h"
#include <iostream>
using namespace std;
int main()
{
  
  const short SIZE = 500;
  bool quit = false;
  char toTranslate[SIZE];
  char translated[SIZE];
  
  
  greetings();
  do
  {
    switch (menu())
    {
      case 1:
        translator ();
        break;
      case 2:
        readIn (toTranslate, SIZE);
        translator (toTranslate,translated);
        break;
      case 3:
        quit = true;
        break;
      default :
        cout << "Enter a VALID menu option" << endl;
    }
  }while (!quit);
  
  signOff();
  
  return 0;
    
}

