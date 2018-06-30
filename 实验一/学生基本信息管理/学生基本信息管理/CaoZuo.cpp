#include "CaoZuo.h"


CaoZuo::~CaoZuo(void)
{
}

void CaoZuo::displaycaidan(){//调用该函数显示菜单
	cout<<endl;
	//功能菜单
	cout<<"请选择下面一个项目："<<endl<<"1 创建"<<endl
		<<"2 添加"<<endl<<"3 查询"<<endl<<"4 修改"<<endl
		<<"5 删除"<<endl<<"6 显示"<<endl
		<<"7 退出"<<endl<<"请选择：";
	//输入对应功能的数字
	cin>>n;
	cout<<endl;
}

//初始创建学生，一次可创建指定数量的学生
void CaoZuo::chuangjian(){

	//询问用户想要创建的学生数量
	cout<<"请输入你想创建的个数:";
	cin>>chuangjianshu;
	//如果输入小于1，给出错提示
	if( chuangjianshu<1 ){
		exit(1);
		cout<<"输入错误！创建数不能小于1！"<<endl;
	}
	//循环创建学生
	for(int i=0;i<chuangjianshu;i++){
	//输入学生的各项信息
		cout<<"请输入学号:"; cin>>txz[i].xuehao;
	    	cout<<"姓名:"; cin>>txz[i].name;
		cout<<"性别:"; cin>>txz[i].xingbie;
		cout<<"年龄:"; cin>>txz[i].nianling;
		cout<<"班级:"; cin>>txz[i].banji;
		cout<<"学院:"; cin>>txz[i].xueyuan;
		cout<<"专业:"; cin>>txz[i].zhuanye;
	}
}

//添加一个学生信息
void CaoZuo::tianjia(){
//输入学生的相关信息
	cout<<"请输入学号:"; cin>>txz[chuangjianshu].xuehao;
	cout<<"姓名:"; cin>>txz[chuangjianshu].name;
	cout<<"性别:"; cin>>txz[chuangjianshu].xingbie;
	cout<<"年龄:"; cin>>txz[chuangjianshu].nianling;
	cout<<"班级:"; cin>>txz[chuangjianshu].banji;
	cout<<"学院:"; cin>>txz[chuangjianshu].xueyuan;
	cout<<"专业:"; cin>>txz[chuangjianshu].zhuanye;

//增加学生数量
	chuangjianshu++;

}

//查询指定学生信息
void CaoZuo::chaxun(){
	//尚未添加学生时
	if( chuangjianshu==0 ){
		cout<<"学生组信息为空，无法查询！"<<endl;
	}
	//已添加学生信息
	else{
		int p;//标记用户的选项
		cout<<"请选择您想查询的方式（1 学号，2 班级和专业）：";//提供两种查询方式：1.按学号2.按班级与专业综合查询
		cin>>p;//用户输入选项
		//输入不合法
		if(p!=1 && p!=2){
			cout<<"输入错误！";
		}
		else{
			//按学号查询
			if(p==1){
				int n;
				cout<<"请输入您想查找的学号:";//提示用户输入学生学号
				cin>>n;
				int p=0;

				for(int i=0;i<chuangjianshu;i++){
					//若该学生存在
					if( n==txz[i].xuehao ){
						cout<<"查找成功！"<<endl;//提示查找成功，显示该学生信息
							cout<<txz[i].xuehao<<setw(5)<<txz[i].name<<setw(5)<<txz[i].xingbie<<
							setw(5)<<txz[i].nianling<<setw(5)<<txz[i].banji<<setw(5)<<txz[i].xueyuan
							<<setw(5)<<txz[i].zhuanye<<endl;

						p=1;
						break;//结束循环
					}
				}
				if(p==0){//该学生不存在
					cout<<"查找失败，无此信息！"<<endl;
				}
			}
			//按班级和专业综合查询
			else{
				string z,b;
				cout<<"请输入您想查找的专业和班级:";//提示用户输入学生班级与专业
				cin>>z>>b;//用户输入信息
				int p=0;

				for(int i=0;i<chuangjianshu;i++){
					if( b==txz[i].banji && z==txz[i].zhuanye ){//若该学生存在
						cout<<"查找成功！"<<endl;//提示查询成功并显示学生信息
						cout<<txz[i].xuehao<<setw(15)<<txz[i].name<<setw(15)<<txz[i].xingbie<<
							setw(15)<<txz[i].nianling<<setw(15)<<txz[i].banji<<setw(15)<<txz[i].xueyuan
							<<setw(15)<<txz[i].zhuanye<<endl;

						p=1;
						break;
					}
				}
				if(p==0){
					cout<<"查找失败，无此信息！"<<endl;
				}
			}
		}
	}
}

