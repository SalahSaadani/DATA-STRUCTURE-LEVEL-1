// CORSE 12 - DATA S - STL STACK EXEMPLE.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stack>
using namespace std;


int main()
{
    stack<int> stkNumbers;

    stkNumbers.push(10);
    stkNumbers.push(20);
    stkNumbers.push(30);
    stkNumbers.push(40);
    stkNumbers.push(50);


    cout << "Count = " << stkNumbers.size() << endl;

    cout << "\nNumbers are : \n";
    while (!stkNumbers.empty())
    {
        cout << stkNumbers.top() << endl;  // print top (last) element

        stkNumbers.pop();       // pop top element from stack
       
    }
    system("pause>0");
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
