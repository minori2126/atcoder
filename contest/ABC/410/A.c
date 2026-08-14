#include<stdio.h>
#include<stdlib.h>

int main(){
    int N,K,count=0;
    scanf("%d",&N);

    int* A=(int*)calloc(N,sizeof(int));
    for(int i=0;i<N;i++){
        scanf("%d",A+i);
    }

    scanf("%d",&K);

    for(int i=0;i<N;i++){
        if(A[i]>=K)count++;
    }
    free(A);
    printf("%d",count);
    return 0;
}