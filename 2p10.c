#include<stdio.h>
void main()
{
char a[30];
int i;
gets(a);
for(i=0;a[i]!=NULL;i++)
{
    if(a[i]>='a'&&a[i]<'x'||a[i]>='A'&&a[i]<'X')
    a[i]+=3;
    if(a[i]>='x'&&a[i]<='z'||a[i]>='X'&&a[i]<='Z')
    a[i]-=23;
    
}
puts(a);

}
