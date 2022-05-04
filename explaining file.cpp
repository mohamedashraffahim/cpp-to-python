//This file is for exlpaining the library

#include<iostream>
#include "cpptopython.cpp"
using namespace std;


int main()
{
    int num, choice;
    while (true)
    {
        cout << "\nPlease enter the choice number\n1-know the available functions\n2-Start testing these functions\nYour choice: ";
        cin >> choice;
        if (choice == 1)
        {
           functions();
        }
        else if (choice == 2)
        {
            cout << "Please enter the function number: ";
            cin.clear();
            cin.sync();
            cin >> num;
            if (num == 1)
            {
               string input;
               cin.clear();
               cin.sync();
               getline(cin, input);
               input = lower(input);
               cout << input;
            }
            else if (num == 2)
            {
               string input;
               cin.clear();
               cin.sync();
               getline(cin, input);
               lower(input);
               input = no_spaces(input);
               cout << input;
            }  
        }
        else
        {
            cout << "Please re-enter the choice number: ";
            main();
        }  
    }
    return 0;
}