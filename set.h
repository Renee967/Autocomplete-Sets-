#ifndef SET_H
#define SET_H
#include <string>
using namespace std;
class Set
{
private:
string name;
string* items;
int count;
int numItems;
public:
Set();
Set(string n, int c,int num, string* in);
int getCount() const;
void displayAll();
bool search(string in);
void append(string n);
void bubbleSort();
};



//main.cpp

#include<conio.h>
#include <iostream>
#include "Set.h"
#include <fstream>
using namespace std;
int main() {
    ifstream infile("input.txt");
    char ch = ' ';
    string input;
   
    int count = 0;
    while (getline(infile, input))
    {
        count++;
    }
    infile.close();

    infile.open("input.txt");
    string* source = new string[100];
    int i = 0;
    while (getline(infile, input))
    {
        source[i] = input;
        i++;
    }
    string in;
    Set Set1("My Set", 100,i, source);
   
    Set1.displayAll();
    cout << endl << endl;
    Set1.bubbleSort();
    cout << "Sorted List: " << endl;
    Set1.displayAll();
    cout << endl << endl;
    cout << "Search for a title. If you want to add something new press tab." << endl;
    while (1) {
       
        if (_kbhit()) {
            system("CLS"); //clear screen
            ch = _getch();
            in.push_back(ch);
            if (ch == '\b') //backspace clears the search
                in.clear();



            //cout << ch << " was pressed" << endl;
            cout << in << endl;
Set1.search(in);





            if (ch=='\t')
            {
                char choice;
             //   cout << "List is empty, would you like to add a title?" << endl;
           //    cout << "y/n" << endl;
              //  cin >> choice;
             //   if (choice == 'y')
                {
                    system("CLS");
                    cout << "Enter title" << endl;
                    string name;
cin >> name;
                    Set1.append(name);
system("CLS");
Set1.displayAll();
in.clear();
                }
            }
           
               
           
        }
    }

}








