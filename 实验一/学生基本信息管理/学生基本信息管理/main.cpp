#include"CaoZuo.h"
#include"Student.h"

//记得初始化几个数据、、、、chuangjianshu n;;.......
void main(){
	CaoZuo A;
	A.n=0;初始化数据
	A.chuangjianshu=0;
	int r=0;//循环结束条件

	while(r==0){
		A.displaycaidan();//显示功能菜单
		if(A.n==1)//创建学生
			A.chuangjian();
		else if(A.n==2)//添加学生
			A.tianjia();
		else if(A.n==3)//查询学生信息
			A.chaxun();
		else if(A.n==4)//修改学生信息
			A.xiugai();
		else if(A.n==5)//删除学生信息
			A.shanchu();
		else if(A.n==6)
			A.xianshi();
		else if(A.n==7)//退出系统
			r=1;
		else//用户输入错误
			cout<<"无此功能！"<<endl;
	}
}