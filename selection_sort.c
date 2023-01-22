#include<stdio.h>
void display(int arr[] , int n ){
    int i ; 
    
    printf("\n");
    for(i=0 ; i<=n-1 ; i++){
        
        printf("%5d",*(arr+i));
    }
}
void Selection_sort(int arr[],int n){
    int i , j , min ,temp ;
    for(i=0 ; i<n ; i++){ //this loop try to findout the lowest value of respective number
        min= arr[i];
        printf("\n--------------");
        for(j=i ; j<n ; j++){
            if(min>arr[j]){
                min=arr[j];
                temp=arr[i];//swapping
                arr[i]=arr[j];
                arr[j]=temp;
            }
            display(arr,n);
            printf("\n+++++++++++++++++");
        }
    }
}


int main(){
    
    int arr[1000];
    int n;
    printf("enter the number of string");
    scanf("%d",&n);
    for(int i = 0 ; i<n ; i++){ 
        printf("\narray[%d]  ",i);
        scanf("%d",&arr[i]);
    }
    
    display(arr,n);
    Selection_sort(arr,n);

    return 0 ;
}
