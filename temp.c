#include<stdio.h>
int main(){
    int temp=0;
    for (int i=0;i<100000000;i++){
        temp++;
    }
printf("Counting till hundred mllion completed: %d",temp);
}