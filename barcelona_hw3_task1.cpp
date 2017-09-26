// File: barcelona_hw3_task1
// Created by Jaxon Greenwood, Carson Tyler on 9/26/2017 for CS1410.
// Copyright (c) 2017 WSU
#include <iostream>
using namespace std;

// Class

class Date
{
private:
    int month;
    int day;
    int year;
    char c;

public:
    void set_date(int m, int d, int y, char a)
    {
        month = m;
        day = d;
        year = y;
        c = a;

    }
    void get_date()
    {
        cin >> month >> c >> day >> c >> year;
    }
    void show_date()
    {
        cout << month << "/" << day << "/" << year;
    }
};
// Prototypes

// Main Program Program

int main()
{
    Date d1, d2;

    cout << "Enter a date (format 12/31/99): ";
    d1.get_date();

    cout << "\nEnter another date: ";
    d2.get_date();

    cout << "\n\nDate1 = ";
    d1.show_date();
    cout << "\n\nDate2 = ";
    d2.show_date();
    return 0;
}

// Function Definitions