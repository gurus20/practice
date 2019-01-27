// semiprime number 
#include<stdio.h>
int main()
{   
    int n,count = 0,i=1,arr[100] ;
    printf(" enter any number to check  it is semiprime or not\n");
    scanf(" %d",&n);
    while(i <= n)
    {
      if( n%i == 0 )
      {   
                 
          count ++;
          printf("=%d",i);
       arr[count]  = i; 
          }
      
      i++;
     // printf("\t*%d",i);
    }
    //printf("::%d",i);
    printf("\n%d\n",count);
    for(int j = 1 ; j <= count ;j++)
    printf("-%d",arr[j]);
}
