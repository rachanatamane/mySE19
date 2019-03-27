//Author: Rachana Tamane
//Description: Sum of 1 to n

#include<stdio.h>
main(){
  int i,num, sum=0; //initilazing
  
  printf("Please enter a number: \n"); //entering the value of number
  scanf("%d", &num);
  printf("Enter a value: \n",&num);
  for(i=1;i<=num;i++)
    sum +=i;
  

    printf("Sum of numbers from 1 to %d is %d \n",num, sum);

 }//end of main
