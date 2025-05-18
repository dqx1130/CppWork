#include <stdio.h>
int main(){
    int n;
    double avg = 0.0;
    double arr[210];
    int res = 0;
    scanf("%d",&n);
    for (int i = 0; i < n; i++){
        scanf("%lf",&arr[i]);
        avg += arr[i]/(double)n;
        }
    for (int i = 0; i < n; i++){
        if (arr[i] < avg){
            res += 1;
        }
    }
    printf("%d\n",res);
    return 0;
}