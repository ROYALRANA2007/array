#include <stdio.h>
void subset(int arr1[], int arr2[], int n1, int n2)
{
    int i,found;
    for (i = 0; i < n2; i++)

    {
        found=0;
        for(int j = 0; j < n1; j++)
        {
            if (arr1[i] == arr2[j])
            {
               found=1;
                break;
            }
        }
        if (found == 0)
        {
            printf("arr2 is NOT a subset of arr1\n");
            return;
        }
    }

    
        printf("arr2 is a subset of arr1\n");

}
int main()
{
    int arr1[] = {8, 4, 45, 75, 44, 6};
    int arr2[] = {8 ,2, 45, 75, 44,6};
    int n1 = sizeof arr1 / sizeof arr1[0];
    int n2 = sizeof arr2 / sizeof arr2[0];
    subset( arr1,arr2, n1, n2);
    return 0;
}
