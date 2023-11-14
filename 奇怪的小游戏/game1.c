//              1～100 猜数字游戏
//电脑产生一个随机数（1-100）
//猜数字
//猜大了
//猜小了
//直到猜对了，结束

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
void menu()
{
    printf("***************************\n");
    printf("********  1.play  *********\n");
    printf("********  0.exit  *********\n");
    printf("***************************\n");           
}

//0～RAND_MAX(32767)
void game()
{
   int guess = 0;
   //1.生成随机数
    //0~99 --> 1~100
    int ret = rand()%100+1;
    //printf("%d\n",ret);
    //2.猜数字
    while (1)
    {
    printf("请猜数字:>");
    scanf("%d",&guess);
    if(guess < ret)
    {
         printf("猜小了\n");
    }
    else if(guess > ret)
    {
         printf("猜大了\n");
    }
    else
    {
         printf("恭喜你，猜对了\n");
         break;
    }
    }   
}
//指针
//int *p = NULL;
//int a = 0;
int main()
{
    int input = 0;
    srand((unsigned int)time(NULL));
    do{
        menu();
        printf("请选择:>");
        scanf("%d",&input);
        switch(input)
        {
        case 1:
             game();//猜数字的整个逻辑
             break;
        case 0:
             printf("退出游戏\n");
             break;
        default:
             printf("选择错误\n");
             break;
        }
    }while (input);
    return 0;
}