/* Factorial of number n ! = 1*2*3....n 
0! = 1
1! = 1
Recursive condition :
fact(n) = 1                 n=0
        = fact(n-1) * n     n>0
Udemy - Abdul Bari 
*/
#include <stdio.h>
long long factorial(int n) {
    if (n == 0) {
        return 1;
    }
    return factorial(n-1)*n;
}

/* Iterative Method */
long long Ifactorial(int n) {
    long long sum=1, i=1;
    while(i<=n) {
        sum = sum *i;
        i++;
    }
    printf("Factorial of %d is %lld\n", n, sum); 
}

int main(void)
{
    int n;
    scanf("%d", &n);
    printf("%d! = %lld\n", n, factorial(n));
    Ifactorial(n);
    return 0;
}
