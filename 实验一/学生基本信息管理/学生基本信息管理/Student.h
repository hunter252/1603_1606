#pragma once
#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

//定义学生类
class Student
{
public:
	Student(void);
	//构造函数初始化学生信息
	Student(int x,string n,char xing,int nian,string ban,string yuan,string zhuan):
		xuehao(x),name(n),xingbie(xing),nianling(nian),banji(ban),xueyuan(yuan),zhuanye(zhuan){}
	~Student(void);
	//学生基本属性
	int xuehao;//学号
	string name;//姓名
	char xingbie;//性别
	int nianling;//年龄
	string banji;//班级
	string xueyuan;//学院
	string zhuanye;//专业

};

