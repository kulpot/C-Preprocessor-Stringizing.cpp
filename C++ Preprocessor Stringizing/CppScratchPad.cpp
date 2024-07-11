#include <cassert>
#include <iostream>
using std::cout;
using std::endl;

//C++ Preprocessor Stringizing   //ref link:https://www.youtube.com/watch?v=wKWwBlzQuqY&list=PLRwVmtr-pp06gII17UNrzeCGMMHnCPdOk&index=3
//Stringizng operator is # which is basically means rapid in "", ex. cout << "var" << endl; is same as cout << #var << endl in #define

//#define PRINT(a) cout << a << endl		//output: 5
#define PRINT(a) cout << #a << endl			//output: var

void main()
{
	int var = 5;
	PRINT(var);
	cout << "var" << endl;	//output: var
}