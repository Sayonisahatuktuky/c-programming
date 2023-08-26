#include<stdio.h>
int sum(int n){
if(n == 1){
return 1;
}else{
return n + sum(n-1);
}
}
int main(){
int n;
printf("Enter a positive integer 'n': ");
scanf("%d", &n);
if(n <= 0){
printf("Please Enter Positive Number");
}
int result = sum(n);
printf("The sum of numbers from 1 to %d is: %d\n", n, result);
return 0;
}
