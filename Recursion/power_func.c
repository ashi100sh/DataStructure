/* Power of (m,n)
Recursive condition :
power(n) = 1                 n=0 
        = power(m,n-1) *m    n>0

Optimize way :
power(n) = 1                     n = 0
        = power(m*m, n/2)        n is even
        = power(m*m, (n-1)/2)*m  n is odd

Udemy - Abdul Bari 
*/
#include <stdio.h>
long long power(int m, int n) {
    if (n == 0) {
        return 1;
    }
    return power(m, n-1)*m;
}

long long power1(int m, int n) {
    if (n == 0) {
        return 1;
    }

    if (n%2 == 0) {
        return power1(m*m, n/2);
    } else {
        return m*power1(m*m, (n-1)/2);
    }
}

int main(void)
{
    int m,n;
    scanf("%d %d", &m, &n);
    printf("power(%d,%d) = %lld\n",m,n, power(m,n));
    printf("power1(%d,%d) = %lld\n",m,n, power1(m,n));
    return 0;
}
