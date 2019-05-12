/*
 *  file: eps1-3_variablesAndConstants.cpp
 * 
 *  GNU General Public License v3.0 
 * 
 *  author: embedding.chris
 *  e-mail: embedding.chris@gmail.com
 * 
 *  date: 12.05.2019
 *  last change: 12.05.2019
 *
 */

#include <iostream>

// listing3: definition of a Variable

float radius = 3.0;                 // datatype identifier = value;

// listing5: definition of a constant

const float pi = 3.14159265359;     // const datatype identifier = value;

// listing4: circle formulas

float area = pi * radius * radius;
float circumference = 2 * pi * radius;

// listing6: literals

int aNumber = 2;
int aHexValue = 0x10;
char aCharacter = 'C';

// listing7: declarations

int anotherNumber;                  // variable with integer datatype
double aFunction();                 // function with double return value
double aMethod(int i, double d); // function with arguments

// listing8: definitions

int anInt {6};                      // initialization

double aFunction()                  // definition
{
    return -3.5;
};

double aMethod(int i, float d)  // defintion
{
    return i + d;
};

// entry of the program
int main()
{
    std::cout << "radius = " << radius << std::endl;
    std::cout << "pi = " << pi << std::endl;
    std::cout << "area = " << area << std::endl;
    std::cout << "circumference = " << circumference << std::endl;
    std::cout << "aNumber = " << aNumber << std::endl;
    std::cout << "aHexValue = " << aHexValue << std::endl;
    std::cout << "aCharacter = " << aCharacter << std::endl;
    std::cout << "anInt = " << radius << std::endl;
    std::cout << "aFunction = " << aFunction() << std::endl;
    std::cout << "aMethod = " << aMethod(4, pi) << std::endl;
    
    return 0;
}