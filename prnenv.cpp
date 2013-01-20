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
	
	if(argc>1){ // Initial test for required argument
		// Make the search string uppercase
		for(x=0;argv[1][x]!=0;str[x]=toupper(argv[1][x]),x++);
		str[x]=0;
		
		// Checks if the search pattern is found within the environment
		for(x=0;env[x]!=0 && pch==NULL;pch=strstr(env[x], str), x++);
			
		if(pch){ // Substring found block
		/*  If the search is found as a substring,
			that environmental variable is copied and tokenised.
			*/
			result = new char[strlen(env[--x])];
			strcpy(result, env[x]);
			pch2 = strtok (result, "=");
			
			// Prints out the environmental variable if the search string is a complete match.
			if(strlen(pch2) == strlen(str))
				cout <<  env[x] << endl;
			else{
			/* If the search is not a complete match,
			   then it prints out a list of partial matches.
				*/
				cout << "That environmental variable is not found." << endl;
				cout << "Did you mean:" << endl;
				for(x=0;env[x]!=0;x++){ 
					pch=strstr(env[x], str);
					if(pch){
						pc2 = NULL;
						pch2 = strtok (env[x], "=");
						if(pch2)
							cout << pch << endl;
					} // End of if
				} // End of for
			} // End of else
			delete [] result;
		} // End of substring block
	} // End of initial test
	else
		cout << "Error: requires a search parameter" << endl;
	
	return 0;
} // End of main