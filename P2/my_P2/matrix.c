#include <stdio.h>

int main(void){
	int n;
	int a[100][100];
	int b[100][100];
	int s[100][100]={{0}};
	int i,j,k;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			for(k=0;k<n;k++){
				s[i][j]+=a[i][k]*b[k][j];
			}
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%d ",s[i][j]);
		}
		printf("\n");
	}
	return 0;
}
