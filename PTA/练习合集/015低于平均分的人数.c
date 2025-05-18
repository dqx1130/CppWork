#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    double arr[n];
    double sum;
    for(int i = 0 ; i < n ; i ++){
        scanf("%lf",&arr[i]);
        sum += arr[i];
    }
    double avg;
    avg = sum / n;
    int cnt = 0;
    for (int i = 0 ; i < n ; i ++){
        if (arr[i] < avg){
            cnt ++;
        }
    }
    printf("%d",cnt);
}