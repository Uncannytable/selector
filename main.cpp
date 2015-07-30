/*
 * main.cpp
 *
 *  Created on: 30/07/2015
 *      Author: vitor
 */

#include <iostream>
#include "md5.h"

using std::cout; using std::endl;

int main(int argc, char *argv[])
{
    cout << "md5 of 'grape': " << md5("grape") << endl;
    return 0;
}


