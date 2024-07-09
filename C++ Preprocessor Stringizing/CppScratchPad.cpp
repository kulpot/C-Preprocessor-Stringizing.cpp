#include <cassert>
#include <iostream>
using std::cout;
using std::endl;

//C++ Preprocessor Stringizing   //ref link:https://www.youtube.com/watch?v=wKWwBlzQuqY&list=PLRwVmtr-pp06gII17UNrzeCGMMHnCPdOk&index=3

//#define PRINT(a) cout << a << endl
#define PRINT(a) cout << #"a" << endl

void main()
{
	int var = 5;
	PRINT(var);
}