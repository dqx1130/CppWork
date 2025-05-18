/*  线性筛质数是一种高效生成质数的方法，其核心思想是确保每个合数只被其最小质因数筛除一次。以下是其原理的详细解释：
    1. 基本思路
    线性筛质数通过遍历每个数，并利用已知的质数表来标记合数，确保每个合数只被标记一次。
    2. 具体步骤
    初始化：创建一个布尔数组 is_prime,初始值为 True,表示所有数都是质数。再创建一个空列表 primes 用于存储质数。
    遍历:从2开始遍历每个数i。
    如果 is_prime[i] 为 True,则 i 是质数，将其加入 primes 列表。
    遍历已知的质数 p,将 i * p 标记为合数。如果 i 能被 p 整除，则停止遍历，确保每个合数只被其最小质因数标记。
    3. 关键点
    合数标记：每个合数 i * p 只被其最小质因数 p 标记一次。
    提前终止：当 i 能被 p 整除时，停止内层循环，避免重复标记*/
#include <stdio.h>
int main(){
    //输入
    int n;
    scanf("%d",&n);
    //初始化 all 和 primes 数组
    int all[n];
    int primes[n];
    for (int i = 0 ; i <= n; i++){
        all[i] = 1;
    }
    //遍历
    int b = 0;
    for (int i = 2 ; i <= n; i++){
        if (all[i] == 1){
            //b自增，用于控制primes数组的下标和统计质数的个数
            primes[b] = i;
            b++;
        }
        for(int j = 0; j < b;j++){
            if (i * primes[j] > n){
                break;
            }
            all[i * primes[j]] = 0;
            if (i % primes[j] == 0){
                break;
            }
        }
    }
    //输出
    printf("%d\n", b);
}
