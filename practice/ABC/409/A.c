#include<stdio.h>
#include<stdlib.h>

int main(){
    int N;
    char T[101],A[101];
    scanf("%d",&N);
    scanf("%s",T);
    scanf("%s",A);

    for(int i=0;i<N;i++){
        if(T[i]=='o'&&A[i]=='o'){
            printf("Yes\n");
            return 0;
        }
    }
    printf("No\n");
    return 0;
}