#include <stdio.h>

// �ݹ麯������������Ԫ�صĺ�
int calculateSum(int arr[], int n) {
    // �������������Ϊ��ʱ����Ϊ0
    if (n <= 0) {
        return 0;
    }
    // �ݹ��������ǰԪ�ؼ���ʣ��Ԫ�صĺ�
    else {
        return arr[n - 1] + calculateSum(arr, n - 1);
    }
}

int main() {
    int arr[] = { 1, 2, 3, 4, 5 };
    int size = sizeof(arr) / sizeof(arr[0]);

    // ���õݹ麯����������Ԫ�صĺ�
    int sum = calculateSum(arr, size);

    printf("����Ԫ�صĺ�Ϊ: %d\n", sum);

    return 0;
}
