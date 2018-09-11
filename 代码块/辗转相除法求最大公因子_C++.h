
#include"pch.h"
#include<iostream>
#include<fstream>
#include<string>

using namespace std;
/*
	求两个正整数的最大公因子。
	我们采用欧几里德算法来求最大公因子，其算法是：
	（1）输入两个正整数 m和 n.
	 (2) 用 m 除以 n,余数为 r, 如果r  等于0，则n 是最大的公因子，算法结束，否则（3）.
	（3）把 n 赋给 m,把 r 赋给 n,转（2）.

*/


int maxFactor(int , int );

int main() {
	int m, n;

	cout << "Input no one integer:";
	cin >> m;
	cout << "Input no two integer:";
	cin >> n;
	cout << "2个正整数的最大公因子是:" <<maxFactor(m, n)<<endl;
	return 0;
}

int maxFactor(int m, int n) {
	int r = 0;
	while (n)
	{
		r = m % n;
		m = n;
		n = r;
	}
	return m;
}
