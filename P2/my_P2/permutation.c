#include <stdio.h>

int n;
int a[10]={0},flag[10]={0};

void perm(int k){
	int i;
	if(k==n){		
		for(i=0;i<n;i++){
			printf("%d ",a[i]);
		}
		printf("\n");
	}
	else{
		for(i=1;i<=n;i++){
			if(!flag[i]){
				flag[i]++;
				a[k]=i;
				perm(k+1);
				flag[i]--;
			}
		}
	}
}

int main(void){
	scanf("%d",&n);
	perm(0);
	return 0;
}
