#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
	long long int num;
	int index,count,old_sum,sum,test;
	scanf("%d",&test);
	if(test > 20)return 0;
	long long int arr1[test];
	int numr[test],denr[test];
	for(int i=0;i<test;i++){
		sum = count = index = 0;
		scanf("%lld",&num);
		if(num < 1 || num > 10000000)return 0;
		arr1[i] = num;
		for(int j=1;j<=10000000;j++){
			sum += j;
			if(sum >= num){
				count = j;
				old_sum = sum - j;
				break;
			}
		}
		if( count % 2 == 0){
			index = num - old_sum;
		}else{
			index = count - (num - old_sum) + 1;
		}
		numr[i] = index;
		denr[i] = count + 1 - index;
	}
	
	for(int i=0;i<test;i++){
		printf("TERM %lld IS %d/%d\n", arr1[i], numr[i], denr[i]);
	}

	return 0;
}