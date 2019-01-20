#include <stdio.h>

int main(void){
	int i,j,p,k=0,m,n;
	int a[10000];
	a[k]=2;
	k++;
	for(i=3;i<1000;i+=2){
		p=1;
		for(j=2;j*j<=i;j++){
			if(i%j==0){
				p=0;
				break;
			}
		}
		if(p){
			a[k]=i;
			k++;
		}
	}
	scanf("%d %d",&m,&n);
	int cnt=1;
	for(i=0;i<1000;i++){
		if(a[i]>n) break;
		if(a[i]>=m){
			printf("%d ",a[i]);
			if(cnt==10){
				printf("\n");
				cnt = 1;
			}
			else{
				cnt++;	
			}			
		}
	}
	return 0;
}
