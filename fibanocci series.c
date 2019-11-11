#include<stdio.h>
int main()
{
    int n, i, num1, num2, num;
    num1 = 0;
    num2 = 1;
    printf("Enter number of terms: ");
    scanf("%d",&n);
    printf("First %d turms of Fibonacci series are:\n");
    for(i=0;i<n;i++){
        if(i<=1)
            num = i;
        else {
            num = num1 + num2;
            num1 = num2;
            num2 = num;
        }
        printf("%d ",num);
    }
    return 0;
}
