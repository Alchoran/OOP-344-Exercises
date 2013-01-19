///PRNENV.CPP///
// Lucas McIntosh //
// 19/01/2013 //
// Searches the system environment variables for the specified argument passed from the cl

#include <iostream>
#include <cstring>

using namespace std;

int main(int argc, char* argv[], char* env[]){
	char* pch = NULL;
	int x=0;
	for(x=0;env[x]!=0 && pch==NULL ; x++){
		pch=strstr(str, argv[1]);
	}
	if(pch)
		cout <<  env[x] << endl;
	else
		cout << "not found" << endl;
}