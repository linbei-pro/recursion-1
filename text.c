#include <stdio.h>

// 递归函数，计算数组元素的和
int calculateSum(int arr[], int n) {
    // 基本情况：数组为空时，和为0
    if (n <= 0) {
        return 0;
    }
    // 递归情况：当前元素加上剩余元素的和
    else {
        return arr[n - 1] + calculateSum(arr, n - 1);
    }
}

int main() {
    int arr[] = { 1, 2, 3, 4, 5 };
    int size = sizeof(arr) / sizeof(arr[0]);

    // 调用递归函数计算数组元素的和
    int sum = calculateSum(arr, size);

    printf("数组元素的和为: %d\n", sum);

    return 0;
}
