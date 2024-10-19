#include<iostream>
#include<stdio.h>
void func(int n)
{
    for (int i = 0; i < n / 2; i++)
    {
        if (n % i == 0)
            return 0;
    }
}
int main(){
func(13);
}