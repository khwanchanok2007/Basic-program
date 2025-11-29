#include <stdio.h>

int main() {
    int N, i;

    if(scanf("%d", &N) != 1){
        return 1;
    }
    
    for (i = 0; i < N; i++)
    {
        printf("Hello Loop!\n");
    }
    
    if (N <= 0)
    {
        printf("Error");
    }
    
    return 0;
}