#pragma once
#include"Student.h"

//����ѧ����Ļ�������
class CaoZuo{
public:
	CaoZuo(void){}
	//��ʼ��ѧ��������
	CaoZuo(Student t[100],int a,int b){
		for(int i=0;i<100;i++)
			t[i]=txz[i];
		n=a;
		chuangjianshu=b;
	}
	~CaoZuo(void);

	//�����ѧ���Ĳ���
	void displaycaidan();//��ʾ���ܲ˵�
	void chuangjian();//����ѧ��
	void tianjia()//���һ��ѧ��;
	void chaxun();//��ѯѧ����Ϣ
	void xiugai();//�޸�ѧ����Ϣ
	void shanchu();//ɾ��ѧ����Ϣ
	void xianshi();//��ʾѧ����Ϣ

	Student txz[100];//�洢ѧ����Ϣ
	int n;
	int chuangjianshu;//��¼ѧ������
};


