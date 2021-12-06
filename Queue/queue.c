#include<stdio.h>
void main()
{
 int q[5],ch,data,rear=-1,front=-1,n=5,i;
printf("\t\t Queue operations\n");
printf("1.enqueue\n2.dequeue\n3.display\n");
v:
printf("enter your choice:");
scanf("%d",&ch);
switch(ch)
{
 case 1:printf("enter the data to be inserted:");
       scanf("%d",&data);
       
        if(rear==n-1)
          printf("queue overflow");
        else
        {
          rear=rear+1;
          q[rear]=data;
        }
break;
 case 2:
if(rear==-1)
         printf("queue underflow");
       else
        {
         data=q[rear];
         rear=rear-1;
printf("%d is enqueued...",data);
        }
break;
 case 3:
      if(rear==-1 && front==-1)
      {
       printf("no elements");
      }
for(i=0;i<=rear;i++)
        printf("%d",q[i]);
 break;
 default :printf("wrong choice");
}
char c;
printf("\ndo you want to continue");
scanf("%s",&c);
if(c=='y')
 goto v;
}

       
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      

