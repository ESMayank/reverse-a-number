#include <stdio.h>
int reverse(int num){
int rev=0,rem;

while(num!=0){
    rem = num%10;
    rev = rev*10+rem;
    num=num/10;
}
return rev;
}
int main(){
    int num=4567;
    int rev = reverse(num);
    printf("the number is %d",rev);
    return 0;
}
