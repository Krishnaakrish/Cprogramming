#include<stdio.h>
void main()
{
   char a[30],b[30];
   int i,k=0;
   gets(a);
   for(i=0;a[i]!=NULL;i++)
   {
       if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U')
       {
           b[k]=a[i];
           k++;
       }
   }
   for(i=0;a[i]!=NULL;i++)
   {
       if(a[i]!='a'&&a[i]!='e'&&a[i]!='i'&&a[i]!='o'&&a[i]!='u'&&a[i]!='A'&&a[i]!='E'&&a[i]!='I'&&a[i]!='O'&&a[i]!='U')
       {
           b[k]=a[i];
           k++;
       }
   }
   b[k]=NULL;
   puts(b);
   
}
