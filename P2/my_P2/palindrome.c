#include <stdio.h>

int main(void){
	int n,i,p=1;
	char s[1000];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		getchar();
		scanf("%c",&s[i]);
	}
	s[i]='\0';
	for(i=0;i<n/2;i++){
		if(s[i]!=s[n-i-1]){
			p=0;
			break;
		}
	}
	printf("%s",s);
	printf("%d",p);
	return 0;
}
