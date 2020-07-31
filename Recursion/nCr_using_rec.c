/* nCr = n!/r!(n-r)!
  Use pascal Trinage method 
             1              - 0C0
           1   1            - 1Cr -> 1C0  1C1
         1   2   1          - 2Cr -> 2C0  2C1 2C2
       1  3    3   1
     1  4   6    4   1

nCr = (n-1Cr-1) + (n-1Cr)
r is 0 ==> 1
n == r ==> 1
*/

#include <stdio.h>
/* Using Pascal Method */
int Combination(int n, int r) {
    if(r==0 || n == r) {
        return 1;
    } else {
        return Combination(n-1, r-1) + Combination(n-1, r);
    }
}
/* Using Factorial to cal nCr */
int fact(int n) {
    if (n<=1) 
        return 1;

    return fact(n-1) * n;
}

int Combination_using_Fact(int n, int r) {
    int num, den;
    num = fact(n);
    den = fact(r) * fact(n-r);

    return num/den;
}

int main() {
    int n,r;
    printf("Enter nCr..: ");
    scanf("%d %d", &n, &r);

    printf("%dC%d is %d\n", n,r,Combination(n,r));
    printf("%dC%d is %d\n", n,r,Combination_using_Fact(n,r));
    return 0;
}
