#include <stdio.h>
#include <stdlib.h>
void main()
{
	struct node
	{
		int data;
		struct node *next;
	};
	struct node *head=NULL,*pos=NULL,*tail=NULL;
	
	int ch,entry,cnt;
	while (1)
	{
		printf("\n1.INSERT\n2.DISPLAY\n3.COUNT\n4.EXIT");
		printf("\nEnter your choice :");
		scanf("%d",&ch);
		switch (ch)
		{
			case 1 : {
				printf("\nEnter data:");
				scanf("%d",&entry);
				if (head==NULL)
				{
					head=(struct node *)malloc(sizeof(struct node));
					head->data=entry;
					pos=head;
					tail=head;
					cnt=1;
				}
				else
				{
					tail->next=(struct node *)malloc(sizeof(struct node));
					tail=tail->next;
					tail->data=entry;
					cnt++;
				} break;
			}
			case 2 :
			{	pos=head;
				printf("\nElements are:");
				while (pos!=NULL)
				{
					printf("\t%d",pos-> data);
					pos=pos->next;
				} break;
			}
			case 3 : {
				printf("Number of elements : %d",cnt);
			} break;
			case 4 : {
				printf("\nGood Bye\n");
				exit(0);
			}
		}
	}
}
