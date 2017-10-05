#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
char c[100];
int i=0;
int end;
int p;
int z=0;
void balash(int signo)
{
	c[i]=1;
	i++;
	kill(p, 10);
//	printf("1\n");
	z++;
}

void sitnikov(int signo)
{
	c[i]=0;
	i++;
	kill(p,10);
//	printf("0\n");	
	z++;
}
void psurceva(int signo)
{
	end = 0;
}
int main(){
	end=1;
	int h = 128 , g = 0, sum = 0, n, k,l,b ;
	printf("%d\n", getpid());
	scanf("%d" , &p);
	signal (12, balash);
	signal (10, sitnikov);
	signal (13, psurceva);
	printf ("I can\n");
	while(end !=  0){ 
	}
	l=z/8;
	k=0;
	while(k<l)
	{
		h=128;
		sum=0;
		for (g = 0 ; g < 8; g++)
		{
			b=c[ g+k*8 ] * h;
			h = h / 2;
			sum=sum + b;
		}
		printf("%c", sum);
		k++;
	}        
	return 0;
}


