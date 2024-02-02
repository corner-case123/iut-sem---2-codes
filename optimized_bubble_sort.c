#include<stdio.h>
// github : first code
// optimization 01 : if ix == -1 after an iteration then the arr is sorted 
// so the sort terminates
// optimization 02 : each time the while loop runs till (last swap_index -1)
// this reduces the number of operation


int n ; 
void bubble(int* a ){
    int i = n-2 ;
    while(i>=0){
        int ix = -1 ;
        for(int  j=0;j<=i;j++){
            if (a[j] > a[j+1]){
                ix = j ;
                int t = a[j] ; a[j] = a[j+1] ; a[j+1] = t  ;
            }
        }
        if (ix == -1){
            return ; 
        }
        i = ix-1 ; 
    }
    return ;
}
int main(){
    scanf("%d",&n) ;
    int a[n] ;
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]) ;
    }
    bubble(a) ;
    for(int i=0;i<n;i++){
        printf("%d ",a[i]) ;
    }
    return 0 ;
}
