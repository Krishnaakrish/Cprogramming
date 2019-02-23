#include<stdio.h>
void main()
{
    char a[50],b[50];
    int i,j,k,bl=0,cl=0;
    gets(a);
    gets(b);
    for(i=0;b[i]!=NULL;i++)
    bl++;
  
    for(i=0;a[i]!=NULL;i++)
    {
        cl=0;
        if(a[i]==b[0])
        {
            k=i;
            for(j=0;b[j]!=NULL;j++)
            {
                if(a[k]==b[j])
                {
                    cl++;
                }
                else
                break;
            k++;
            }
        }
        if(cl==bl)
        break;
    }
    if(cl==bl)
    printf("yes");
    else
    printf("no");
}
