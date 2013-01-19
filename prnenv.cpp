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
	char str[strlen(argv[1]+1]);
	
	for(x=0;argv[1][x]!=0;str[x]=toupper(argv[1][x]),x++);
	str[x]=0;
	
	for(x=0;env[x]!=0 && pch==NULL ; x++){
		pch=strstr(env[x], str);
	}
	if(pch)
		cout <<  env[x-1] << endl;
	else
		cout << "not found" << endl;
}