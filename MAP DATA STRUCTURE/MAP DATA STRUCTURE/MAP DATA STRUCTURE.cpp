// MAP DATA STRUCTURE.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <map>
using namespace std;

int main()
{
    // Declare a map with string keys and int values
    map<string, int> studentGrades;


    // Inserting grades for three students
    studentGrades["Ali"] = 77;     // Assigning a grade of 77 to the student "Ali"
    studentGrades["Ahmed"] = 85;   // Assigning a grade of 85 to the student "Ahmed"
    studentGrades["Fadi"] = 95;    // Assigning a grade of 95 to the student "Fadi"


    // Printing all map values
    cout << "\nPrinting all map values..\n\n";

    // Iterating over the map
    for (const auto& pair : studentGrades) {
        cout << "Student: " << pair.first << ", Grade: " << pair.second << endl;
    }

    cout << "\nFinfing Fadi's grade in the map..\n";
    // Finding the grade for a specific student
    string studentName = "Fadi";
    if (studentGrades.find(studentName) != studentGrades.end())
    {
        cout << studentName << "'s grade: " << studentGrades[studentName] << endl;
    }
    else 
    {
        cout << "Grade not found for " << studentName << endl;
    }

    cout << "\nFinfing Omar's grade in the map..\n";
    // Finding the grade for a specific student
    studentName = "Omar";
    if (studentGrades.find(studentName) != studentGrades.end())
    {
        cout << studentName << "'s grade: " << studentGrades[studentName] << endl;
    }
    else 
    {
        cout << "Grade not found for " << studentName << endl;
    }


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
