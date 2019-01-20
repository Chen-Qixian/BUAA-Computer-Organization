#include <stdio.h>

int main(void){
	int m,n,i,id,sum=0;
	int a[10000];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	scanf("%d",&m);
	for(i=0;i<m;i++){
		scanf("%d",&id);
		sum+=a[id];
	}
	printf("%d",sum);
	return 0;
}
