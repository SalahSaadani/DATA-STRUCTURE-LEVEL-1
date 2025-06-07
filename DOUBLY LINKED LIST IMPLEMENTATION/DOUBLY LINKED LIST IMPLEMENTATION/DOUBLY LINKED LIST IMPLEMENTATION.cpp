// DOUBLY LINKED LIST IMPLEMENTATION.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

// Creating a node
class Node
{
public:
    int value;
    Node* next;
    Node* prev;
};

int main()
{
    Node* head;

    Node* Node1 = NULL;
    Node* Node2 = NULL;
    Node* Node3 = NULL;

    // allocate 3 nodes in the heap
    Node1 = new Node();
    Node2 = new Node();
    Node3 = new Node();

    // Assign value values
    Node1->value = 10;
    Node2->value = 28;
    Node3->value = 33;

    // Connect nodes
    Node1->next = Node2;
    Node1->prev = NULL;

    Node2->next = Node3;
    Node2->prev = Node1;

    Node3->next = NULL;
    Node3->prev = Node2;

    // print the linked list value
    head = Node1;

    while (head != NULL) 
    {
        cout << head->value << endl;
        head = head->next;
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
