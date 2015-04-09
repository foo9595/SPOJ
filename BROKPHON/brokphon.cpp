#include <iostream>
#include <stdio.h>
using namespace std;
int main(){
	int test,n,count;
	scanf("%d",&test);
	int arr[test];
	for(int i=0;i<test;i++){
		count = 0;
		scanf("%d",&n);
		int a[n];
		for(int j=0;j<n;j++){
			scanf("%d",&a[j]);
		}
		for(int j=0;j<n;j++){
			if(j == 0){
				if(a[j] != a[j+1]){
					count++;
				}	
			}else if(j == n-1){
				if(a[j] != a[j-1]){
					count++;
				}
			}else{
				if(a[j] != a[j-1] || a[j] != a[j+1]){
					count++;
				}
			}
		}
		arr[i] = count;
	}
	for(int i=0;i<test;i++){
		printf("%d\n", arr[i]);
	}
	return 0;
}