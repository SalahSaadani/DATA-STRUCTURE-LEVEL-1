// CORSE 12 - DATA STRUCTURE - STACK SWAP.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stack>
using namespace std;


int main()
{
    stack<int> MyStack1;      // stack container declaration
    stack<int> MyStack2;

    MyStack1.push(10);         // pushing elements into first stack
    MyStack1.push(20);
    MyStack1.push(30);
    MyStack1.push(40);

    MyStack2.push(50);      // pushing elements into 2nd stack
    MyStack2.push(60);
    MyStack2.push(70);
    MyStack2.push(80);

    MyStack1.swap(MyStack2);  // using swap() function to swap elements of stacks

    cout << "MyStack 1 :";       // printing the first stack
    while (!MyStack1.empty())    
    {
        cout << MyStack1.top() << " ";
        MyStack1.pop();
    }

    cout << "\nMyStack 2 :";               // printing the second stack
    while (!MyStack2.empty())
    {
        cout << MyStack2.top() << " ";
        MyStack2.pop();
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
