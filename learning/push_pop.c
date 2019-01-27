
#include <stdio.h>

void push(int arr[],int i,int *top);
int pop(int arr[],int *top);
void display(int arr[],int *top);

int n=4,x;

//main stack one
  void push(int arr[],int i,int *top){
    if(*top>=n-1){
      printf("Stack is over Flow\n");
    }
    else{
      //printf("enter the element\n");
      *top=*top+1;
      arr[*top]=i;
    }
  }
  
int pop(int arr[],int *top){
  if(*top<=-1){
    printf("stack is under flow\n");
  }
  else{
    printf("%d is popped\n",arr[*top]);
    --*top;
  }
  return arr[*top+1];
}

void display(int arr[],int *top){
  if (*top>=0){
    for(x=*top; x>=0; x--){
      printf("%d\n",arr[x]);
    }
  }
  else{
    printf("Stack is empty\n");
  }
}

int main(){
int arr1[4]={5,4,3,2},top1=3;
int arr2[4],top2=-1;

int data;
data=pop(arr1,&top1);
push(arr2,data,&top2);
data=pop(arr1,&top1);
push(arr2,data,&top2);
data=pop(arr1,&top1);
push(arr2,data,&top2);
data=pop(arr1,&top1);
push(arr2,data,&top2);

display(arr1,&top1);
display(arr2,&top2);

return 0;
}
