//Programmer: Martha Winger-Bearskin   Date:4/12/13
//File Name: leetFunctions.cpp                 Class:CS 53 A
//Purpose: The file contains the function definitions for the leet translator
//program

#include "leet.h"
#include "leetPrototypes.h"
#include <iostream>
using namespace std;

void greetings()
{
  cout << "Welcome to the Leet/English Translator" << endl << endl;
  return;
}


short menu()
{
  short choice;
  
  cout << "Main Menu" << endl;
  cout << "1. English to Leet" << endl;
  cout << "2. Leet to English" << endl;
  cout << "3. Quit" << endl;
  cout << "Enter your choice: " ;
  cin >> choice;
  cout << endl;
  return choice;
  
}

void translator ()
{
  char next;
  cin.ignore(50, '\n');
  cout << "English to Leet Translation" << endl;
  cout << "Enter english character/words/phrase(limit 500 characters): ";
  do
  {
    cin.get(next);
    tolower(next);
    switch (next)
    {
      case 'a':
        cout << LEETA;
        
        break;
        
      case 'b':
        cout << LEETB;
        break;
        
      case 'c':
        cout << LEETC;
        break;
        
      case 'd':
        cout << LEETD;
        break;
        
      case 'e':
        cout << LEETE;
        break;
        
      case 'f':
        cout << LEETF;
        break;
        
      case 'g':
        cout << LEETG;
        break;
        
      case 'h':
        cout << LEETH;
        break;
        
      case 'i':
        cout << LEETI;
        break;
        
      case 'j':
        cout << LEETJ;
        break;
        
      case 'k':
        cout << LEETK;
        break;
        
      case 'l':
        cout << LEETL;
        break;
        
      case 'm':
        cout << LEETM;
        break;
        
      case 'n':
        cout << LEETN;
        break;
        
      case 'o':
        cout << LEETO;
        break;
        
      case 'p':
        cout << LEETP;
        break;
        
      case 'q':
        cout << LEETQ;
        break;
        
      case 'r':
        cout << LEETR;
        break;
        
      case 's':
        cout << LEETS;
        break;
        
      case 't':
        cout << LEETT;
        break;
        
      case 'u':
        cout << LEETU;
        break;
        
      case 'v':
        cout << LEETV;
        break;
        
      case 'w':
        cout << LEETW;
        break;
        
      case 'x':
        cout << LEETX;
        break;
        
      case 'y':
        cout << LEETY;
        break;
      
      case 'z':
        cout << LEETZ;
        break;
      
      default:
        cout << next;
    }
  }while (next != '\n');
  
  
  return;
}

void readIn(char input[], const int SIZE)
{
  
  cout << "Leet to English Translation" << endl;
  cout << "Enter leet characters/words/phrase: ";
  cin.ignore(50, '\n');
  cin.getline(input, SIZE);
}

void translator (const char input[], char output[])
{
  short i = 0;        // index for input[]
  short j =0;         // index for output[]
  output[0] = '\0';
  while(input[i] != '\0')
  {
    if(input[i] == '@')
    {
      output[j] = 'a';
    }
    else if(input[i] == '8')
    {
      output[j] = 'b';
    }
    else if(input[i] == '(')
    {
      output[j] = 'c';
    }
    else if(input[i] == '[' && input[i+1] == ')')
    {
      output[j] = 'd';
      i+=1;
    }
    else if(input[i] == '3')
    {
      output[j] = 'e';
    }
    else if(input[i] == '|' && input[i+1] == '=')
    {
      output[j] = 'f';
      i+=1;
    }
    else if(input[i] == '9')
    {
      output[j] = 'g';
    }
    else if(input[i] == '#')
    {
      output[j] = 'h';
    }
    else if(input[i] == ']' && input[i+1] == '[')
    {
      output[j] = 'i';
      i+=1;
    }
    else if(input[i] == ']')
    {
      output[j] = 'j';
    }
    else if(input[i] == '|' && input[i+1] == '<')
    {
      output[j] = 'k';
      i+=1;
    }
    else if(input[i] == '1')
    {
      output[j] = 'l';
    }
    else if(input[i] == '|' && input[i+1] == '\\' &&
            input[i+2] == '/' && input[i+3] == '|')
    {
      output[j] = 'm';
      i+=3;
    }
    else if(input[i] == '|' && input[i+1] == '\\' && input[i+2] == '|')
    {
      output[j] = 'n';
      i+=2;
    }
    else if(input[i] == '0')
    {
      output[j] = 'o';
    }
    else if(input[i] == '|' && input[i+1] == '?')
    {
      output[j] = 'p';
      i+=1;
    }
    else if(input[i] == '4')
    {
      output[j] = 'q';
    }
    else if(input[i] == '|' && input[i+1] == '^')
    {
      output[j] = 'r';
      i+=1;
    }
    else if(input[i] == '$')
    {
      output[j] = 's';
    }
    else if(input[i] == '7')
    {
      output[j] = 't';
      i++;
    }
    else if(input[i] == '|' && input[i+1] == '_' && input[i+2] == '|')
    {
      output[j] = 'u';
      i+=2;
    }
    else if(input[i] == '\\' && input[i+1] == '/')
    {
      output[j] = 'v';
      i+=1;
    }
    else if(input[i] == '\\' && input[i+1] == '^' && input[i+2] == '/')
    {
      output[j] = 'w';
      i+=2;
    }
    else if(input[i] == '>' && input[i+1] == '<')
    {
      output[j] = 'x';
      i+=1;
    }
    else if(input[i] == '\'' && input[i+1] == '/')
    {
      output[j] = 'y';
      i+=1;
    }
    else if(input[i] == '%')
    {
      output[j] = 'z';
    }
    else
    {
      output[j] = input[i];
    }
    i++;
    j++;
  }
  
  
  cout << output << endl << endl;
  return;
}

void signOff()
{
  cout << "Have a great day!";
  return;
}