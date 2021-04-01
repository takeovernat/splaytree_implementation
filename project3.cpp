#include <iostream>
#include<string>
#include "bstSplay.h"

using namespace std;

void menu(){
        cout << "\nEnter options 1 - 4: \n";
        cout << "(1) insert integer into tree\n";
        cout << "(2) remove integer from tree\n";
        cout << "(3) print tree traversals\n";
        cout << "(4) exit program\n";
}

int main(){
BinarySearchTree <int>bstint;
BinarySearchTree <float>bstfloat;
BinarySearchTree <char>bstchar;
string datatype;

cout << "What slpay tree data type (int, float, char)? ";
getline(cin, datatype);

int choice, key;
float keyf;
char keyc;
if(datatype == "int"){
    
    do{
        menu();
        cout << "> ";
        cin >> choice;

            if(choice == 1){
                cout << "\nenter integer key to insert: ";
                cin >> key;
                bstint.insert(key);
                cout << "insert (" << key << ") complete.\n";
            }
            else if(choice == 2){
                cout << "\nenter integer key to remove: ";
                cin >> key;
		//bstint.find(key);
                bstint.remove(key);
                
            }
            else if(choice == 3){
                cout << endl;
                bstint.printTree();
            }
            else if(choice == 4){
                cout << "terminating...\n";
            }
            
            else if(choice == 5){
                cout << "\nenter integer key to find: ";
                cin >> key;
             bstint.find(key);    
            }
            else{
                cout << "\ninvalid choice, please try again.\n";
            }
    }while(choice != 4);

}// if

else if(datatype == "char"){
    do{
        menu();
        cout << "> ";
        cin >> choice;

            if(choice == 1){
                cout << "\nenter character key to insert: ";
                cin >> keyc; 
                bstchar.insert(keyc);
                cout << "insert (" << keyc << ") complete.\n";
            }
            else if(choice == 2){
                cout << "\nenter character key to remove: ";
                cin >> keyc; 
                bstchar.remove(keyc);
                
            }
            else if(choice == 3){
                cout << endl;
                bstchar.printTree();
            }
            else if(choice == 4){
                cout << "terminating...\n";
            } 
            else{
                cout << "\ninvalid choice, please try again.\n";
            }
    }while(choice != 4);
}

else if(datatype == "float"){
        
    do{
        menu();
        cout << "> ";
        cin >> choice;

            if(choice == 1){
                cout << "\nenter floating-point number key to insert: ";
                cin >> keyf;
                bstfloat.insert(keyf);
                cout << "insert (" << keyf << ") complete.\n";
            }
            else if(choice == 2){
                cout << "\nenter floating-point number key to remove: ";
                cin >> keyf;
                bstfloat.remove(keyf);
                
            }
            else if(choice == 3){
                cout << endl;
                bstfloat.printTree();
                
            }
            else if(choice == 4){
                cout << "terminating...\n";
            }
            else{
                cout << "\ninvalid choice, please try again.\n";
            }
    }while(choice != 4);

}
else{
    cout << "unkown data type (" << datatype << ") program terminating...\n";
}

    return 0;
}
