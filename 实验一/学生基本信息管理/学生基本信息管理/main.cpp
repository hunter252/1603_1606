#include"CaoZuo.h"
#include"Student.h"

//�ǵó�ʼ���������ݡ�������chuangjianshu n;;.......
void main(){
	CaoZuo A;
	A.n=0;��ʼ������
	A.chuangjianshu=0;
	int r=0;//ѭ����������

	while(r==0){
		A.displaycaidan();//��ʾ���ܲ˵�
		if(A.n==1)//����ѧ��
			A.chuangjian();
		else if(A.n==2)//���ѧ��
			A.tianjia();
		else if(A.n==3)//��ѯѧ����Ϣ
			A.chaxun();
		else if(A.n==4)//�޸�ѧ����Ϣ
			A.xiugai();
		else if(A.n==5)//ɾ��ѧ����Ϣ
			A.shanchu();
		else if(A.n==6)
			A.xianshi();
		else if(A.n==7)//�˳�ϵͳ
			r=1;
		else//�û��������
			cout<<"�޴˹��ܣ�"<<endl;
	}
}