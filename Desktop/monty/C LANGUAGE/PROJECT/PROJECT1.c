#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Program for guesseing random number given by computer

int main() {
    // Seed the random number generator
    srand(time(0));
    
    // Generate a random number between 1 and 100
    int random_Number = (rand() % 100) + 1;
    int guessed_number,no_of_guesses=0;
    
    // Print the random number
   // printf("Random number between 1 and 100: %d\n", randomNumber);
   do
   {
    printf("ENTER A NUMBER");
    scanf("%d",&guessed_number);

    if (guessed_number>random_Number)
    {
        printf("Lower number please!\n");
    }
    else if(guessed_number<random_Number)
    printf("Higher number please!\n");

    else{
        printf("Congrats\n");
    }
    no_of_guesses++;
    
   } while (guessed_number!=random_Number);

   printf("you guessed the number in %d guesses\n",no_of_guesses);
   
    
    return 0;
}
