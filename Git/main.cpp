//
//  main.cpp
//  Git
//
//  Created by Shannon Smith on 9/1/16.
//  Copyright © 2016 Shannon Smith. All rights reserved.
//

#include <iostream>
using namespace std;

int addTwoInts(int, int);
int main(int argc, const char * argv[]) {
    // insert code here...
    int number1;
    int number2;
    
    cout << "enter 1 number\n";
    cin >> number1;
    cout << "enter 2 number\n";
    cin >> number2;
    
    
    cout << number1 << " + " << number2 << " = " << addTwoInts(number1, number2) << endl;
    
    
    
    std::cout << "Hello, World!\n";
    return 0;
}


int addTwoInts( int int1, int int2){
    return (int1 + int2);
}//add2