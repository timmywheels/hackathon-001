#include <cs50.h>
#include <stdio.h>

int sumFibs(int num)
{

    int answer = 1;

    int a = 0; int b = 1; int f = 1;


    for(int i = 2; i <= num; i++)
    {
        f = a + b;

        a = b;

        b = f;

        if (f % 2 != 0 && f <= num)
        {
            //printf("Number: %i\n", f);
            answer += f;
        }

    }

    // printf("Number: %i\n", num);
    // printf("Answer: %i\n", answer);


    return answer;
}

int main(int argc, string argv[])
{
    if(argc != 2)
    {
        // printf("Please enter a number to factorialize:\n");
        return 1;
    }
    argv[0] = "1";

    int num = atoi(argv[1]);

    int myAnswer = sumFibs(num);

    printf("My answer: %i\n", myAnswer);
    return 0;
}

