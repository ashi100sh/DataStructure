/* Sum of N natural number using recursion 
   Sum(n) = 0          n=0
         => sum(n-1) + n  n>0
Udemy course -> Abdul Bari - DataStructure using C and C++
*/

#include <stdio.h>
/* Recursion Method */
int SumofNumber(int n) {
    if (n <= 0)
        return 0;
    return SumofNumber(n-1)+n;
}

/*Iteration Method */
int ISumofNumber(int n) {
    int sum = 0, i = 0; 
    while(i<=n) {
        sum = sum + i;
        i++;
    }
    printf("Sum of %d natural number: %d\n", n, sum); 
}

int main(void)
{
    int n;
    scanf("%d",&n);
    printf("Sum of %d natural number is %d\n", n, SumofNumber(n));
    ISumofNumber(n);
	return 0;
}
