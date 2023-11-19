#include<stdio.h>
//ASCII值
// int main ()
// {
//      printf("%c",65 + 32);
//      return 0;
// }

// //字符转ASCII值;
// int main ()
// {
//     char c = 0;
//     printf("请输入一个字符: ");
//     scanf("%c",&c);
//     printf("%c 的 ASCII 为 %d",c,c);
//     return 0;
    
// }

//打印出ASCII值为32-127的字符
int main()
{
    int i = 0;
    for(i = 32; i <= 127; i++)
    {  
       printf("%c",i);
    if (i % 16 == 15)
       printf("\n");
    }
    return 0;
}