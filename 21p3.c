#include <stdio.h>
#include<string.h>
#include<stdlib.h>
void main() {
	int N,num[10];
	char arr[10][20],temp[20];

	scanf("%d",&N);
	for(int j=0;j<N;j++){
		scanf("%s",arr[j]);
	
		num[j]=0;
		for(int i=0;i<strlen(arr[j]);i++){
			
		if(arr[j][i]=='a' ||arr[j][i]=='e' ||arr[j][i]=='i' ||arr[j][i]=='o' ||arr[j][i]=='u'||arr[j][i]=='A'||arr[j][i]=='E'||arr[j][i]=='O'||arr[j][i]=='U'||arr[j][i]=='I' ){
			num[j]=num[j]+1;
				
		}
	}
		
	}
	
	for(int i=0;i<N-1;i++){
		
		for(int j=i+1;j<N;j++){
			if(num[i]<num[j]){
				strcpy(temp, arr[i]);
  strcpy(arr[i], arr[j]);
  strcpy(arr[j], temp);
}
		    
		}
	}
		
	for(int k=0;k<N;k++)
		printf("%s\n",arr[k]);


}
