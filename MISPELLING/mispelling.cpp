#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

int main(){
	int test;
	int lol;
	int j;
	string st[1000],s;
	scanf("%d",&test);
	for(int i=0;i<test;i++){
		cin>>j;
		cin>>s;
		for(int k=0;k<strlen(s.c_str());k++){
			if((int)s[k] < 65 || (int)s[k] > 90 )return 0;
		}
		while(j<strlen(s.c_str())){
			s[j-1] = s[j];
			j++; 
		}
		s[strlen(s.c_str()) - 1] = '\0';
		st[i] = s;
	}
	for(int i=0;i<test;i++){
		cout<<i+1<<" "<<st[i]<<endl;
	}
	return 0;
}