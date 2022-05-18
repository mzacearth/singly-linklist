#include <stdio.h>
#include <stdlib.h>
void main()
{
 struct node
{
 int data;
 struct node *next;
};
 struct node *head = NULL,*pos=NULL, *tail=NULL;
 int ch, entry;
 while (1)
{
 printf("\n 1: Insert \n 2: Display \n 3: Exit");
 printf("1 enter your choice:");
 scanf("%d",&ch);
 switch(ch)
{
 case 1:
        printf("\n enter data :");
        scanf("%d",& entry);
        if(head==NULL)
        {
         head=(struct node *) malloc(sizeof (struct node));
         head->data=entry;
         pos=head;
         tail=head;
 
        }
         else
        {
         tail->next=(struct node*)malloc(sizeof (struct node));
         tail=tail->next;
    #include<stdio.h>
#include<stdlib.h>
void main()
{
 struct node
{
 int data;
 struct node *next;
};
 struct node *head = NULL,*pos=NULL, *tail=NULL;
 int ch, entry;
 while (1)
{
 printf("\n 1: Insert \n 2: Display \n 3: Exit");
 printf("1 enter your choice:");
 scanf("%d",&ch);
 switch(ch)
{
 case 1:
        printf("\n enter data :");
        scanf("%d",& entry);
        if(head==NULL)
        {
         head=(struct node *) malloc(sizeof (struct node));
         head->data=entry;
         pos=head;
         tail=head;
 
        }
         else
        {
         tail->next=(struct node*)malloc(sizeof (struct node));
         tail=tail->next;
         tail->data=entry;
         } break;
         case 2:
                {
                 pos=head;
                 printf("\n elements are ");
                 while(pos!=NULL)
                 {
                  printf("\t%d",pos->data);
                  pos=pos->next;
                  }
                   break;
                  }
                   case 3 :
                                  {
                                   printf("\n good bye");
                                   exit(0);
                                  }
                           }
                 }
   }
          tail->data=entry;
         } break;
         case 2:
                {
                 pos=head;
                 printf("\n elements are ");
                 while(pos!=NULL)
                 {
                  printf("\t%d",pos->data);
                  pos=pos->next;
                  }
                   break;
                  }
                   case 3 :
                                  {
                                   printf("\n good bye");
                                   exit(0);
                                  }
                           }
                 }
   }
     
