#pragma once
#include"Student.h"

//定义学生类的基本操作
class CaoZuo{
public:
	CaoZuo(void){}
	//初始化学生类数组
	CaoZuo(Student t[100],int a,int b){
		for(int i=0;i<100;i++)
			t[i]=txz[i];
		n=a;
		chuangjianshu=b;
	}
	~CaoZuo(void);

	//定义对学生的操作
	void displaycaidan();//显示功能菜单
	void chuangjian();//创建学生
	void tianjia()//添加一个学生;
	void chaxun();//查询学生信息
	void xiugai();//修改学生信息
	void shanchu();//删除学生信息
	void xianshi();//显示学生信息

	Student txz[100];//存储学生信息
	int n;
	int chuangjianshu;//记录学生数量
};


