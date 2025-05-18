// CORSE 12 - DATA STRUCTURE - SWAP QUEUE.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <queue>
#include <iostream>
using namespace std;

int main()
{
    // queue container declaration
    queue<int> MyQueue1;
    queue<int> MyQueue2;

    // pushing elements into first queue
    MyQueue1.push(10);
    MyQueue1.push(20);
    MyQueue1.push(30);
    MyQueue1.push(40);

    // pushing elements into 2nd queue
    MyQueue2.push(50);
    MyQueue2.push(60);
    MyQueue2.push(70);
    MyQueue2.push(80);

    // using swap() function to swap elements of queues
    MyQueue1.swap(MyQueue2);

    // printing the first queue
    cout << "MyQueue1 = ";
    while (!MyQueue1.empty()) {
        cout << MyQueue1.front() << " ";
        MyQueue1.pop();
    }

    // printing the second queue
    cout << endl << "MyQueue2 = ";
    while (!MyQueue2.empty()) {
        cout << MyQueue2.front() << " ";
        MyQueue2.pop();
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
