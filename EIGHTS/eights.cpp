#include <iostream>
#include <stdio.h>
using namespace std;
int main(){
	long long int n;
	int test;
	scanf("%d",&test);
	long long int arr[test];
	for(int i=0;i<test;i++){
		scanf("%lld",&n);
		arr[i] = 192 + 250*(n-1);
	}
	for(int i=0;i<test;i++){
		printf("%lld\n", arr[i]);
	}	
	return 0;
}