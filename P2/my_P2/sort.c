#include <stdio.h>

int main(void){
	int n;
	int a[1000];
	int i,j,t;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(a[j]<a[i]){
				t=a[j];
				a[j]=a[i];
				a[i]=t;
			}
		}
	}
	for(i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	return 0;
}
