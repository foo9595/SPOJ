#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

class tp{
public:
	char a[200],n;
};

int main(){
	int c;
	int t=0;
	tp *p = new tp[10000];
	while(1){
		scanf("%d",&c);
		if(c != 0){
			cin>>p[t].a;
			p[t].n = c;
			t++;
		}else{
			break;
		}
	}
	int rows,cols;
	int temp = 0;
	for(int i=0;i<t;i++){
		rows = ( (strlen(p[i].a) % p[i].n) == 0) ? (strlen(p[i].a) / p[i].n) : (strlen(p[i].a) / p[i].n)+1;
		cols = p[i].n;
		temp = 0;
		int aaa[rows][cols];
		for(int j=0;j<rows;j++){
			for(int k=0; k<cols; k++){
				if(temp <= strlen(p[i].a)){
					if(j%2 == 0){
						aaa[j][k] = p[i].a[temp];
						temp++;
					}else{
						aaa[j][cols-k-1] = p[i].a[temp];
						temp++;
					}
				} 
			}
		}

		for(int k=0; k<cols; k++){
			for(int j=0;j<rows;j++){
				printf("%c",aaa[j][k]);
			}
		}
		printf("\n");
	}

	return 0;
}