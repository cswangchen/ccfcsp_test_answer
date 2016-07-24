#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;//n是天数
    int i;//i无实际含义
    int num;//num代表折点数

    num=0;
    scanf("%d",&n);//输入天数
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);//输入每天销售额
    }

    for(i=1;i<n-1;i++)
    {
        if(((a[i-1]>a[i])&&(a[i+1]>a[i]))||((a[i-1]<a[i])&&(a[i+1]<a[i])))//发现折点
        {
            num=num+1;//折点数加一
        }
    }

    printf("%d",num);//输出折点数

    return 0;
}
