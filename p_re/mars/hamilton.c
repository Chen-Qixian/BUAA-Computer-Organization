#include <stdio.h>

int visit[100]={0};
int g[100][100]={{0}};
int n,m,num=0,judge=1;

void hamilton(int k){
	int i,p=1;
	for(i=1;i<=n;i++){
		if(g[k][i]&&!visit[i]&&judge){
			p=0;
			visit[i]=1;
			num++;
			hamilton(i);
			visit[i]=0;
			num--;
		}
	}
	if(p){
		if(num==n&&g[1][k]){
			printf("yes\n");
			judge=0;
		}
	}
	return; 
}

int main(void){
	int i,a,b;
	scanf("%d",&n);
	scanf("%d",&m);
	for(i=0;i<m;i++){
		scanf("%d %d",&a,&b);
		g[a][b]=1;
		g[b][a]=1;
	}
	visit[1]=1;
	num++;
	hamilton(1);
	if(judge){
		printf("no\n");
	}
	return 0;
}
