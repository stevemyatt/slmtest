//============================================================================
// Name        : gitTest.cpp
// Author      : Steve Myatt
// Version     :
// Copyright   : All rights reserved
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

#include "CTestA.h"
#include "CTestB.h"

int main() {
	// cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	slm_a::CTestA ca ;
	ca.run1();
	ca.run3();
	slm_b::CTestB cb ;
	cb.run2();
	return 0;
}
