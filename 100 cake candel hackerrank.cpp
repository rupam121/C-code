#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int n;
    scanf("%d", &n);
    
    int h, hm, c;
    c = 0; hm = 0;
    
    for (int idx = 0; idx < n; idx++)
    {
        scanf("%d", &h);
        
        if (h > hm)
        {
            hm = h;
            c = 1;
        }
        else if (h == hm)
        {
            c++;
        }
    }
    printf("%d .. %d ", c,hm);
    
    return 0;
}
