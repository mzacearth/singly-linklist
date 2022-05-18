#include<stdio.h>
#include<stdlib.h>
#include <time.h>

float timedifference_msec(struct timeval t0, struct timeval t1)
{
    return (t1.tv_sec - t0.tv_sec) * 1000.0f + (t1.tv_usec - t0.tv_usec) / 1000.0f;
}

void main()
{
	struct node
	{
		int data;
		struct node *next;
	};
	
	struct node *head=NULL,*pos=NULL,*tail=NULL;
	struct timeval t0;
	struct timeval t1;
	float elapsed;
	int ch, entry,c;
	long num=10,j;
	
	for(j = 0; j < num; j++)
	{
		
		if(head==NULL)
		{
			head=(struct node*)malloc(sizeof(struct node));
			head->data=rand()%1000;
			pos=head;
			tail=head;
			printf("\n%d",pos->data);
		}
		else
		{
			tail->next=(struct node*)malloc(sizeof(struct node));
			tail=tail->next;
			tail->data=rand()%1000;
			printf("\n%d",pos->data);
		}
			
		
	}
	
	gettimeofday(&t1, NULL);

	elapsed = timedifference_msec(t0, t1);

	printf("Code executed in %f milliseconds.\n", elapsed);
	
}

