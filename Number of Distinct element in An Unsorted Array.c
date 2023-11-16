/* Print number of distinct element in an unsorted array */

#include<stdio.h>
int main ()
{
    int a[] = {2,3,4,5,4,2,3,6,7,9,11,22,33,44,55,66,77};
    int n = 17;
    int count = n;
    int i,j;
    for(i = 0;i < n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i] == a[j])
            {
                count--;
                break;
            }
        }
    }
    printf("Distinct %d",count);
    return 0;

}
