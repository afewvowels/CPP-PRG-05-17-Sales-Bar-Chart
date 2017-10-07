//
//  main.cpp
//  PRG-5-17-Sales-Bar-Chart
//
//  Created by Keith Smith on 10/7/17.
//  Copyright © 2017 Keith Smith. All rights reserved.
//
//
//  Write a program that asks the user to enter today's sales for five stores. The program
//  should then display a bar graph comparing each store's sales. Create each bar in the bar
//  graph by displaying a row of asterisks. Each asterisk should represent $100 of sales.
//
//  Here is an example of the program's output:
//
//  Enter today's sales for store 1: 1000 ENTER
//  Enter today's sales for store 2: 1200 ENTER
//  Enter today's sales for store 3: 1800 ENTER
//  Enter today's sales for store 4: 800 ENTER
//  Enter today's sales for store 5: 1900 ENTER
//
//  SALES BAR CHART
//  (Each * = $100)
//  Store 1: **********
//  Store 2: ************
//  Store 3: ********************
//  Store 4: ********
//  Store 5: *********************

#include <iostream>

using namespace std;

int main()
{
    int intStore1,
        intStore2,
        intStore3,
        intStore4,
        intStore5;
    
    cout << "Please enter the sales for Store #1 in $100 increments:\n";
    cin >> intStore1;
    
    while(!cin || intStore1 < 0 || intStore1 > 10000)
    {
        cout << "Please enter a value greater than $0:\n";
        cin.clear();
        cin.ignore();
        cin >> intStore1;
    }
    
    cout << "Please enter the sales for Store #1 in $100 increments:\n";
    cin >> intStore2;
    
    while(!cin || intStore2 < 0 || intStore2 > 10000)
    {
        cout << "Please enter a value greater than $0:\n";
        cin.clear();
        cin.ignore();
        cin >> intStore2;
    }
    
    cout << "Please enter the sales for Store #1 in $100 increments:\n";
    cin >> intStore3;
    
    while(!cin || intStore3 < 0 || intStore3 > 10000)
    {
        cout << "Please enter a value greater than $0:\n";
        cin.clear();
        cin.ignore();
        cin >> intStore3;
    }
    
    cout << "Please enter the sales for Store #1 in $100 increments:\n";
    cin >> intStore4;
    
    while(!cin || intStore4 < 0 || intStore4 > 10000)
    {
        cout << "Please enter a value greater than $0:\n";
        cin.clear();
        cin.ignore();
        cin >> intStore4;
    }
    
    cout << "Please enter the sales for Store #1 in $100 increments:\n";
    cin >> intStore5;
    
    while(!cin || intStore5 < 0 || intStore5 > 10000)
    {
        cout << "Please enter a value greater than $0:\n";
        cin.clear();
        cin.ignore();
        cin >> intStore5;
    }
    
    cout << "SALES BAR CHART" << endl;
    cout << "Each \'*\' denotes $100 in sales" << endl;
    
    cout << "Store 1: ";
    for(int i = 0 ; i < intStore1 ; i += 100)
    {
        cout << "*";
    }
    cout << endl;
    
    cout << "Store 2: ";
    for(int i = 0 ; i < intStore2 ; i += 100)
    {
        cout << "*";
    }
    cout << endl;
    
    cout << "Store 3: ";
    for(int i = 0 ; i < intStore3 ; i += 100)
    {
        cout << "*";
    }
    cout << endl;
    
    cout << "Store 4: ";
    for(int i = 0 ; i < intStore4 ; i += 100)
    {
        cout << "*";
    }
    cout << endl;
    
    cout << "Store 5: ";
    for(int i = 0 ; i < intStore5 ; i += 100)
    {
        cout << "*";
    }
    cout << endl;
    
    return 0;
}

