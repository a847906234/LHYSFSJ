#include <stdio.h>
#define N 9
int main(void)
{
    int a[N] = {6,5,8,7,9,4,3,1,2};
    for(int i=1;i<N;i++)
    {
        int j, key=a[i];
        for(j=i-1;j>=0;j--)
        {
            if(a[j]>key)
            {
                a[j+1]=a[j];
            }else
            {
                break;
            }
        }
        a[j+1]=key;
    }
    for(int i=0;i<N;i++)

    printf("%d",a[i]);

    return 0;
}