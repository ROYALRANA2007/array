#include <stdio.h>
void all_non_repeating_elements(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n; i++)
    {
        int count = 0, cur = arr[i];
        
        
            for (j = 0; j < n; j++)
            {
                if (arr[j] == cur)
                {
                    count++;
                }
            }
            if(count==1)
        printf(" %d",arr[i]);
        
        
        
    }
}
    int main()
    {
        int arr[]={8,85,4,2,4,59,7,2,54,7,6,9,6,3,3,2};
        int n=sizeof arr/sizeof arr[0];
        all_non_repeating_elements(arr,n);
        return 0;
    }