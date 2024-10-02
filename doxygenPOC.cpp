/*!
 *  \brief     doxygenPOC
 *  \author    marco v spengen
 *  \version   0.2
 *  \date      30-9-2024
 *  \warning   Improper use can crash your application
 */
#include <iostream>
#include "Header.hpp"
/**
* this method prints hello world in a loop
* @param number the amount of times it loops
*/
void printInLoop(int number)
{
    for (int i = 0; i <= number; i++)
    {
        std::cout << "Hello World!\n";
    }
}
/** this method prints the string that is passed in
* @param stringToPrint, the string to print
*/
void printString(std::string stringToPrint)
{
    std::cout << stringToPrint + "\n";
}
/** this method added up two numbers
*   /returns a+b added up
 *  @param a, the first int of the expression
 *  @param b, the second int of the expression
 */
int addTwoNumbers(int a, int b)
{
    return a + b;
}

int main()
{
    printInLoop(15);
    printString("test");
    result = std::to_string(addTwoNumbers(1,2));
    std::cout << "result is " + result;
}