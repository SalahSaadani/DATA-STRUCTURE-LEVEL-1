// SINGLY LINKED LIST OPERATION - INSERT AFTER.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

// Create a node
class Node
{
public:
    int value;
    Node* next;
};

void InsertAtBeginning(Node*& head, int value)
{
    // Allocate memory to a node
    Node* new_node = new Node();

    // insert the data
    new_node->value = value;
    new_node->next = head;

    // Move head to new node
    head = new_node;

}

Node* Find(Node* head, int Value)
{

    while (head != NULL)
    {

        if (head->value == Value)
            return head;

        head = head->next;
    }

    return NULL;

}

// Insert a node after a node
void InsertAfter(Node* Prev_node, int Value)
{

    if (Prev_node == NULL)
    {
        cout << "the given Previous node cannot be NULL";
        return;
    }

    Node* new_node = new Node();
    new_node->value = Value;
    new_node->next = Prev_node->next;
    Prev_node->next = new_node;
}

// Print the linked list
void PrintList(Node* head)
{
    cout << "\n";
    while (head != NULL)
    {
        cout << head->value << " ";
        head = head->next;
    }
}
int main()
{
    Node* head = NULL;
    InsertAtBeginning(head, 1);
    InsertAtBeginning(head, 2);
    InsertAtBeginning(head, 3);
    InsertAtBeginning(head, 4);
    InsertAtBeginning(head, 5);

    PrintList(head);
    Node* N1 = NULL;

    N1 = Find(head, 2);

    InsertAfter(N1, 500);

    PrintList(head);

    /* N1 = Find(head, 500);
     InsertAfter(N1, 600);
     PrintList(head);*/

    system("pause>0");

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
