#include <stdio.h>
#include <conio.h>
int main(int argc, char const *argv[])

{    

    int n1, n2, sum;
    
    printf("Enter two integers:\n ");
    scanf("%d %d", &n1, &n2);

    sum = n1 + n2;      
    
    printf("%d + %d = %d", n1, n2, sum);
    return 0;
}
