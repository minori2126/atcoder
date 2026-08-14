#include<stdio.h>
#include<stdlib.h>

int main(){
    int N,Q,top=0;
    scanf("%d %d",&N,&Q);
    
    int* A=(int*)calloc(N,sizeof(int));
    for(int i=0;i<N;i++){
        A[i]=i+1;
    }

    for(int i=0;i<Q;i++){
        int type;
        scanf("%d",&type);
        if(type==1){
            int p,x;
            scanf("%d %d",&p,&x);
            A[(p-1+top)%N]=x;
        }else if(type==2){
            int p;
            scanf("%d",&p);
            printf("%d\n",A[(p-1+top)%N]);
        }else if(type==3){
            int k;
            scanf("%d",&k);
            top=(top+k)%N;
        }
    }

    free(A);
    return 0;
}