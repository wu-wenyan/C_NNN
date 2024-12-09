#include <stdlib.h>
#include <stdio.h>
#include <math.h>
int NNN(int n, int counting){
    if (counting==1){
        return n;
    }
    else{
        int temp=0;
        temp=n*pow(10,counting-1);
        return (temp+NNN(n,counting-1));
    }
}

int main(){
    int n, ans, counting;
    scanf("%d",&n);
    counting = n;
    ans=NNN(n,counting);
    printf("\n%d",ans);
}
