#include <stdio.h>
#define N 5

int search(int a[], int v, int l, int r)
{
    int i;
    
    for(i=l; i<=r; ++i)
        if(a[i]==v) return i;
        
    return -1;
}

int main()
{   
    int i = -1, a[N], v;
    
    printf("Enter the array elements: ");
    while(i<N-1 && scanf("%d ", &a[++i])==1 && !feof(stdin));
    
    printf("Enter the number to be searched for: ");
    scanf("%d", &v);
    
    printf("%d", search(a, v, 0, N-1));
    
    return 0;
}