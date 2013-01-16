#include <iostream>
#include <cstdlib>

int main(int argc, char* argv[]){
	int num1;
	int num2;
	num1 = std::atoi(argv[1]);
	num2 = std::atoi(argv[2]);
	
	std::cout << num1 + num2 << std::endl;
}
	