#include <stdio.h>
#include <iostream>
using namespace std;
int main(){
	int test,a,b,x[30],n2[4]={2,4,8,6},n3[4]={3,9,7,1},n4[2]={4,6},n7[4]={7,9,3,1},n8[4]={8,4,2,6},n9[2]={9,1},z;
	scanf("%d",&test);
	for(int i=0;i<test;i++){
		scanf("%d%d",&a,&b);
		if(a>20||a<0)return 0;
		if(b==0){z=1;break;}
		if(a==1||a==11||a==5||a==15||a==6||a==16||a==10||a==20){
			if(a<10)z=a;
			else z=a%10;
		}else if(a==2||a==12)z=n2[b%4-1];
		else if(a==3||a==13)z=n3[b%4-1];
		else if(a==4||a==14)z=n4[b%2-1];
		else if(a==7||a==17)z=n7[b%4-1];
		else if(a==8||a==18)z=n8[b%4-1];
		else if(a==9||a==19)z=n9[b%2-1];
		x[i]=z;
	}
	for(int i=0;i<test;i++)printf("%d\n",x[i]);
	return 0;
}