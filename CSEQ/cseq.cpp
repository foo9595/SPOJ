
#include <iostream>
#include <stdio.h>
using namespace std;

long long int fact(int n){
	long long int f=1;
	for(int i=1;i<=n;i++){
		f*=i;
	}
	return f;
}

int comb(int n,int r){
	int num,den;
	num=1;
	den=1;
	int temp=n;
	for(int i=1;i<=r;i++){
		num *= temp;
		temp--;
	}
	for(int i=1;i<=r;i++){
		den *= i;
	}
	return num/den;
}

int main(){
	int test;
	scanf("%d",&test);
	if(test <1 || test>100)return 0;
	int arr[test];
	int n,l,r,total;
	for (int i = 0; i < test; i++){
		scanf("%d%d%d",&n,&l,&r);
		if(n <1 || n>1000000000 || l <1 || l>1000000000 || r <1 || r>1000000000)return 0;
		total = 0;
		for(int j=1;j<=n;j++){
			total += comb(r-l+1,j);
		}
		if(n!=1)total += r-l+1;
		arr[i]=total;
	}
	for (int i = 0; i < test; ++i){
		printf("%d\n", arr[i]%1000003);
	}
	cout<<comb(95,1);
	return 0;
}

/*

int main(){
	int n,r;
	n=7;
	r=4;
	int fact;
	int num,den;
	num=1;den=1;
	for(int i=n;i>=r;i--){
		num *= i;
	}
	for(int i=1;i<=r;i++){
		den *= i;
	}
	cout<<num<<"\n"<<den<<endl;
	cout<< num/den <<endl;
	return 0;
}*/