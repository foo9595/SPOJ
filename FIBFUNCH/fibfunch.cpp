#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
	int test;
	scanf("%d",&test);
	if(test <0 || test > 100)return 0;
	long long int a,b,n,m;
	int z,gt,sum,temp,arr[test];
	for(int i=0;i<test;i++){
		gt=0;
		scanf("%lld%lld%lld%lld",&a,&b,&n,&m);
		if(a < 0 || a > 100000000 || b < 0 || b > 100000000 || n < 1 || n > 100000000 || m < 1 || m > 100000000)return 0;
		sum=a+b;
		temp = b;
		gt += sum;
		for(int j=0;j<n-2;j++){
			gt += sum;
			z = sum;
			sum = sum + temp;
			temp = z;
		}
		arr[i] = gt%m;
	}

	for(int i=0;i<test;i++){
		printf("%d\n",arr[i]);
	}
	return 0;
}