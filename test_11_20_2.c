#include<stdio.h>
#include<string.h>
#include<stdbool.h>
// //求字的长度
// int main()
// {
//     printf("%zd\n",strlen("abc"));
//     return 0;
// }


// //bool类型是用来表示真假的
// int main()
// {
//     bool flag = true;
//     if(flag)
//     {
//         printf("hehe\n");
//     }
//     return 0;
// }

// //各种数据类型的长度
// //sizeof--关键字
// int main()
// {
//     int a = 1;
//     printf("%zd\n",sizeof (a) );//4Byte = 32bit
//     return 0;
// }

// int main()
// {
//     printf("%zd\n",sizeof(void));//%zd
//     printf("%zd\n",sizeof(bool));
//     printf("%zd\n",sizeof(char));
//     printf("%zd\n",sizeof(short));
//     printf("%zd\n",sizeof(int));
//     printf("%zd\n",sizeof(long));
//     printf("%zd\n",sizeof(long long));
//     printf("%zd\n",sizeof(float));
//     printf("%zd\n",sizeof(double));
//     printf("%zd\n",sizeof(long double));
    
//     return 0;
  
// }

//unsigned int 的返回值是无符号整数，只能存放0或正整数
//%zd--size_z
//%d - 打印有符号整数
//%u - 打印无符号整数,好处：空间扩大一倍
// int main()
// {
//     unsigned int age = 10;
//     printf("%u\n", age);
//     return 0;
// }

//一个局部变量不初始化，默认是随机值；
//一个全局变量不初始化，默认是0；
//正常情况下，变量在创建的时候，要初始化，这是一个好的习惯

// int a = 100;
// int main()
// {
//     printf("%d\n",a);
//     return 0;
// }
//当全局变量与局部变量同名的时候，局部变量优先
int a = 100;
int main()
{
    int a = 10;   
    printf("%d\n",a);
    return 0;
}