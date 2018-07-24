#include <cs50.h>
#include <stdio.h>

unsigned long long int factorialize(int num)
{
        unsigned long long int res;

        // If num is less than 0, reject it
        if(num < 0)
        {
            res = -1;
            // return res;
        }

        // If num equals 0, factorial is 1
        else if (num == 0)
        {
            res = 1;
            // return res;
        }

        // Otherwise recursively solve
        else
        {
            res = (num * factorialize(num - 1));
            // return res;
        }
        return res;
}

int main(int argc, string argv[])
{
    if(argc != 2)
    {
        printf("Usage: ./factorialize <integer>\n");
        return 1;
    }

    int num = atoi(argv[1]);

    unsigned long long int res = factorialize(num);
    printf("%llu\n", res);

}