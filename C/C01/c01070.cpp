#include <stdio.h>
#include<math.h>
int a,b,c,d,e,f;
void swap(int *x,int *y){
	int tg=*x;
	*x=*y;
	*y=tg;
}
int main(void) {
	scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
	int S=a*b+c*d+e*f;
	int y=sqrt(S);
	if(y*y!=S)
		printf("NO");
	else{
	if(a>b) swap(&a,&b);
	if(c>d) swap(&c,&d);
	if(e>f) swap(&e,&f);
	if(b==d && d==f && f==y){
		printf("YES");
	}
	else{
		if(d>b){
			swap(&b,&d);
			swap(&a,&c);
		}
		if(f>b){
			swap(&b,&f);
			swap(&a,&e);
		}
		if(b==y){
			if(c+e==y || c+f==y || d+e==y || d+f==y)
				printf("YES");
			else printf("NO");
		}
		else printf("NO");
	}
	}
	return 0;
}