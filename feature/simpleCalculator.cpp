#include<iostream>

using namespace std;


int main(){

int first = 0, second = 0, option;
cout << "Enter first operand: ";
cin >> first;

cout << "\n";

cout << "Enter second number: " ;
cin >> second;

cout << "\nChoose the operation\n";
cout << "1 for add, 2 for substract, 3 for multiply, 4 for divison\n";
cin >> option;

switch(option){

case 1:
cout << "Total: " <<  first + second <<"\n";
break;

case 2:
cout << "Total: " << first - second << "\n";
break;

case 3:
cout << "Total: " << first * second << "\n";
break;

case 4:
cout << "Total: " << first / second << "\n";
break;

 }



return 0;
}
