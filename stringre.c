#include<stdio.h>
int main()
{
char str[20];
int l,i,j;
char temp;
printf("Enter th0e string\n");
scanf("%s",str);
for(l=0;str[l]!='\0\;l++);
j=l-1;
for(i=0;i<l/2;i++)
{
temp=str[i];
str[i]=str[j];
str[j]=temp;
j--;
}
printf("The reversed string is\n");
printf("%s",str);
return 0;
}
