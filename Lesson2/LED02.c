#include<reg52.h>
sbit LED = P0^0;
sbit ADDR0 = P1^0;
sbit ADDR1 = P1^1;
sbit ADDR2 = P1^2;
sbit ADDR3 = P1^3;
sbit ENLED = P1^4;
void main()  //void 即函数类型
{
//以下为声明语句部分
unsigned int i = 0;  //定义一个无符号整型变量 i，并赋初值 0
//以下为执行语句部分
ENLED = 0;   //U3、U4两片74HC138总使能 
ADDR3 = 1;   //使能U3使之正常输出
ADDR2 = 1;   //经U3的Y6输出开启三极管Q16 
ADDR1 = 1;
ADDR0 = 0;
while (1)
{
LED = 0;                    //点亮小灯 
for (i=0; i<30000; i++);  	//延时一段时间 
LED = 1;                    //熄灭小灯 
for (i=0; i<30000; i++);  	//延时一段时间
}
}