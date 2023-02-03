/*
  UB C Programming Unit 1 Lesson 2 Program 4
  Price of Apples
  Max Gombos
*/
#include <stdio.h> //import input output functions

int main(void) { //define main function
  int appleNum; //initialize appleNum function
  float applePrice; //initialize applePrice function

  printf("Please enter how many apples you would like to buy: ");
  //ask how many apples the user would like to buy
  scanf("%d", &appleNum); //accepts user input, formats as integer
  printf("Please enter how much does each apple costs: ");
  //ask how much each apple costs
  scanf("%f", &applePrice); //accepts user input, formats as float

  applePrice *= appleNum; //finds total price of apples
  printf("The cost of the apples is: %f", applePrice); 
  //outputs price of apples
  
  return 0;
}