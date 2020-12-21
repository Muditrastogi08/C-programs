#include<stdio.h>
int main(int argc, char const *argv[])
{
    char grade;
    printf("Enter the Grade\n");
    scanf("%c",&grade);

    switch (grade)
    {
    case 'A':
    printf("Marks obtained between 91 to 100\n");
     break;
    case 'B':
    printf("Marks obtained between 71 to 90\n");
     break;
    case 'C':
    printf("Marks obtained between 50 to 70\n");
    break;
    
    default:
    printf("Marks obtained less than 50");
        break;
    }
    
    
     
    return 0;
}
