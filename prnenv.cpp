///PRNENV.CPP///
// Lucas McIntosh //
// 19/01/2013 //
/*
 Searches the system environment variables for the specified argument
 passed from the cl and prints out it's value.
*/

#include <iostream>
#include <cstring>

using namespace std;

int main(int argc, char* argv[], char* env[]){
	
	char* pch = NULL;
	char* pch2 = NULL;
	char* result = NULL;
	int x=0;
	char str[strlen(argv[1]+1)];
	
	if(argc>1){
		for(x=0;argv[1][x]!=0;str[x]=toupper(argv[1][x]),x++);
		str[x]=0;
		
		for(x=0;env[x]!=0 && pch==NULL;pch=strstr(env[x], str), x++);
			
		if(pch){
			result = new char[strlen(env[--x])];
			strcpy(result, env[x])
			pch2 = strtok (result, "=");
			if(strlen(pch2) == strlen(str))
				cout <<  env[x] << endl;
			else{
				cout << "That environmental variable is not found." << endl;
				cout << "Did you mean:" << endl;
				for(x=0;env[x]!=0;x++){
					pch=strstr(env[x], str);
					if(pch){
						pch2 = strtok (env[x], "=");
						cout << pch << endl;
					}
				}
			} 
		}
	}
	else
		cout << "Error: requires a search parameter" << endl;
	
	return 0;
}