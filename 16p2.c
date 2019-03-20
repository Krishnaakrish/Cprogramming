#include <stdio.h>

void main()
{
    char a[100],b[100];
    int count=0,i,l=0;
    scanf("%[^\n]s",a);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]==a[i+1])
               break;
            
       
        if(a[i]=='a'||a[i]=='e'||a[i]=='u'||a[i]=='i'||a[i]=='o')
                   if(a[i+1]!='a'||a[i+1]!='e'||a[i+1]!='i'||a[i+1]!='e'||a[i+1]!='u')
            {
                b[count]=a[i];
                count++;
                b[count]=a[i+1];
                count++;
                i++;
                
            }
       
        if(a[i]!='a'||a[i]!='e'||a[i]!='u'||a[i]!='i'||a[i]!='o')
                    if(a[i+1]=='a'||a[i+1]=='e'||a[i+1]=='i'||a[i+1]=='o'||a[i+1]=='u')
            {
                b[count]=a[i];
                count++;
                b[count]=a[i+1];
                count++;
                i++;
                
            }
            
       
        
    }
        
    printf("%d",count);


}
