#include<stdio.h>
void toh(int n , char S , char D , char T){
    if(n>=1){
        toh(n-1,S,T,D);
        printf("\nmove top  disk from tower #%c to top of tower #%c",S,D);
        toh(n-1,T,D,S);
    }

}

int main(){
   // char S ,D ,T;         //  S--> Source , D--> Destination , T-->Temporary
    int n ; 
    scanf("%d",&n);
    toh(n,'S','D','T');



    return 0 ; 
}