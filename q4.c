#include <stdio.h>

int isprime(int n){
    int f=1;
    for(int i=2;i*i<n;i++){
        if(n%i==0){
            f=0;break;
        }
    }
    return f;
}

int ispalin(int n){
    int c=0,f=0;
    int m=n;
    while(n>0){
        c=c*10+(n%10);
        n=n/10;
    }
    if(c==m){
        f=1;
    }
    else
    f=0;
    return f;
}
int main(void) {
	int n;
	scanf("%d",&n);
	while(1){
	    if(isprime(n)==1 && ispalin(n)==1){
	       printf("%d",n);
	       break;
	    }
	    n++;
	}
	return 0;
}
