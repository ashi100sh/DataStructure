/* Taylor series :
  e^x = 1 + (x/1) + (x^2/2!) + (x^3/3!) + (x^4/4!) + ..... n term
Udemy -  Abdul Bari 
*/

#include <stdio.h>

/*Method 2:
e^x = 1 + x/1[1+x/2[1+x/3]....
*/
double taylor1(int x, int n) {
    static double s;
    if (n == 0) 
        return s;
    s= 1 + x*s/n;
    return taylor1(x, n-1);
}
/* Method : Iterative Method
*/
double Itaylor(int x, int n) {
    double sum = 0;
    double pow = 1;
    double frac = 1;
    for(int i=1; i<=n; i++) {
        sum=sum+(pow/frac);
        pow=pow*x;
        frac=frac*i;
    }
    return sum;
}
double taylor(int x, int n) {
    static double p = 1, f = 1;
    double r;
    if(n == 0) 
        return 1;

    r = taylor(x, n-1);
    p = p *x;
    f = f *n;

    return r+p/f;
}
int main(void) {
    int x, n;
    scanf("%d %d", &x, &n);
    printf("Taylor Series Method1: %lf\n", taylor(x,n));
    printf("Taylor Series Method1: %lf\n", taylor1(x,n));
    printf("Taylor Series Method1: %lf\n", Itaylor(x,n));

    return 0;
}
