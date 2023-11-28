#include <stdio.h>
// 三目操作符
//  int main()
//  {
//      int a = 0;
//      int b = 0;
//      scanf("%d",&a);
//      // if(a > 5)
//      //   b = 3;
//      // else
//      //   b = -3;
//      b = (a > 5 ? 3 : -3);//省略了if else语句

//     return 0;
// }

// //判断闰年
// int main()
// {
//     int year = 0;
//     scanf("%d",&year);
//     if(((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
//        printf("是闰年");
//     else
//        printf("不是闰年");

//     return 0;
// }

// switch
//  //计算除3的余数
//  int main()
//  {
//      int num = 0;
//      scanf("%d",&num);
//      switch(num % 3)
//      {
//      case 0:
//         printf("余数是0\n");
//         break;
//      case 1:
//         printf("余数是1\n");
//         break;
//      case 2:
//         printf("余数是2\n");
//         break;
//      }

//     return 0;
// }

// int main()
// {
//     int day = 0;
//     scanf("%d",&day);
//     switch(day)
//     {
//     case 1:
//          printf("星期一");
//          break;
//     case 2:
//          printf("星期二");
//          break;
//     case 3:
//          printf("星期三");
//          break;
//     case 4:
//          printf("星期四");
//          break;
//     case 5:
//          printf("星期五");
//          break;
//     case 6:
//          printf("星期六");
//          break;
//     case 7:
//          printf("星期天");
//          break;
//     default:
//          printf("输入错误,请输入1-7的数字");
//     }

//     return 0;

// }

// int main()
// {
//     int day = 0;
//     scanf("%d",&day);
//     switch(day)
//     {
//     case 1:
//     case 2:
//     case 3:
//     case 4:
//     case 5:
//          printf("工作日");
//          break;
//     case 6:
//     case 7:
//          printf("休息日");
//          break;
//     default:
//          printf("输入错误,请输入1-7的数字");
//     }

//     return 0;

// }

// // while 循环
// // 打印1-10
// int main()
// {
//     int a = 1;
//     while (a <= 10)
//     {
//         printf("%d\n", a);
//         a++;
//     }

//     return 0;
// }

// // 输入一个正的整数，逆序打印这个整数的每一位；
// int main()
// {
//     int n = 0;
//     scanf("%d", &n);
//     while (n)
//     {
//         printf("%d ", n % 10);
//         n = n / 10;
//     }

//     return 0;
// }

// for循环
//  int main()
//  {
//      int i = 0;
//      for(i = 1; i <= 10; i++)
//      {
//          printf("%d\n",i);
//      }
//      return 0;
//  }

// #include <stdio.h>

// int main()
// {
// 	int i = 0;
// 	for (i = 0; i<10; i++)
// 	{
// 		if (i = 5)
// 			printf("%d ", i);
// 	}
// 	return 0;
// }

// //写一个代码打印1-100之间所有3的倍数的数字
// int main()
// {
//    int i = 0;
//    for(i = 1; i <= 100; i++)
//    {
//     if(i % 3 == 0)
//     printf("%d ",i);
//    }
//    return 0;
// }

// //写代码将三个整数数按从大到小输出。
// int main()
// {
//     int a = 0;
//     int b = 0;
//     int c = 0;
//     scanf("%d %d %d",&a , &b, &c);
//     if(a > b > c)
//       printf("%d %d %d",a,b,c);
//     else if(a > c > b )
//       printf("%d %d %d",a,c,b);
//     else if(b > a > c)
//       printf("%d %d %d",b,a,c);
//     else if(b > c > a)
//       printf("%d %d %d",b,c,a);
//     else if(c > a > b)
//       printf("%d %d %d",c,a,b);
//     else
//       printf("%d %d %d",c,b,a);

//     return 0;
// }

// // 改进后
// int main()
// {
//     int a = 0;
//     int b = 0;
//     int c = 0;
//     scanf("%d%d%d", &a, &b, &c);
//     // 确定输出顺序a >= b >= c，a中放最大值
//     if (a < b)
//     {
//         int tmp = a;
//         a = b;
//         b = tmp;
//     } // a >= b
//     if (a < c)
//     {
//         int tmp = a;
//         a = c;
//         c = tmp;
//     } // a >= c
//     if (b < c)
//     {
//         int tmp = b;
//         b = c;
//         c = tmp;
//     } // b >= c;
//     printf("%d %d %d\n", a, b, c);

//     return 0;
// }

//计算1/1-1/2+1/3-1/4+1/5 …… + 1/99 - 1/100 的值，打印出结果
int main()
{
    int n = 0;
    int sign = 1;
    double sum = 0.0;
    for(n = 1; n <= 100; n++ )
    {
        sum +=  sign * (1.0)/n;
        sign = -sign;
    }
       printf("%lf",sum);
    return 0;
}

// 打印1000年到2000年之间的闰年
// int main()
// {
//     int year = 0;
//     for (year = 1000; year <= 2000; year++)
//     {
//         if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
//             printf("%d ", year);
//     }

//     return 0;
// }

// //数1-100的所有整数中出现多少个数字9
// int main()
// {
//     int count = 0;
//     for(int i = 1; i <= 100; i++)
//     {
//         if(i % 10 == 9)//个位数是9
//         count++;
//         if(i / 10 == 9)//十位数是9
//         count++;
//     }
//     printf("%d",count);
//     return 0;
// }

// // 求10个整数中的最大值
// int main()
// {
//     int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//     int i = 0;
//     int max = arr[0];
//     for (i = 0; i < 10; i++)

//     {
//         if (max < arr[i])
//         {
//             max = arr[i];
//         }
//     }
//     printf("%d\n", max);

//     return 0;
// }