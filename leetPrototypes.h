//Programmer: Martha Winger-Bearskin   Date:4/12/13
//File Name: leet.h                  Class:CS 53 A
//Purpose: This is a header file that contains the funstion prototypes for the
// leet translation program.


#ifndef LEETPROTOTYPES_H
#define LEETPROTOTYPES_H

//The greetings() displays a gretting to user.
//Pre: none
//Post: greeting is displayed to screen
void greetings();

//The menu() displays a menu to user.
//Pre: none
//Post: displays a menu to user and reads in and returns choice.
short menu();

//The translator() will translate english characters to leet.
//Pre: none
//Post: The leet translation of the english character entered by user will be
//displayed
void translator ();

//The the readIn() reads in the leet characters that are going to be translated
//Pre: first parameter must be a null terminated character array.
//Post: the leet characters enters by the user will be stored in an NTCA.
void readIn(char input[], const int SIZE);

//The overloaded translator() will translate leet characters to english.
//Pre: 
//Post: The characters in the first parameter will be translated and stored
//in the second parameter and the translation will be displayed
void translator (const char input[], char output[]);

//The signOff() displays a sign off message to user.
//Pre: none
//Post: sign off is displayed to screen
void signOff();



#endif
