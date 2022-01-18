// While Loops.cpp
//  I CAN write C++ WHILE LOOPS and use them to solve problems

#include <iostream>
using namespace std;

int main()
{
    //Syntax: an if-statment, but use "while"
    //Loop repeats until boolean is false

    //Example 1: count from 1 to 10
    cout << "Count to 10: ";
    int i = 1;

    while (i <= 10) {
        cout << i << " ";
        i++; //shortcut for i = i + 1
    } //repeat

    //Example 2: count from 25 to 1
    cout << endl << "Count down from 25: ";
    i = 25;

    while (i >= 1) {
        cout << i << " ";
        i--; //shortcut for i = i - 1
    }

    //Example 3: Even or Odd
    cout << endl << endl << "Enter a number (-1 to stop): " << endl;
    int num = 0;

    while (num != -1) {
        cin >> num;

        if (num % 2 == 0) {
            cout << "EVEN" << endl;
        }
        else {
            cout << "ODD" << endl;
        }
    }

    system("pause");
}

