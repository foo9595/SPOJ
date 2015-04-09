#include <iostream>
#include <stdio.h>
using namespace std;

int main(){

	int test,n;
	scanf("%d",&test);
	int arr[test];
	for(int i=0;i<test;i++){
		arr[i] = 0;
	}
	int sum,temp;
	for(int i=0;i<test;i++){
		scanf("%d",&temp);
		if(temp < 1 || temp > 1000) return 0;
		n = temp;
		int arr1[n];
		int arr2[n];
		for(int i=0;i<n;i++){
			arr1[i] = 0;
		}
		for(int i=0;i<n;i++){
			arr2[i] = 0;
		}

		sum = 0;
		for(int j=0;j<n;j++){
			scanf("%d",&temp);
			if(temp < 0 || temp > 10) return 0;
			arr1[j] = temp;
		}
		for(int j=0;j<n;j++){
			scanf("%d",&temp);
			if(temp < 0 || temp > 10) return 0;
			arr2[j] = temp;
		}
		for(int j=0;j<n;j++){
			sum += arr1[j]*arr2[j];
		}
		arr[i] = sum;
		sum = 0;
	}
	for(int i=0;i<test;i++){
		printf("%d\n", arr[i]);
	}
	return 0;

}