#include <stdio.h>

int main(void){
	int a[100][100];
	int i,j;
	int cnt=0;
	for(i=0;i<16;i++){
		for(j=0;j<16;j++){
			a[j][i]=cnt;
			cnt++;
		}
	}
	for(i=0;i<16;i++){
		for(j=0;j<16;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}
