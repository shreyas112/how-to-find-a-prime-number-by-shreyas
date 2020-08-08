#include <stdio.h>
int primenumber(int,int);
int main()
{
    int number;
    printf("Enter any possitive number:\n");
    scanf("%d",&number);
    printf("The number you have entered is %d.\n",number);
    int isAPrimeno = primenumber(number,2);
    if (isAPrimeno ==1) {
        printf("It is a prime number.\n");
    }
    else if (isAPrimeno ==0)
    {
        printf("It is not a prime number.\n");
    }
}
int primenumber(int n,int i)
{
    if(i == n)
        return 1;
    else if(n%i==0)
        return 0;
    else
        return primenumber(n,i+1);
}

