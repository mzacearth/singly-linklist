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
	
	int ch,entry,cnt,s;
	while (1)
	{
		printf("\n1.INSERT\n2.DISPLAY\n3.COUNT\n4.SEARCH FOR AN ELEMENT\n5.EXIT");
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
				printf("Enter the element to be searched:");
				scanf("%d",&s);
				int flag=0;
				pos=head;
				while (pos!=NULL)
				{
					if (pos-> data == s)
					{
						flag=1;
						break;
					}
					pos=pos->next;
				}
				if (flag==0)
					printf("Element not found");
				else 
					printf("Element Found"); 
			} break;
				
			case 5 : {
				printf("\nGood Bye\n");
				exit(0);
			}
		}
	}
}