//修改学生信息
void CaoZuo::xiugai(){
	int n;
	cout<<"请输入您想修改的学生的学号：";//提示用户输入想要修改学生的学号
	cin>>n;//用户输入信息
	int m=0;

	for(int i=0;i<chuangjianshu;i++){
		if( n==txz[i].xuehao ){//该学生存在
			string n;//姓名
			char xing;//性别
			int nian;//年龄
			string ban;//班级
			string yuan;//学院
			string zhuan;//专业
			//用户输入各项信息
			cout<<"修改后的："<<endl;
			cout<<"姓名:"; cin>>n;
			cout<<"性别:"; cin>>xing;
			cout<<"年龄:"; cin>>nian;
			cout<<"班级:"; cin>>ban;
			cout<<"学院:"; cin>>yuan;
			cout<<"专业:"; cin>>zhuan;
			
			char p;
			//询问用户是否确认修改
			cout<<"确认修改？(y 修改，n 不修改）：";//y:是 n:否
			cin>>p;//用户输入选择结果
			if(p=='y'){//用户选择确认修改
				//将该学生信息改为用户输入的信息
				txz[i].name=n;
				txz[i].xingbie=xing;
				txz[i].nianling=nian;
				txz[i].banji=ban;
				txz[i].xueyuan=yuan;
				txz[i].zhuanye=zhuan;
			}
			else{//用户选择不修改,给出相应提示
				if(p=='n'){
					cout<<"您未修改！";
				}
				else{
					cout<<"输入有误，无法识别！"<<endl;
				}
			}
			m=1;
		}
	}

	if(m==0){//该学生不存在
		cout<<"未找到此人信息，无法修改！"<<endl;
	}
}

//删除学生信息
void CaoZuo::shanchu(){
	int number;
	cout<<"请输入您想删除的学号：";//提示用户输入学生的学号
	cin>>number;//用户输入学号
	int m=0;

	for(int i=0;i<chuangjianshu;i++){//查询该学生是否存在
		if( number==txz[i].xuehao ){//该学生存在
			char p;
			cout<<"您是否删除（y 删除，n不删除）：";//询问用是否删除
			cin>>p;
			if( p=='y' ){//用户选择删除
				if(i<chuangjianshu-1){//如果该学生位于学生类数组的非尾
					for(int j=i;j<chuangjianshu-1;j++){//该学生之后的学生向前一位，覆盖该学生信息
						txz[i].xuehao=txz[i+1].xuehao;
						txz[i].name=txz[i+1].name;
						txz[i].xingbie=txz[i+1].xingbie;
						txz[i].nianling=txz[i+1].nianling;
						txz[i].banji=txz[i+1].banji;
						txz[i].xueyuan=txz[i+1].xueyuan;
						txz[i].zhuanye=txz[i+1].zhuanye;
					}
					chuangjianshu=chuangjianshu-1;//学生数减一
				}
				else//该学生位于学生类数组的尾部
					chuangjianshu=chuangjianshu-1;
				m=1;

				cout<<"删除后列表为："<<endl;//显示删除该学生之后的所有学生信息
				xianshi();
			}
			else{//用户选择不删除
				if( p=='n' )
					cout<<"您未删除！"<<endl;
				else
					cout<<"选择错误，无法识别！"<<endl;
			}
		}
	}	


	if(m==0){
		cout<<"删除失败，无此信息！"<<endl;
	}
}

//显示所有学生信息
void CaoZuo::xianshi(){
	//当前并未添加学生
	if(chuangjianshu==0){
		cout<<"学生组信息为空，无法查询！"<<endl;
	}
	else{
		//循环显示所有学生信息，以表格形式
		cout<<"学号"<<setw(15)<<"姓名"<<setw(15)<<"性别"<<setw(15)<<"年龄"<<setw(15)<<"班级"<<setw(15)<<""
			<<"学院"<<setw(15)<<"专业"<<endl;
		for(int i=0;i<chuangjianshu;i++){
			cout<<txz[i].xuehao<<setw(15)<<txz[i].name<<setw(15)<<txz[i].xingbie<<
						setw(15)<<txz[i].nianling<<setw(15)<<txz[i].banji<<setw(15)
						<<txz[i].xueyuan<<setw(15)<<txz[i].zhuanye<<endl;
		}
	}
}