#include <stdio.h>
#include <stdlib.h>

// 定义结构体存储 a, b, c 组合
typedef struct {
    int a;
    int b;
    int c;
} Combo;

// 比较函数，用于排序，按 abc 从小到大
int compare(const void *a, const void *b) {
    Combo *comboA = (Combo *)a;
    Combo *comboB = (Combo *)b;
    int abcA = comboA->a * 100 + comboA->b * 10 + comboA->c;
    int abcB = comboB->a * 100 + comboB->b * 10 + comboB->c;
    return abcA - abcB;
}

int main() {
    int n;
    scanf("%d", &n);

    Combo combos[1000]; // 存储所有满足条件的组合
    int count = 0;

    // 枚举 a, b, c 的可能取值
    for (int a = 1; a <= 9; a++) {
        for (int b = 0; b <= 9; b++) {
            for (int c = 0; c <= 9; c++) {
                if (101 * a + 20 * b + 101 * c == n) {
                    combos[count].a = a;
                    combos[count].b = b;
                    combos[count].c = c;
                    count++;
                }
            }
        }
    }

    // 对组合按 abc 从小到大排序
    qsort(combos, count, sizeof(Combo), compare);

    // 输出结果
    for (int i = 0; i < count; i++) {
        printf("%d %d %d\n", combos[i].a, combos[i].b, combos[i].c);
    }

    return 0;
}
