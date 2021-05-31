#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int fqnc(long long int n){
	int k=0, m = n;
	while(n != 0) {
		k++;
		n= n/10;
	}
	for ( int i = 0 ; i < k-2; i++) {
		m = m/10;
	}
		
    return m;
}

int fwnc(long long int n){
    if (n%100==0) {
        n = 0;
    } else {
    n = n%100;
    }
    return n;
}

int main()
{
    int a, b, count=0, big=-999999999;
    cin >> a >> b;
    
    for (int i=a; i<=b; i++){
		
		if ((fqnc(i)-fwnc(i)) == 0 ) {
			continue;
		} else {
        if (i % (fqnc(i)-fwnc(i)) == 0 ) {
            count++;
            if (i>=big) {
               big = i;
            }
         }
        }
   }
   
   if ( big == -999999999) {
	   big = 0; } 
    
    cout << count << " " << big;

    return 0;
}
