// File: barcelona_hw3_task2
// Created by Jaxon Greenwood, Carson Tyler on 9/26/2017 for CS1410.
// Copyright (c) 2017 WSU
//
#include <iostream>
using namespace std;

class serial {
private:
    int serNum;
    static int count;

public:
    serial(): serNum(0){count++;}


    int getCount() {
        return count;
    }

};

int serial::count = 0;
// Constants

// Prototypes

void ShowSerial(serial sn1);

// Main Program Program

int main() {

    serial alpha;      //make some objects
    ShowSerial(alpha);

    serial beta;
    ShowSerial(beta);

    serial gamma;
    ShowSerial(gamma);

    return 0;

}

// Function Definitions
void ShowSerial(serial sn1) {

    cout << "I am object number " << sn1.getCount() << endl;

}