#include <stdio.h>
#include <stdlib.h>

int main(void){
    int n,k;
    scanf("%d %d",&n,&k);
    int *arr=malloc(sizeof(int)*n);
    if(arr==NULL)
        return 1;
    int *ans=malloc(sizeof(int)*n);
    if(ans==NULL)
        return 1;
    int i=0;
    while(i<n){
        scanf("%d",&arr[i]);
        i++;
    }
    i=0;
    while(i<k){
        ans[i]=arr[n-k+i];
        i++;
    }
    int j=0;
    while(j<n-k){
        ans[i]=arr[j];
        i++;
        j++;
    }
    i=0;
    while(i<n){
        printf("%d",ans[i]);
        printf("%c",' ');
        i++;
    }
}