///DIV.CPP///
// Lucas McIntosh //
// 16/01/2013 //
// Divides two numbers passed into the program from the cl and prints out the sum.
#include <iostream>
#include <cstdlib>

#define sum(x,y) ((x)/(y))

using namespace std
int main(int argc, char* argv[]){
	int num1;
	int num2;
	int result;
	if(argc > 1){
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		result = sum(num1,num2);
		cout << result<< endl;
	}
	else
		cout << "Error: Arguments required";
	return 0;
}
	