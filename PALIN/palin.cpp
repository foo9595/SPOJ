#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
	int test;
	long long int num,reverse,temp,count;
	int rem;
	scanf("%d",&test);
	long long int arr[test],arr2[test];
	for(int i=0;i<test;i++){
		scanf("%lld",&arr2[i]);
	}

	for(int i=0;i<test;i++){
		count = arr2[i] + 1;
		while(1){
			reverse=0;
			temp = count;
			while(temp!=0){
				rem = temp%10;
				reverse = reverse*10 + rem;
				temp /= 10;
			}

			if(reverse == count){
				arr[i] = count;
				break;
			}
			count = count + 1;
		}
		printf("%lld\n", arr[i]);

	}

	return 0;
}