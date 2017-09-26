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

    serial(): serNum(0){count++;};


    int getCount() {
        return count;
    }

    void showSerial() {

        cout << "serial number is = " << serNum << endl;

    }

    serial setSerial();

};

int serial::count = 0;
// Constants

// Prototypes

// Main Program Program

int main(void) {

    serial alpha;      //objects

    alpha.setSerial();

    alpha.showSerial();



    return 0;
}

// Function Definitions
serial serial::setSerial() {

    serial sn1;
    sn1.serNum = sn1.count;

    return sn1;
}