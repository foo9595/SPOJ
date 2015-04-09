#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
	int test,count,flag,friends;
	long long int sum,temp,stamps;
	scanf("%d",&test);
	int op[test];
	for(int i=0;i<test;i++){
		scanf("%lld%d",&stamps,&friends);
		if(stamps > 1000000)return 0;
		long long int arr1[friends];
		for(int j=0;j<friends;j++){
			scanf("%lld",&arr1[j]);
			if(arr1[j] > 10000)return 0;
		}
		for(int j=0;j<friends;j++){
			for(int k=0;k<friends;k++){
				if(arr1[j] < arr1[k]){
					temp = arr1[k];
					arr1[k] = arr1[j];
					arr1[j] = temp;
				}
			}
		}
		sum = 0;
		count = 0;
		flag = 0;
		for(int j=friends-1;j>=0;j--){
			sum += arr1[j];
			count++;
			if(sum >= stamps){
				flag = 1;
				break;
			}
		}
		if(count != friends || flag == 1){
			op[i] = count;
		}else{
			op[i] = 0;
		}

	}
	for(int i=0;i<test;i++){
		printf("Scenario #%d:\n",i+1 );
		if(op[i] == 0){
			printf("impossible\n\n");
		}else{
			printf("%d\n\n", op[i]);
		}
	}

	return 0;
}