#include <cassert>
#include <iostream>
using std::cout;
using std::endl;

//C++ Preprocessor Stringizing   //ref link:https://www.youtube.com/watch?v=wKWwBlzQuqY&list=PLRwVmtr-pp06gII17UNrzeCGMMHnCPdOk&index=3


//#define PRINT(a) cout << a << endl		//output: 5
//#define PRINT(a) cout << #a << endl			//output: var
#define PRINT(a) cout << #a << " :" << a << endl	//output: var :5	bar :10

void main()
{
	int var = 5;
	int bar = 10;
	PRINT(var);
	//cout << "var" << endl;	//output: var  //Stringizng operator is # which is basically means rapid in "", ex. cout << "var" << endl; is same as cout << #var << endl in #define
	PRINT(bar);
}