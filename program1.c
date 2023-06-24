/*For a given maximum input value n, create a function that outputs integers from 1 to n.
But, if an integer is divisible by three, then the number should be replaced with the word “Fizz.”
Numbers divisible by five should say “Buzz” instead. And numbers divisible by both three and five should say “FizzBuzz.”*\

#include <stdio.h>
int main() {
    int n;
    printf("enter number");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        if(i%3==0&&i%5==0)
        {
            printf("fizzbuzz");
        }
        else if(i%3==0)
        {
            printf("fizz");
        }
        else if(i%5==0)
        {
            printf("buzz");
        }
    }

    return 0;
}
