#include <signal.h>
#include <stdio.h>
#include <stdlib.h> 
#include <unistd.h>
#include <string.h>
int k=1;
int end=1;
int p;
void sinev_b(int signo)
{
	end=0;
	k=k/2;
}	
int main(){
	char c[100];
	int n, i;
	printf("%d\n", getpid());
	scanf("%d", &p); 
	scanf("%s", c);
	n = strlen(c);
	signal(10, sinev_b);
	for(i = 0; i <= n; i++)
	{	
		k = 128;
		while(k > 0) {
			if((c[i] & k) == 0)
			{
				end=1;
				kill(p,10);
			//	printf("0\n");
				while(end==1){
				}
			}
			else
			{ 
				end=1;
				kill(p,12);
			//	printf("1\n");
				while(end==1){		
				}
			}

		}
	}
	kill(p,13);
	return 0;
}
	 

