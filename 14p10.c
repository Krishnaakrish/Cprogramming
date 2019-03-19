#include <stdio.h>
void main()
{
       int i,j=0;
    char a[100];
 
    scanf("%s",a);
    for(i=0;a[i]!=NULL;i++)
      if(a[i]!='a' && a[i]!='b')
          j=1;
        
    
    if(j==0)
      printf("yes");
    
    else
      printf("no");
   
    
}
