#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
void balash( int a )
{
	fprintf('r.txt' , "%с", a);
	return (0);
}

int main(){
	int p;
	printf("%d\n", getpid());
	char c[100];
	signal (10, balash);	
	signal (12, balash);
        return 0;
}


