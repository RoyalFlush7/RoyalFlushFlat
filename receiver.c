#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
char c[100];
int i;
void balash( int p )
{
	c[i]=1;
	i++;
	kill(p, 13);
	
}

void sitnikov(int p)
{
	c[i]=0;
	i++;
	kill(p,13);
}
int main(){
	char a[100];
	int p;
	int h = 1 , g = 0, sum = 0, n ;
	printf("%d\n", getpid());
	scanf("%d" , &p);
	signal (12, balash);
	signal (10, sitnikov);
	n=strlen(c);
	for (g = 0; g < n; g++)
	{
		a[g]=c[ n - g ] * h;
		h = h * 2;
	}
	g = n;
	while (g >= 0)
	{
		sum= sum + a[g];
		g--;
	}
	printf("%c", sum);
        return 0;
}


