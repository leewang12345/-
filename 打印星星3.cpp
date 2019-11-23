// 打印星星.cpp :效果图如下
	//        *                   0  1     6
	//      * * *                 1  3     5  
	//    * * * * *               2  5     4
   //	* * * * * * *             3  7     3 
//    * * * * * * * * *           4  9     2
//  * * * * * * * * * * *         5  11    1
//* * * * * * * * * * * * *       6  13    0 
//                                n  2n+1   row-n-1
#include <iostream>
#include <Windows.h>
#include <stdio.h>
using namespace std;
int main()
{
	int row = 0;
	int i, j,k;
	cout << "请输入行数：";
	cin >> row;
	for (i = 0; i < row; i++) {
		for (k = 0; k < row - i - 1;k++) {
						cout << "  ";
		}
		for (j = 0; j < 2*i + 1; j++) {		
			cout << "* ";
		}
		cout << endl;
	}
	system("pause");
}


