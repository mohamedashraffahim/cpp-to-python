// Hi, I'm Mohamed Ashraf Fahim and I'm trying now with my friends to help you to decrease your efforts and time in cpp programming process
// This library is developed to translate the c++ syntax into python syntax and if it's not covering 100% of the functions
// it covers about 85~90 % of them and it also defines some other funtions to an easy way instead
// Anyone can help in developing it just contact me via instagram if you want to help and be a member in the developing team : "https://www.instagram.com/mohamedashraffahim/"

#include <iostream>
#include <fstream>
#include <cstring>
#include <cmath>
// #include <algorithm>
#include <string>
#include "cpptopython.h"

using namespace std;

// using std::cout;
// using std::cin;
// using std::endl;


typedef const char* uint128;
typedef unsigned char uint8;
typedef unsigned short int uint16;
typedef unsigned int uint32;


//This function removes all spaces from the string
string replace(string input)
{

    input.erase(remove(input.begin(), input.end(), ' '), input.end());
    return input;
}



//This function changes all the characters in the string to the lowercase
string lower(string input)
{
    string input_lower;
    int size2;
    size2 = std::size(input);
    for (int i = 0; i < size2; i++)
    {
        input_lower += tolower(input[i]);                           
    }
    input = input_lower;
    return input;
}


//This is a test function for the developers team only
int test(int input)
{
    input += 1;
    cout << input;
    return input;
}

//This function shows the available functions in this library
void functions()
{
    cout << "The available functions are\n1-lower():which changes the characters of the string to the lowercase\n2-replace():removes all spaces from the string\n";
} 
