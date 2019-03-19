#include <stdio.h>

void main() {

	int array1[20],n,flag=-1,sase=1;
	
	scanf("%d",&n);
	for(int i=0;i<n;i++)
		scanf("%d",&array1[i]);

	if(array1[0]>array1[1])
		flag=1;
	
	else
	flag=0;
	

	if(flag==1){
		for(int i=1;i<n-1;i=i+1){
			if(i%2!=0){
			if(array1[i]>array1[i+1]){
				sase=0;
				break;
				}
			}
			else{
			if(array1[i]<array1[i+1]){
				sase=0;
				break;
				}
			}
		}
	}
	else{
		
		for(int i=1;i<n-1;i=i+1){
			if(i%2!=0){
			if(array1[i]<array1[i+1]){
				sase=0;
				printf("%d\n",sase);
				
				break;
				}
			}
			else{
			if(array1[i]>array1[i+1]){
				sase=0;
				break;
				printf("%d\n",sase);
			}
			}
			
		}
	}
	if(sase==0)
		printf("no");

	else
		printf("yes");

}
