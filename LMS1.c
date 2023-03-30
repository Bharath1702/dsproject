#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct library
{
char bk_name[30];
char publisher[30];
float price;
};
int main()
{
struct library l[100];
char pb_nm[30],bk_nm[30];
int i,j,keepcount;
i=j=keepcount=0;
printf("\n\n## library management ##\n");
while(j!=5)
{
printf("\n1. add book information\n");
printf("2. display all books available\n");
printf("3. display highest payable book\n");
printf("4.display list of publisher\n");
printf("5. exit");
printf("\n\n enter one of the above:");
scanf("%d",&j);
switch(j)
{
/* add book */
case 1:
printf("enter book name=");
scanf("%s",l[i].bk_name);

printf("enter publisher name=");
scanf("%s",l[i].publisher);

printf("enter price=");
scanf("%f",&l[i].price);
keepcount++;

break;

case 2:
 printf("display all books available\n");
 for(i=0;i<keepcount;i++)
 {
 printf("\n book name=%s",l[i].bk_name);
 printf("\t author name=%s",l[i].publisher);
 printf("\t price=%f",l[i].price);
 }
 break;
 
 case 3:
 printf("higest price book:");
 float temp=0;
 for(i=0;i<keepcount;i++)
 {
 if(temp<l[i].price)
 temp=l[i].price;
 }
 printf("%f",temp);
 break;
 
 case 4:
 printf("list of publisher:");
 for(i=0;i<keepcount;i++)
 {
   printf("\n %s",l[i].publisher);
 }
 break;
 case 5:
    exit(0);
 }
 }
 return 0;
 }
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 



