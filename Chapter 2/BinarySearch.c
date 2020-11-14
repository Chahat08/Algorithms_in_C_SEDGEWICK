#include <stdio.h>
#define N 5

int search(int a[], int v, int l, int r)
{
    while(l<=r)
    {
        int m = (l + r)/2;
        if(a[m]==v) return m;
        else if(a[m]<v) r=m-1;
        else l=m+1;
    }
        
    return -1;
}

int main()
{   
    int i = -1, a[N], v;
    
    printf("Enter the sorted array elements: ");
    while(i<N-1 && scanf("%d ", &a[++i])==1 && !feof(stdin));
    
    printf("Enter the number to be searched for: ");
    scanf("%d", &v);
    
    printf("%d", search(a, v, 0, N-1));
    
    return 0;
}
