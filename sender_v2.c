#include <signal.h>
#include <stdio.h>
#include <stdlib.h> 
#include <unistd.h>
#include <string.h>
int k=1;
void sinev_b()
{
	k=k*2;
}	
int main(){
	char c[100];
	int n, p, i;
	printf("%d\n", getpid());
	scanf("%d", &p); 
	scanf("%s", c);
	n = strlen(c);
	for(i == 0; i <= n; i++)
	{	
		k = 1;
		while(k < 256)
		{
			if((c[i] & k) == 0)
			{
				kill(p, 10);
				signal(13, sinev_b );
			}
			else
			{ 
				kill(p,12);
				signal(13, sinev_b );
			}
		}
	}
	scanf("%d", &p);
	return 0;
}
	 

