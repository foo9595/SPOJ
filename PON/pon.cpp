#include <iostream>
#include <stdio.h>
using namespace std;
int main(){

	int test,count;
	long unsigned int n;
	scanf("%d",&test);
	int arr[test];
	for(int i=0;i<test;i++){
		scanf("%lu",&n);
		count = 0;
		for(int k=1;k<=n;k++){
			if(n % k == 0){
				count++;
			}
		}
		if(count == 2){
			arr[i] = 1;
		}else{
			arr[i] = 0;
		}
	}
	for(int i=0;i<test;i++){
		if(arr[i] == 1)	printf("YES");
		else printf("NO");
		printf("\n");
	}
	return 0;
}