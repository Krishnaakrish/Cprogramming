#include <stdio.h>
main()
{
    char a[50];
    int i,c,j;
    scanf("%[^\n]",&a);
    for(i=0;a[i]!='\0';i++)
    {
        c=0;
        for(j=0;a[j]!='\0';j++)
        {
            if(a[i]==a[j])
            {
                c++;        
            }
        }
      
      if(c==1)
        printf("%c",a[i]); 
       }
    
    return 0;
}
