#include <cstdarg>
#include <iostream>

#define ADD 1
#define SUB 2
#define MUL 3
#define DIV 4

#define make(t, v, n) t v = n

double perform_operation(int, int, ...);

using namespace std;

int main(int argc, char* argv[]){
	int x;
	int n=arg-2;
	double num1, num2, num3, num4, num5, num6, num7, num8, num9, num10;
	num1=num2=num3=num4=num5=num6=num7=num8=num9=num10=0.0;
	if (argc>3){
		switch (n){
			case 10:
				num10=atof(argv[11]);
			case 9:
				num9==atof(argv[10]);
			case 8:
				num8=atof(argv[9]);
			case 7:
				num7=atof(argv[8]);
			case 6:
				num6=atof(argv[7]);
			case 5:
				num5=atof(argv[6]);
			case 4:
				num4=atof(argv[5]);
			case 3:
				num3=atof(argv[4]);
			case 2:
				num2=atof(argv[3]);
			case 1:
				num1=atof(argv[2]);
				break;
		}
	}
	else
		cout << "Error: requires atleast 3 parametres.\n" << "OP#, NUM1, NUM2" << endl;
	return 0;
}

double perform_operation(int n, int op, ...){
	double result = 0.0;
	va_list args;
	va_start(args, op);
	if(op == ADD){
	}
	else if(op==SUB){
	}
	else if(op==MUL){
	}
	else if(op==DIV){
	}
}
		