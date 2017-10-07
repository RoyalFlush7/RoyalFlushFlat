#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <signal.h>
#include <unistd.h>


typedef struct{
	long int left;
	long int right;
	long long int sum;
}ad;

void* my_func(void *pointer)
	{
	ad* x;
	x = (ad*)pointer; 
	int v = x->left;
	x->sum = 0;
	for (v = x->left; v <= x->right; v++){
		x->sum = x->sum + v;
	}
	return x;

	
}

int main () {
	long int L, R;
	int n;
	int i = 0;
	int thread_result = 0;
	long long int final_result = 0;
	int digits_in_pack = 0;
	int last_left;
	printf("Enter left border: ");
	scanf("%ld", &L);
        printf("Enter right border: ");
	scanf("%ld", &R);
        printf("Enter number of threads: ");
	scanf("%d", &n);
	digits_in_pack = (R - L + 1)/(n);
	ad* structures = (ad*) malloc(sizeof(ad) * n);
	pthread_t* thread_id = malloc(sizeof(pthread_t) * n);
	for (i = 0; i < n; i++)
	{
		structures[i].left = L + (i * digits_in_pack);
		structures[i].right = structures[i].left + digits_in_pack - 1;
		thread_result = pthread_create(&thread_id[i],
				NULL,
				my_func,
				(ad*)&structures[i]
				);
		if (thread_result)
		{
			printf("you lose, returned value = %d\n", thread_result);
			exit(0);
		}

	}

	for (i = 0; i < n; i++)
	{
		pthread_join(thread_id[i], NULL);
		final_result = final_result + structures[i].sum;
	}
	last_left = L + (digits_in_pack * n);
	for (i = last_left; i <= R; i++)
	{
		final_result = final_result + i;

	}

	printf("GGWP!\nThe sum from %ld to %ld is %lld\n",L, R, final_result);

	free(structures);
	free(thread_id);
	return 0;

}
