#include <stdio.h>

void selectionSort(int *A,int n){
    printf("Running selection sort");
    for(int i=0;i<n-1;i++){
        int indexOfMin=i;
        for(int j=i+1;j<n;j++){
            if(A[j]<A[indexOfMin]){
                indexOfMin=j;
            }
        }

        //Swap
        int temp=A[i];
        A[i]=A[indexOfMin];
        A[indexOfMin]=temp;
    }

}



void printArray(int *A,int n ){
    for(int i=0;i<n;i++){
        printf("%d ",A[i]);
    }
    printf("\n"); 
}

int main(){
 // Input Array (There will be total n-1 passes. 5-1 = 4 in this case!)
    //  00  01  02  03  04
    // |03, 05, 02, 13, 12

    // After first pass
    //  00  01  02  03  04
    //  02,|05, 03, 13, 12

    // After second pass
    // 00  01  02  03  04
    // 02, 03,|05, 13, 12

    // After third pass
    // 00  01  02  03  04
    // 02, 03, 05,|13, 12

    // After fourth pass
    // 00  01  02  03  04
    // 02, 03, 05, 12,|13



    int A[]={10,5,6,78,55};
    int n=5;
    printArray(A,n);
    selectionSort(A,n);
    printf("\n"); 
    printArray(A,n);

}