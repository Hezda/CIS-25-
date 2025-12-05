//
//  main.cpp
//  cis 25 classes assignement 2
//
//  Created by Macbook Air on 21/11/2025.
//

#include <iostream>
#include <string>
using namespace std;

class Product{
private:
    int id;
    string name;
    float price;
public:
    Product(int productId, const string& productName, float productPrice)
    : id(productId), name(productName), price(productPrice){
        cout << "Constructor called" << endl;
    }
    ~Product(){
        cout<< "Destructor called" <<endl;
    }
    void printDetails(){
        cout << "ID: "<< id << ", Name: "<< name<< ", Price: $" << price << endl;
        
    }
};

int main(){
    Product p(101, "Notebook", 4.99f);
    p.printDetails();
    
    return 0;
}
