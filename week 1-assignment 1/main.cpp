//
//  main.cpp
//  cis 25 classes assignement 1
//
//  Created by Macbook Air on 21/11/2025.
//

#include <iostream>
#include <fstream>
using namespace std;
class item{
public:
    string name;
    int quantity;
    
    void saveToFile(){
        ofstream MyFile("items.txt");
        if (MyFile.is_open()){
            MyFile << name << "," << quantity<< endl;
            MyFile.close();
            cout<< "Item saved to file. " <<endl;
        }else{
            cout<< "unable to save to file! "<< endl;
            
        }
        }
    void loadFromFile(){
        ifstream MyFile("items.txt");
        if (MyFile.is_open()){
            string line;
            while(getline(MyFile, line)){
                cout<< "File Content: " << line << endl;
            }
        }
            else{
                cout<< "Unable to load open the file for reading. " << endl;
            }
        }
};

int main(){
    item tool;
    tool.name= "Screwdriver";
    tool.quantity = 10;
    
    tool.saveToFile();
    tool.loadFromFile();
    return 0;
}
