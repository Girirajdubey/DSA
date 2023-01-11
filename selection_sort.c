//Selection sort 
/* Alogorithm 
Step 1 − Set MIN to location 0
Step 2 − Search the minimum element in the list
Step 3 − Swap with value at location MIN
Step 4 − Increment MIN to point to next element
Step 5 − Repeat until list is sorted
*/


#include <stdio.h>
void display(int arr[], int n)
{
    int i;
    printf("\n");
    for (i = 0; i <= n - 1; i++) 
    {

        printf("%5d", *(arr + i));
    }
}
void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
void selection(int arr[], int n)
{
    int i, j, min;
    for (i = 0; i < n - 1; i++)
    {
        printf("\n%d round", i);
        min = i;                
        for (j = i + 1; j < n; j++)
        {
            if (arr[min] > arr[j])
            {
                min = j;
            }
        }
        swap(&arr[i], &arr[min]);
        display(arr, n);
    }
}
int main()
{

    int a[100], n;
    printf("enter the size of an array");
    scanf("%d", &n);  
    printf("enter the array element");
    int i;
    for (i = 0; i < n; i++) // taking input from user 
    {
        printf("\nthe index is %d : ", i);
        scanf("%d", (a + i));
    }
    selection(a, n);
    display(a, n);
}