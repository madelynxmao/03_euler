/*
Madelyn Mao
Systems Level Programming
HW03P5 -- Eul Up Your C Engine
2020-09-29
*/
//What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?

#include<stdio.h>

//euclidian algorithm to find gcd
int gcd(int p, int q){
    if (p==0) return q;
    return gcd(q%p, p);
}

//lcm(a,b) x gcd(a,b) = a x b
int lcm(int p, int q){
    return (p*q)/gcd(p,q);
}

int main(){
    int i;
    int ans = 1;
    for (int i = 1; i < 20; i++){
        ans = lcm(ans,i);
    }
    printf("%i\n",ans);
    
    return 0;
}
