#include <stdio.h>
#include <math.h>

int main() {
    int n, min_p = 0, max_p = 0;
    scanf("%d", &n);  // 输入正偶数

    // 遍历寻找最小素数对
    for (int i = 2; i <= n / 2; i++) {
        // 判断i是否为素数
        int is_i_prime = 1;
        if (i < 2) {
            is_i_prime = 0;
        } else {
            for (int j = 2; j <= sqrt(i); j++) {
                if (i % j == 0) {
                    is_i_prime = 0;
                    break;
                }
            }
        }

        // 如果i是素数，判断n-i是否为素数
        if (is_i_prime) {
            int other = n - i;
            int is_other_prime = 1;
            if (other < 2) {
                is_other_prime = 0;
            } else {
                for (int j = 2; j <= sqrt(other); j++) {
                    if (other % j == 0) {
                        is_other_prime = 0;
                        break;
                    }
                }
            }

            // 找到符合条件的素数对
            if (is_other_prime) {
                min_p = i;
                max_p = other;
                break;  // 找到最小素数后退出循环
            }
        }
    }

    printf("%d %d\n", min_p, max_p);
    return 0;
}
