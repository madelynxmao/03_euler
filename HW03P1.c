/*
Madelyn Mao
Systems Level Programming
HW03P1 -- Eul Up Your C Engine
2020-09-29
*/
//Find the sum of all the multiples of 3 or 5 below 1000. -->233168
#include<stdio.h>

int main(){
    int i;
    int ans = 0;
    for(i = 0; i < 1000; i++){
        if(i%3 == 0 || i %5 == 0 && i%15 != 0){
            ans = ans + i;
        }
    
    }
    printf("%i\n",ans);
    return 0;

}
