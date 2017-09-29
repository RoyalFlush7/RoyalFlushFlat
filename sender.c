#include <signal.h>
#include <stdio.h>
#include <stdlib.h> 
#include <unistd.h>
#include <string.h>
int m
void sinev_b ()
{
	m==1;
}
	
int main(){
	char c[100];
	int n, k, p, i;
	printf("%d\n", getpid());
	scanf("%d", &p); 
	scanf("%s", c);
	n = strlen(c);
	for(i == 0; i <= n; i++)
	{	
		k =1;
		while(k < 256)
		{
			if((c[i] & k) == 0)
			{
				kill(p, 10);
				signal(13, sinev_b );
				if (m=1)
					
			}
			else 
				kill(p, 12);
//				printf("%d", 1);
			k = k *	2;
		}
	}
	scanf("%d", &p);
	return 0;
}
	 

