//  main.cpp
//  Module 7 - Pointers and Memory
//

#include <iostream>
#include <string>
#include <iomanip>
#include <sstream>

struct Item {
    std::string name;
    int id;
};

// Binary search by ID
int binarySearch(Item* items, int size, int targetId) {
    int left = 0;
    int right = size - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (items[mid].id == targetId) {
            return mid;
        } else if (items[mid].id < targetId) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return -1;  // not found
}

// Create sorted names (Item001, Item002, etc.)
std::string makeName(int id) {
    std::ostringstream oss;
    oss << "Item" << std::setw(3) << std::setfill('0') << id;
    return oss.str();
}

int main() {
    const int SIZE = 100;

    // Use new to dynamically allocate an array of Items
    Item* items = new Item[SIZE];

    // Populate sorted data (sorted by name because of zero-padded numbers)
    for (int i = 0; i < SIZE; ++i) {
        items[i].id = i + 1;
        items[i].name = makeName(i + 1);
    }

    int searchId;
    std::cout << "Enter an ID to search for (1–" << SIZE << "): ";
    std::cin >> searchId;

    int result = binarySearch(items, SIZE, searchId);

    if (result != -1) {
        std::cout << "Item found:\n";
        std::cout << "ID: " << items[result].id << "\n";
        std::cout << "Name: " << items[result].name << "\n";
    } else {
        std::cout << "Item not found.\n";
    }

    // Free the memory using delete[]
    delete[] items;

    return 0;
}
