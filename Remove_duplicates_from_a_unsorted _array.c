#include<stdio.h>
Remove_duplicates_from_a_sorted_array(int arr[],int n)
{
    int count[100],visted[100],i;
    for ( i = 0; i < n; i++)
    {
        count[arr[i]]++;
        
    }
    for ( i = 0; i < n; i++)
    {
        if(visted[arr[i]]!=1)
        {

                visted[arr[i]]=1;
                printf("%d ",arr[i]);
        }
         

    }
} 
int main()
    {
        int arr[]={1,2,2,3,4,5,5,6,7,7};
        int n=sizeof arr/sizeof arr[0];
        Remove_duplicates_from_a_sorted_array(arr,n);
        return 0;
    }
    
    
