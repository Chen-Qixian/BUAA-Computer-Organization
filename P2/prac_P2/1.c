#include <stdio.h>

int main(void){
	int m,n,x;
	int i,j,k=0;
	int a[100];
	int b[100];
	int c[100];
	scanf("%d %d",&n,&m);
	for(i=1;i<=n;i++){
		for(j=1;j<=m;j++){
			scanf("%d",&x);
			if(x){
				a[k]=i;
				b[k]=j;
				c[k]=x;
				k++;
			}
		}
	}
	for(k=k-1;k>=0;k--){
		printf("%d %d %d\n",a[k],b[k],c[k]);
	}
	return 0;
}
