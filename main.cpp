/*
 * main.cpp
 *
 *  Created on: 30/07/2015
 *      Author: vitor
 */

#include <iostream>
#include <cstdio>
#include "md5.h"
#include "BufferToggle.h"

using std::cout; using std::endl;

int main(int argc, char *argv[]){
    BufferToggle bt;
    bt.off();
    char n;
    n = std::getchar();
    cout << n << endl;
    return 0;
}


