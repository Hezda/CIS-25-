//
//  main.cpp
//  week 7 A
//
//  Created by Macbook Air on 05/12/2025.
//

#include <iostream>
using namespace std;

int main() {

    // Part 1: Simple menu using if statements
    int choice;

    cout << "1. Add Item\n2. View Items\n3. Exit\n";
    cout << "Choose an option: ";
    cin >> choice;

    if (choice == 1)
        cout << "Item added!\n";
    else if (choice == 2)
        cout << "Displaying items...\n";
    else if (choice == 3)
        cout << "Exiting...\n";
    else
        cout << "Invalid option.\n";

    cout << endl;

    // Part 2: Find the largest of three numbers using nested if statements
    float n1, n2, n3;

    cout << "Enter three numbers: ";
    cin >> n1 >> n2 >> n3;

    if (n1 >= n2) {
        if (n1 >= n3)
            cout << "Largest number: " << n1;
        else
            cout << "Largest number: " << n3;
    } else {
        if (n2 >= n3)
            cout << "Largest number: " << n2;
        else
            cout << "Largest number: " << n3;
    }

    return 0;
}
