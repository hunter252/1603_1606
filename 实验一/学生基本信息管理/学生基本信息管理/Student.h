#pragma once
#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

//����ѧ����
class Student
{
public:
	Student(void);
	//���캯����ʼ��ѧ����Ϣ
	Student(int x,string n,char xing,int nian,string ban,string yuan,string zhuan):
		xuehao(x),name(n),xingbie(xing),nianling(nian),banji(ban),xueyuan(yuan),zhuanye(zhuan){}
	~Student(void);
	//ѧ����������
	int xuehao;//ѧ��
	string name;//����
	char xingbie;//�Ա�
	int nianling;//����
	string banji;//�༶
	string xueyuan;//ѧԺ
	string zhuanye;//רҵ

};

