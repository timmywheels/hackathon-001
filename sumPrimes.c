#include <cs50.h>
#include <stdio.h>

bool isPrime(int number){
      for (int i = 2; i < number; i++){

          if(number < 2)
          {
              return false;
          }

          if(number % i == 0){
            //   printf("No\n");
                return false;
          }
       }
            // printf("Yes\n");
             return true;
}

int sumPrimes(int num)
{
    // printf("Number: %i\n", num);
    // printf("Answer: %i\n", answer);
    // int myAnswer = 0;

    int sum = 0;

    for(int i = 2; i <= num; i++)
    {
        if(isPrime(i))
        {
            sum += i;
        }
    }

    return sum;

}

int main(int argc, string argv[])
{
    if(argc != 2)
    {
        printf("Usage: ./sumPrimes <integer>\n");
        return 1;
    }

    int num = atoi(argv[1]);

    int myAnswer = sumPrimes(num);
    printf("%i\n", myAnswer);

    return 0;
}

