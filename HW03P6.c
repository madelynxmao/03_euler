/*
Madelyn Mao
Systems Level Programming
HW03P6 -- Eul Up Your C Engine
2020-09-29
*/
//Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.

#include<stdio.h>
#include<math.h>
#include<stdlib.h> 

//sum of squares --> formula is (n)(n+1)(2n+1)/6
int sum_of_squares(int n){
    return n * (n+1) * (2 * n + 1) / 6;
}

//square of the sum --> [(n)(n+1)]^2
int square_of_sum(int n){
    return pow(n * (n+1) / 2,2);
}
//subtract in main
int main(){
    int ans = abs(sum_of_squares(100) - square_of_sum(100));
    printf("%i\n",ans);
    return 0;
}
