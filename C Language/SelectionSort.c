//selection sort using C language

#include<stdio.h>
int main(){
   int n,i,j,min,temp;
   printf("enter a number of elements:");
   scanf("%d",&n);
   int a[n];
   printf("enter the array elements:");
   for(i=0;i<n;i++){
      scanf("%d",&a[i]);
   }
   for(i=0;i<n-1;i++){
      min=i;
      for(j=i+1;j<n;j++){
         if(a[j]<a[min]){
            min=j;
         }
      }
      temp=a[i];
      a[i]=a[min];
      a[min]=temp;
   }
   printf("sorted elements using selection sort:\n");
   for(i=0;i<n;i++){
      printf("%d \t",a[i]);
   }
   printf("\n");
   return 0;
}
