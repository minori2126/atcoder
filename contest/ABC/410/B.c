#include<stdio.h>
#include<stdlib.h>

int main(){
    int N,Q;
    scanf("%d %d",&N,&Q);

    int* x=(int*)calloc(Q,sizeof(int));
    for(int i=0;i<N;i++){
        scanf("%d",x+i);
    }

    int* box=(int*)calloc(N,sizeof(int));
    int* B=(int*)calloc(Q,sizeof(int));

    for(int i=0;i<Q;i++){
        if(x[i]!=0){
            box[x[i]-1]+=1;
            B[i]=x[i];
        }else{
            int min=box[N-1],mi=N-1;
            for(int j=N-2;j>=0;j--){
                if(box[j]<=min){
                    min=box[j];
                    mi=j;
                }
            }
            box[mi]++;
            B[i]=mi+1;
        }
    }

    for(int i=0;i<Q;i++){
        printf("%d ",B[i]);
    }
    return 0;
}