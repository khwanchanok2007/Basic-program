#include <stdio.h>
int main()
{
    int score ;

    if (scanf("%d", &score) != 1)
    {
        return 1 ;
    }
    if (score >= 80)
    {
        printf("grade A") ;
    }
    else if (score >= 70)
    {
        printf("grade B") ;
    }
    else if (score >= 60)
    {
        printf("grade C") ;
    }
    else if (score >= 50)
    {
        printf("grade D") ;
    }
    else
    {
        printf("grade F") ;
    }
    return 0 ;
}