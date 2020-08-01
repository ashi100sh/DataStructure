/* Tower of hanoi 
Solving this problem using recrusion 
*/
#include <stdio.h>
long long steps;
/* Initally assuming A-> From , B -> Aux and C -> dex */
void TOH(int number, char A, char B, char C) {
    if(number==0) return;
    /* Moving n-1 discs from A to B using C */
    TOH(number-1, A, C, B);
    /* Moving largest single remaing disc from Start to End point */
    printf("Moving - %c to %c\n", A, C);
    steps++;
    /* Moving n-1 discs from B to C using A */
    TOH(number-1, B, A, C);
}


int main(void) {

    int number_of_disc;
    scanf("%d", &number_of_disc);

    TOH(number_of_disc, 'A', 'B', 'C');
    printf("Number of steps:%lld\n", steps);
}
