
#include<stdio.h>
main()
{
int num;
printf("my name is soya parth A. \n");
printf("question 1:Write a Program to find all the negative elements from a given 1D array.\n ");
printf("enter the size of array \n");
scanf("%d",&num);
 
 int arr[num];
 
 for(int i=0;i<num;i++){
 printf("a[%d]=",i);
 scanf("%d",&arr[i]);
 
 }
 printf("negative element \n");
for(int i=0;i<num;i++){

if(arr[i]<1){

printf("%d",arr[i]);
} else{
printf("");
}

}
}
    
    