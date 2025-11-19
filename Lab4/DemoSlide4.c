#include <stdio.h>
#include <math.h>

int main(){
    int n, S = 0;
    printf("Nhap n: ");
    scanf("%d",&n);
    //vong lap for tong so le
    for(int i = 0; i< n; i++){
        //tong le la !=0 and tong chan la ==0
        if(i%2!=0){
            S+=i;
        }
    }
    printf("Tong so le: %d",S);
    return 0;
}