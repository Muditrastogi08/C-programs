#include <stdio.h> 
int main(int argc, char const *argv[])


{ 
    char str[] = "mudit"; 
    printf("%20s\n", str); 
    printf("%-20s\n", str); 
    printf("%20.5s\n", str); 
    printf("%-20.5s\n", str); 
    return 0; 
}
