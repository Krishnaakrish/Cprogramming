#include<stdio.h>
void main()
{
 char str1[500],str2[500];
 int len,k,i,j,l,count=0;

 scanf("%[^\n]s",str1);
 scanf("%s",str2);
 len=strlen(str2);
 for(i=0;str1[i]!='\0';i++)
 {
  if(str1[i]==str2[0])
  {
   l=i;
   count=0;
   for(j=0;j<len;j++)
   {
    if(str1[l]==str2[j])
    {
     l++;
     count++;
    }
   }
  }
   if(count==len)
   {
    k=l-(len+1);
    for(j=l;str1[j]!='\0';j++)
    {
     str1[k]=str1[j];
     k++;
    }
    str1[k]='\0';
    break;
   }
 }
 printf("%s",str1);

}
