#include<stdio.h>
void main()
{

int key,k,el,ch,n,x,i,a[10];
printf("enter the no. of elements:");
scanf("%d",&n);
printf("enter the elements in the array:"); 
for(i=0;i<n;i++)
{
	scanf("%d",&a[i]);
}
printf("\t\tARRAY OPERATIONS\n");
printf("1.insertion\n2.deletion\n3.search\n");
v:
printf("enter your choice:");
scanf("%d",&ch);
switch(ch)
{
case 1:
	printf("enter the element to be inserted:");
	scanf("%d",&key);
	printf("enter the position where the key to be inserted:");
	scanf("%d",&x);
	for(i=0;i<10;i++)
	{ 
	if(i==x-1)
	{
		int j=n;
		while(j>=i)
		{
		a[j+1]=a[j];
		j--;
		}
	a[i]=key;
	}
	}
	n++;
	for(i=0;i<n;i++)
	{
	printf("%d\t",a[i]);
	}
printf("\n");
break;
case 2:

printf("enter the element to be deleted:");
scanf("%d",&key);
for(i=0;i<n;i++)
{
	if(a[i]==key)
	{
	int j=i;
	while(j<=n)
	{
		a[j]=a[j+1];
		j++;
	}
	}
}
n--;
for(i=0;i<n;i++)
	{
	printf("%d\t",a[i]);
	}
printf("\n");
break;

case 3:
printf("enter the no. to be searched:");
scanf("%d",&key);
int flag=0;
for(i=0;i<n;i++)
{
	if(a[i]==key)
	{
	flag=1;
	printf("element found at position %d\n",i+1);
}
}
if(flag==0)
printf("element not found!!\n");
break;
default:printf("wrong choice!!");
}
char c;
printf("do you want to continue?\n");
scanf("%s",&c);
if(c=='y')
 goto v;
}

