#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);

    int prev, curr;
    scanf("%d", &prev);  // 读取第一天的气温

    int max_fluct = 0;
    for (int i = 1; i < n; i++) {
        scanf("%d", &curr);  // 读取第i+1天的气温
        int diff = abs(curr - prev);
        if (diff > max_fluct) {
            max_fluct = diff;
        }
        prev = curr;  // 更新前一天的气温为当前天的气温
    }

    printf("%d\n", max_fluct);
    return 0;
}
