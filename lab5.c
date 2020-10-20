#include "lab5.h"

 int readPosNum()
 {
   int theNum = -1;
   
   while (theNum < 1)
   {
     printf("Enter a valid integer ");
     scanf("%d", &theNum);
     if (theNum < 1)
     {
       printf("Invalid\n");
     }
     
     
   }
   return theNum;
  }
   

 
int menu()
{
  int choice = 0;
  do
  {
    printf("The menu choices are\n");
    printf("1. Enter a new number\n");
    printf("2. Print the number of odd digits, even digits and zeros in the integer\n");
    printf("3. Print the prime numbers between 2 and the integer (inclusive)\n");
    printf("4. Print the number in reverse order\n");
    printf("5. Quit the program\n");
    printf("Choose: ");
    scanf("%d", &choice);

    if (choice == '5')
    {
      printf("Good Bye\n");
    }
    if (choice < 1 || choice >5)
    {
      printf("Invalid choice \n");
    }

    

  

    
    
  }while (choice < 1 || choice > 5);
  return choice;
}


void oddEvenZero(int theNum)
{
  int od = 0, ed = 0, zeros = 0;
  while (theNum > 0)
  {
    int rem = theNum % 10;
    if (rem == 0)
    {
      zeros++;
    }
    else if (rem % 2 == 0)
    {
      ed++;
    }
    else 
    {
      od++;
    }
    theNum = theNum/10;
  }
  
  printf("The number has %d of odd digits\n",od);
  printf("The number has %d of even digits\n", ed);
  printf("The number has %d of zeros\n", zeros);

}

void printReverse(int theNum)
{
  int rev = 0 , remainder;
  printf("Reversed order: " );
  while (theNum != 0) 
  {
    remainder= theNum % 10;
    
    printf("%d", remainder);
    theNum= theNum /10;

  }
  
  printf("\n");

}


void printPrimes(int theNum)
{
  int low = 2, i,j, Prime = 1;
  printf("The prime numbers between %d and the %d are: \n", 2, theNum);
  for (i=2; i < theNum; ++i)
  {
    Prime=1;
    for(j=2; j < i; ++j)
    {
      if (i % j == 0) 
      {
        Prime=0;
      }      
    }
    if (Prime)
    {
      printf("%d ", i);
    }   
  }
  printf("\n");
}

