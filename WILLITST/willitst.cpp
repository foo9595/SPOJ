#include <iostream>
#include <stdio.h>
using namespace std;

bool isPowerOfTwo(long long int n){
	if (n == 0)
		return 1;
	while (n != 1){
		if (n%2 != 0)
			return 0;
		n = n/2;
	}
	return 1;
}
 
int main(){
	long long int n;
	scanf("%lld",&n);
  	isPowerOfTwo(n)? printf("TAK\n"): printf("NIE\n");
}