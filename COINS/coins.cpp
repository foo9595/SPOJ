#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
	long long int n,ans;
	int a[1000000];
	int i=0;
	while(scanf("%lld",&n)!=EOF) {
		ans = n/2 + n/3 + n/4 ;
		if(ans < n){
			a[i] = n;
		}else{
			a[i] = ans; 
		}
		i++;
		printf("%d\n", a[i-1]);
	}
	return 0;
}