#define _CRT_SECURE_NO_DEPRECATE


//5位运动员参加了10米台跳水比赛，有人让他们预测比赛结果
//A选手说：B第二，我第三；
//B选手说：我第二，E第四；
//C选手说：我第一，D第二；
//E选手说：我第四，A第一；
//比赛结束后，每位选手都说对了一半，请编程确定比赛的名次。

//#include<stdio.h>
//#include<stdlib.h>
//
//void panbie(int A, int B, int C, int D, int E)
//{
//	for (A = 1; A <= 5; ++A)
//	{
//		for (B = 1; B <= 5; ++B)
//		{
//			for (C = 1; C <= 5; ++C)
//			{
//				for (D = 1; D <= 5; ++D)
//				{
//					for (E = 1; E <= 5; ++E)
//					{
//						if ((B == 2) + (A == 3) == 1 &&
//							(B == 2) + (E == 4) == 1 &&
//							(C == 1) + (D == 2) == 1 &&
//							(C == 5) + (D == 3) == 1 &&
//							(E == 4) + (A == 1) == 1)
//						{
//							if (A*B*C*D*E == 120)
//							{
//								printf("A是第%d名\n", A);
//								printf("B是第%d名\n", B);
//								printf("C是第%d名\n", C);
//								printf("D是第%d名\n", D);
//								printf("E是第%d名\n", E);
//							}
//						}
//					}
//				}
//			}
//		}
//	}
//}
//
//int main()
//{
//	int A = 0;
//	int B = 0;
//	int C = 0;
//	int D = 0;
//	int E = 0;
//	panbie(A, B, C, D, E);
//
//	system("pause");
//	return 0;
//}


//日本某地发生了一件谋杀案，警察通过排查确定杀人凶手必为4个
//嫌疑犯的一个。以下为4个嫌疑犯的供词。
//A说：不是我。
//B说：是C。
//C说：是D。
//D说：C在胡说
//已知3个人说了真话，1个人说的是假话。
//现在请根据这些信息，写一个程序来确定到底谁是凶手。
//#include <stdio.h> 
//int main()
//{	
//	char killer;	
//	for(killer='A'; killer<='D'; killer++)
//		{		
//		if (((killer!='A') + (killer=='C') + (killer=='D') + (killer!='D'))==3)  	
//		{			printf("%c是凶手\n",killer);				
//		break;		
//		}	
//	}	return 0;
//}


//在屏幕上打印杨辉三角

#include <stdio.h>
#include <stdlib.h>
int main()
{
	int s = 1, h;                    // 数值和高度
	int i, j;                        // 循环计数
	scanf("%d", &h);                 // 输入层数
	printf("1\n");                   // 输出第一个 1
	for (i = 2; i <= h; s = 1, i++)         // 行数 i 从 2 到层高
	{
		printf("1 ");                // 第一个 1
		for (j = 1; j <= i - 2; j++) // 列位置 j 绕过第一个直接开始循环
			//printf("%d ", (s = (i - j) / j * s));
			printf("%d ", (s = (i - j) * s / j));
		printf("1\n");               // 最后一个 1，换行
	}
	getchar();                       // 暂停等待
	return 0;
}