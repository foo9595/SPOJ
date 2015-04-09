#include <iostream>
#include <stdio.h>
using namespace std;
int main(){
	int test,n,x;
	long long int sum;
	scanf("%d",&test);
	int arr[test];
	for(int i=0;i<test;i++){
		scanf("%d",&n);
		sum = 0;
		for(int j=0;j<n;j++){
			scanf("%d",&x);
			sum+=x;
		}
		if(sum%n == 0){
			arr[i]=1;
		}else{
			arr[i]=0;
		}
	}
	for(int i=0;i<test;i++){
		if(arr[i]==1)printf("YES");
		else printf("NO");
		printf("\n");
	}
	return 0;
}