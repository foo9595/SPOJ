#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

int main(){

	int test;
	scanf("%d",&test);
	if(test > 100)return 0;
	long long int arr[test][10000],count1,count2,num[test],temp,x,count,a,d,third,eighth,sum;
	for(int i=0;i<test;i++){
		scanf("%lld%lld%lld",&third,&eighth,&sum);
		d = ( eighth - third ) / 5;
		if(d < 0) return 0;
		a = third - 2 * d;
		if(a < 0) return 0;
		if(d == 0){
			count = sum/a;
		}
/*		count = 1;
		while(1){
			x = (count/2)*(2*a + (count - 1)*d);
			if( sum == x ){
				num[i] = count;
				break;
			}
			count++;
		}
*/
		count1 = ((d-2*a) + sqrt( (2*a - d) * (2*a - d) + 8*sum*d ))/(2*d);
		count2 = ((d-2*a) - sqrt( (2*a - d) * (2*a - d) + 8*sum*d ))/(2*d);
		if(count1 < 0 && count2 > 0){
			count = count2;
		}else if(count1 > 0 && count2 < 0){
			count = count1;
		}
		if(count < 7)return 0;
		num[i] = count;

		for(int j=1;j<=count;j++){
			arr[i][j-1] = a + (j - 1)*d; 
		}
	}
	for(int i=0;i<test;i++){
		temp=num[i];
		printf("%lld\n", temp);
		for(int j=0;j<temp;j++){
			printf("%lld ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}