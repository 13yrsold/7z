/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;
using String = string;
using Int = int;
using Boolean = bool;

String SetAttribute(String Name, Boolean Value) {
	return Name + to_string(Value);
}

Int main() {
	String SetName = "mawborn";
	Boolean IsName = true;
	
	String GetAttribute = SetAttribute(SetName, IsName);
	
	cout << GetAttribute << endl;

	return EXIT_SUCCESS;
}
