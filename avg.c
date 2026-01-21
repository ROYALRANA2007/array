#include<stdio.h>
void avg_of_array(int array[],int n)
{
    int i ;
    double sum=0;
    for ( i = 0; i < n; i++)
    {
        sum=sum + array[i];
    }
    double avg = sum / n;
printf("%.2f", avg);

    
}
int main()
{
    int array[]={2,1,3,5,8,6,4};
    int n=sizeof array /sizeof array[0];
    avg_of_array(array,n);
}