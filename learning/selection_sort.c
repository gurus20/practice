//selection sort

#include <stdio.h>

int swap(int *a,int *b){
int temp;
temp=*a;
*a=*b;
*b=temp;
}

int main(){
int i,j,key,n=6;
int arr[6]={58,32,43,79,1,22,};
for(i=1;i<=n-1;i++){
  
  j=i;
  for(j=i; j<n ; j++){
  if(arr[i-1]>arr[j]){
    swap(&arr[i-1],&arr[j]);
    }
  }
}
int s;
for(s=0;s<=n-1;s++){
  printf("%d\n",arr[s]);
}
}
