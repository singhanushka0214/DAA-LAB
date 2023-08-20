//Guess Game
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
  int number; 
  int guess;
  int nguess=0;
  srand(time(0)); 
  number = rand()%10+1; 
//   printf("The number is %d\n", number);

  do
  {
    printf("Guess the number between 1 and 100 \n");
    scanf("%d", &guess);

    if(guess>number)
    {
      printf("Lower number please\n");
    }
    else if(guess<number) 
    {
      printf("Higher number please\n");
    }
    else
    {
      printf("You guessed it in %d attempts\n", nguess);
    }
    nguess++;
  }while(guess!=number);
  return 0;
}
