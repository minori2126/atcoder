#include<stdio.h>
#include<stdlib.h>

int main(){
    int N;
    scanf("%d",&N);
    int* A=(int*)calloc(N,sizeof(int));
    for(int i=0;i<N;i++){
        scanf("%d",A+i);
    }

    int x=-1,count=0;
    while(x<=count){
        count=0;
        x++;
        for(int i=0;i<N;i++){
            if(A[i]>=x)count++;
        }
    }
    printf("%d\n",x-1);
    free(A);
    return 0;
}