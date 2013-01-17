///SUB.CPP///
// Lucas McIntosh //
// 16/01/2013 //
// Subtracts two numbers passed into the program from the cl and prints out the sum.
#include <iostream>
#include <cstdlib>
#include <cctype>

#define sum(x,y) ((x)-(y))

using namespace std;
int main(int argc, char* argv[]){
	double num1;
	double num2;
	double result;
	bool errFlag = false;
	
	if(argc > 1){
		
		if(isdigit(argv[1][0]))
			num1 = atoi(argv[1]);
		else
			errFlag = true;
		
		if(isdigit(argv[2][0]))
			num2 = atoi(argv[2]);
		else
			errFlag = true;
		
		if(errFlag)
			cout << "Error: Invalid argument(s) detected" << endl;
		else{
			result = sum(num1,num2);
			cout << result<< endl;
		}
	}
	else
		cout << "Error: Arguments required" << endl;
	return 0;
}
	