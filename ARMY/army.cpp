#include <stdio.h>
#include <iostream>
using namespace std;

int main(){

	int test,ng,nm;
	scanf("%d",&test);
	printf("\n");
	int arr[test],flag,x,y,min1,min2,temp,count1,count2;
	for(int i=0;i<test;i++){
		scanf("%d%d",&ng,&nm);
		int nga[ng],nma[nm];
		count1 = ng;
		count2 = nm;
		for(int j=0;j<ng;j++){
			scanf("%d",&nga[j]);
		}

		for(int j=0;j<nm;j++){
			scanf("%d",&nma[j]);
		}

		for(int j=0;j<ng-1;j++){
		    for (int d=0;d<ng-j-1;d++){
		      	if(nga[d] > nga[d+1]){
			        temp     = nga[d];
			        nga[d]   = nga[d+1];
			        nga[d+1] = temp;
			    }
		    }
		}	

		for(int j=0;j<nm-1;j++){
		    for (int d=0;d<nm-j-1;d++){
		      	if(nma[d] > nma[d+1]){
			        temp     = nma[d];
			        nma[d]   = nma[d+1];
			        nma[d+1] = temp;
			    }
		    }
		}	

		printf("\n");

		min1 = nga[0];
		min2 = nma[0];
		x=0;
		y=0;
		flag=0;

		for(int j=0;j<(nm+ng);j++){
			if(min1 < min2){
				count1--;
				if(count1 != 0){
					min1 = nga[x+1];
					x = x+1;
				}else{
					flag = 1;
					break;
				}
			}else{
				count2--;
				if(count2 != 0){
					min2 = nma[y+1];
					y = y+1;
				}else{
					flag = 2;
					break;
				}
			}
		}

		if(flag == 2){
			arr[i] = 1;
		}else if(flag == 1){
			arr[i] = 2;
		}

	}

	for(int i=0;i<test;i++){
		if(arr[i] == 1){
			printf("Godzilla\n");
		}else if(arr[i] == 2){
			printf("MechaGodzilla\n");
		}

	}
	
	return 0;
}