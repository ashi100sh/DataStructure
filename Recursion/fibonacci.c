/* Fibonacci Series - 0 1 1 2 3 5 8 13
n = (n-1)+(n-2)

fib(n) = 0                  n=0
       = 1                  n=1
       = fib(n-1) + fib(n-2)    n>1
Udemy - Abdul Bari
*/

#include <stdio.h>
int F[100];
int Ifib(int n) {
    int sum = 0;
    int prev1 = 0;
    int prev2 = 1;
    if(n <=1) {
        return n;
    } else {
        while((n-1) != 0) {
            sum=prev1+prev2;
            prev1 = prev2;
            prev2 = sum; 
            n--;
        }
        return sum;
    }
}

int fib(int n) {
    if(n<=1)
        return n;

    return  fib(n-1) + fib(n-2);
}

int fibwithMemory(int n) {
    if(n<=1)  {
        F[n] = n;
        return n;
    }
    if(F[n] != -1) {
        return F[n];
    }

    F[n] = fib(n-1) + fib(n-2);
    return F[n];
    
}

int IfibPrint(int n) {
    int f[n+2];
    int i;

    f[0]=0;
    f[1]=1;
 
    for(i=2; i<=n; i++) {
        f[i] = f[i-1] + f[i-2];
    }
    printf("Series: "); 
    for(i=0; i<=n; i++) {
        printf("%d ", f[i]);
    }
    printf("\n");
    return f[n];
}
int main()
{
    int n;
    int i;
    scanf("%d", &n);
    printf("Fib:%d\n", Ifib(n));
    printf("Fib:%d\n", fib(n));
    printf("Fib:%d\n", IfibPrint(n));
    for(i=0 ; i<100; i++) {
        F[i] = -1;
    }
    printf("Fib:%d\n", fibwithMemory(n));

    return 0;
}
