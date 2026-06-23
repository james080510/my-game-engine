#include<iostream>
using namespace std;

//常量的定义方式
//1.#define 宏常量
//2.const修饰的变量

//1.#define 宏常量
#define Day 7

int main() {

	system("chcp 65001 > nul");

	cout << "一周总共有:" << Day << "日" << endl;

	system("pause");

	return 0;
}