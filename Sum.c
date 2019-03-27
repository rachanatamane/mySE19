//Author: Rachana Tamane
//Description: Sum of 1 to n and their average

#include<stdio.h>
main(){
  int i,num,count, sum=0; //initilazing
  float average;

  
  printf("Please enter a number: \n"); //entering the value of number
  scanf("%d", &num);
  printf("Enter a value: \n",&num);

  
  for(i=1;i<=num;i++){
    sum +=i;
   count =1;
  }

    printf("Sum of numbers from 1 to %d is %d \n",num, sum);
    printf("The average of the number is: %f \n", sum/num);

	   
 }//end of main
