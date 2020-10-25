#include<stdio.h>
#include<math.h>
#include<stdlib.h> 

int part1(){
    int i;
    int ans = 0;
    for(i = 0; i < 1000; i++){
        if(i%3 == 0 || i %5 == 0 && i%15 != 0){
            ans = ans + i;
        }
    }
    printf("Sum of all the multiples of 3 or 5 below 1000: %i\n",ans);
    return 0;

}

//euclidian algorithm to find gcd
int gcd(int p, int q){
    if (p==0) return q;
    return gcd(q%p, p);
}

//lcm(a,b) x gcd(a,b) = a x b
int lcm(int p, int q){
    return (p*q)/gcd(p,q);
}

int part2(){
    int i;
    int ans = 1;
    for (int i = 1; i < 20; i++){
        ans = lcm(ans,i);
    }
    printf("Smallest positive number that is evenly divisible by all the numbers from 1 tp 20: %i\n",ans);
    
    return 0;
}

//sum of squares --> formula is (n)(n+1)(2n+1)/6
int sum_of_squares(int n){
    return n * (n+1) * (2 * n + 1) / 6;
}

//square of the sum --> [(n)(n+1)]^2
int square_of_sum(int n){
    return pow(n * (n+1) / 2,2);
}
//subtract in main
int part3(){
    int ans = abs(sum_of_squares(100) - square_of_sum(100));
    printf("Difference between the sum of the squares of the first one hundred natural numbers and the square of the sum: %i\n",ans);
    return 0;
}

int main(){
    part1();
    part2();
    part3();
}