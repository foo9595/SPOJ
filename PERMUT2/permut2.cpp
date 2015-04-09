#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
	int test=0,num,index,flag,op[100000];
	while(1){
		flag = 0;
		scanf("%d",&num);
		if(num == 0)break;
		int arr1[num];
		int arr2[num];
		for(int i=0;i<num;i++){
			scanf("%d",&arr1[i]);
		}
		for(int i=1;i<=num;i++){
			arr2[arr1[i-1] - 1] = i;
		}
		for(int i=0;i<num;i++){
			if(arr1[i] != arr2[i]){
				flag = 1;
				break;
			}
		}
		if(flag == 1){
			op[test++] = 0;
		}else{
			op[test++] = 1;
		}
	}
	for(int i=0;i<test;i++){
		if(op[i] == 1){
			printf("ambiguous\n");
		}else{
			printf("not ambiguous\n");
		}
	}

	return 0;
}