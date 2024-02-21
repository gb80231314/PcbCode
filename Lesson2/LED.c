#include <reg52.h>  //包含特殊功能寄存器定义的头文件

sbit LED = P0^0;    //位地址声明，注意：sbit 必须小写、P 大写！
sbit ADDR0 = P1^0;
sbit ADDR1 = P1^1;
sbit ADDR2 = P1^2;
sbit ADDR3 = P1^3;
sbit ENLED = P1^4;

void main()       //任何一个 C 程序都必须有且仅有一个 main 函数
{                 //{}是成对存在的，在这里表示函数的起始和结束
    ENLED = 0;
    ADDR3 = 1;
    ADDR2 = 1;
    ADDR1 = 1;
    ADDR0 = 0;
		//点亮小灯
    //LED = 0;
	
		//熄灭小灯
		LED = 1;			//分号表示一条语句结束 
    while (1);    //程序停止在这里    
}

//在程序运行时，超出想运行的程序代码会出错从而可能导致单片机自动复位，
//通常在程序中加入一个死循环，让程序停留在我们希望的这个状态下，
//不要乱运行，有以下两种写法可以参考
// 第一种
// #include <reg52.h>  

// sbit LED = P0^0;    

// void main()
// {
//     while(1)
//     {                   
//         LED = 0;       
//     }
// }


// 第二种
// #include <reg52.h>  

// sbit LED = P0^0;    

// void main()
// {                  
//     LED = 0;       
//     while(1); 
// }
