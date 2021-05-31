#include <iostream>

#include <fstream>
#include <string>

using namespace std;

int main() {  
	
	int big = 0;
    string str;
    
    fstream file("input.txt", fstream::in);
     file >> str;;
    
    
   
   
    
    for (int i = 0; i <=(str.size()/2); i++) {
		for (int j = str.size()-1 ; j >str.size()/2; j--) {
			if (str[i] == str[j]) {
				if (j-i >= big ) {
					cout << str[i] << ' ';
					big = j-i-1;
				}
				
			}
	}}
	cout << big;

    return 0;

}


        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
      
