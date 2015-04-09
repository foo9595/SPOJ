#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
	float num,sum=0.00;
	int arr[10000];
	int z=0,count=0,lol,flag=0;
	while(1){
		sum = 0.00;
		count = 0;
		scanf("%f",&num);
		if(num < 0.00 || num > 5.20)return 0;
		if(num == 0.00)break;
		for(int i=1;i<=273;i++){
			sum = sum + (float)1/(i+1);
			count++;
			if(sum >= num){
				break;
			}
		}
		arr[z++] = count;			
	}

	for(int i=0;i<z;i++){
		lol = arr[i];
		printf("%d card(s)",arr[i] );
		printf("\n");
	}

	return 0;
}