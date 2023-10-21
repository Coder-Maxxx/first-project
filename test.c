#include <stdio.h>
// 函数
// int Add(int x, int y)
// {
//     int z = 0;
//     z = x + y;
//     return z;
// }

// or

// int Add(int x, int y)
// {
//     return (x + y);
// }
// int main()
// {
//     int n1 = 0;
//     int n2 = 0;
//     scanf("%d %d", &n1, &n2);

//     // int sum = n1 + n2
//     int sum = Add(n1, n2);
//     printf("%d\n", sum);

//     return 0;
// }

// 数组:一组相同类型元素的集合

int main()
{
    int arr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    // printf ("%d\n", arr[8]);
    int i = 0;
    while (i < 10)
    {
        printf("%d\n", arr[i]);
        i = i + 1;
    }

    return 0;
}
