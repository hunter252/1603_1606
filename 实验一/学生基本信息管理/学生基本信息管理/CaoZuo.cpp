#include "CaoZuo.h"


CaoZuo::~CaoZuo(void)
{
}

void CaoZuo::displaycaidan(){//���øú�����ʾ�˵�
	cout<<endl;
	//���ܲ˵�
	cout<<"��ѡ������һ����Ŀ��"<<endl<<"1 ����"<<endl
		<<"2 ���"<<endl<<"3 ��ѯ"<<endl<<"4 �޸�"<<endl
		<<"5 ɾ��"<<endl<<"6 ��ʾ"<<endl
		<<"7 �˳�"<<endl<<"��ѡ��";
	//�����Ӧ���ܵ�����
	cin>>n;
	cout<<endl;
}

//��ʼ����ѧ����һ�οɴ���ָ��������ѧ��
void CaoZuo::chuangjian(){

	//ѯ���û���Ҫ������ѧ������
	cout<<"���������봴���ĸ���:";
	cin>>chuangjianshu;
	//�������С��1����������ʾ
	if( chuangjianshu<1 ){
		exit(1);
		cout<<"������󣡴���������С��1��"<<endl;
	}
	//ѭ������ѧ��
	for(int i=0;i<chuangjianshu;i++){
	//����ѧ���ĸ�����Ϣ
		cout<<"������ѧ��:"; cin>>txz[i].xuehao;
	    	cout<<"����:"; cin>>txz[i].name;
		cout<<"�Ա�:"; cin>>txz[i].xingbie;
		cout<<"����:"; cin>>txz[i].nianling;
		cout<<"�༶:"; cin>>txz[i].banji;
		cout<<"ѧԺ:"; cin>>txz[i].xueyuan;
		cout<<"רҵ:"; cin>>txz[i].zhuanye;
	}
}

//���һ��ѧ����Ϣ
void CaoZuo::tianjia(){
//����ѧ���������Ϣ
	cout<<"������ѧ��:"; cin>>txz[chuangjianshu].xuehao;
	cout<<"����:"; cin>>txz[chuangjianshu].name;
	cout<<"�Ա�:"; cin>>txz[chuangjianshu].xingbie;
	cout<<"����:"; cin>>txz[chuangjianshu].nianling;
	cout<<"�༶:"; cin>>txz[chuangjianshu].banji;
	cout<<"ѧԺ:"; cin>>txz[chuangjianshu].xueyuan;
	cout<<"רҵ:"; cin>>txz[chuangjianshu].zhuanye;

//����ѧ������
	chuangjianshu++;

}

//��ѯָ��ѧ����Ϣ
void CaoZuo::chaxun(){
	//��δ���ѧ��ʱ
	if( chuangjianshu==0 ){
		cout<<"ѧ������ϢΪ�գ��޷���ѯ��"<<endl;
	}
	//�����ѧ����Ϣ
	else{
		int p;//����û���ѡ��
		cout<<"��ѡ�������ѯ�ķ�ʽ��1 ѧ�ţ�2 �༶��רҵ����";//�ṩ���ֲ�ѯ��ʽ��1.��ѧ��2.���༶��רҵ�ۺϲ�ѯ
		cin>>p;//�û�����ѡ��
		//���벻�Ϸ�
		if(p!=1 && p!=2){
			cout<<"�������";
		}
		else{
			//��ѧ�Ų�ѯ
			if(p==1){
				int n;
				cout<<"������������ҵ�ѧ��:";//��ʾ�û�����ѧ��ѧ��
				cin>>n;
				int p=0;

				for(int i=0;i<chuangjianshu;i++){
					//����ѧ������
					if( n==txz[i].xuehao ){
						cout<<"���ҳɹ���"<<endl;//��ʾ���ҳɹ�����ʾ��ѧ����Ϣ
							cout<<txz[i].xuehao<<setw(5)<<txz[i].name<<setw(5)<<txz[i].xingbie<<
							setw(5)<<txz[i].nianling<<setw(5)<<txz[i].banji<<setw(5)<<txz[i].xueyuan
							<<setw(5)<<txz[i].zhuanye<<endl;

						p=1;
						break;//����ѭ��
					}
				}
				if(p==0){//��ѧ��������
					cout<<"����ʧ�ܣ��޴���Ϣ��"<<endl;
				}
			}
			//���༶��רҵ�ۺϲ�ѯ
			else{
				string z,b;
				cout<<"������������ҵ�רҵ�Ͱ༶:";//��ʾ�û�����ѧ���༶��רҵ
				cin>>z>>b;//�û�������Ϣ
				int p=0;

				for(int i=0;i<chuangjianshu;i++){
					if( b==txz[i].banji && z==txz[i].zhuanye ){//����ѧ������
						cout<<"���ҳɹ���"<<endl;//��ʾ��ѯ�ɹ�����ʾѧ����Ϣ
						cout<<txz[i].xuehao<<setw(15)<<txz[i].name<<setw(15)<<txz[i].xingbie<<
							setw(15)<<txz[i].nianling<<setw(15)<<txz[i].banji<<setw(15)<<txz[i].xueyuan
							<<setw(15)<<txz[i].zhuanye<<endl;

						p=1;
						break;
					}
				}
				if(p==0){
					cout<<"����ʧ�ܣ��޴���Ϣ��"<<endl;
				}
			}
		}
	}
}

//�޸�ѧ����Ϣ
void CaoZuo::xiugai(){
	int n;
	cout<<"�����������޸ĵ�ѧ����ѧ�ţ�";//��ʾ�û�������Ҫ�޸�ѧ����ѧ��
	cin>>n;//�û�������Ϣ
	int m=0;

	for(int i=0;i<chuangjianshu;i++){
		if( n==txz[i].xuehao ){//��ѧ������
			string n;//����
			char xing;//�Ա�
			int nian;//����
			string ban;//�༶
			string yuan;//ѧԺ
			string zhuan;//רҵ
			//�û����������Ϣ
			cout<<"�޸ĺ�ģ�"<<endl;
			cout<<"����:"; cin>>n;
			cout<<"�Ա�:"; cin>>xing;
			cout<<"����:"; cin>>nian;
			cout<<"�༶:"; cin>>ban;
			cout<<"ѧԺ:"; cin>>yuan;
			cout<<"רҵ:"; cin>>zhuan;
			
			char p;
			//ѯ���û��Ƿ�ȷ���޸�
			cout<<"ȷ���޸ģ�(y �޸ģ�n ���޸ģ���";//y:�� n:��
			cin>>p;//�û�����ѡ����
			if(p=='y'){//�û�ѡ��ȷ���޸�
				//����ѧ����Ϣ��Ϊ�û��������Ϣ
				txz[i].name=n;
				txz[i].xingbie=xing;
				txz[i].nianling=nian;
				txz[i].banji=ban;
				txz[i].xueyuan=yuan;
				txz[i].zhuanye=zhuan;
			}
			else{//�û�ѡ���޸�,������Ӧ��ʾ
				if(p=='n'){
					cout<<"��δ�޸ģ�";
				}
				else{
					cout<<"���������޷�ʶ��"<<endl;
				}
			}
			m=1;
		}
	}

	if(m==0){//��ѧ��������
		cout<<"δ�ҵ�������Ϣ���޷��޸ģ�"<<endl;
	}
}

//ɾ��ѧ����Ϣ
void CaoZuo::shanchu(){
	int number;
	cout<<"����������ɾ����ѧ�ţ�";//��ʾ�û�����ѧ����ѧ��
	cin>>number;//�û�����ѧ��
	int m=0;

	for(int i=0;i<chuangjianshu;i++){//��ѯ��ѧ���Ƿ����
		if( number==txz[i].xuehao ){//��ѧ������
			char p;
			cout<<"���Ƿ�ɾ����y ɾ����n��ɾ������";//ѯ�����Ƿ�ɾ��
			cin>>p;
			if( p=='y' ){//�û�ѡ��ɾ��
				if(i<chuangjianshu-1){//�����ѧ��λ��ѧ��������ķ�β
					for(int j=i;j<chuangjianshu-1;j++){//��ѧ��֮���ѧ����ǰһλ�����Ǹ�ѧ����Ϣ
						txz[i].xuehao=txz[i+1].xuehao;
						txz[i].name=txz[i+1].name;
						txz[i].xingbie=txz[i+1].xingbie;
						txz[i].nianling=txz[i+1].nianling;
						txz[i].banji=txz[i+1].banji;
						txz[i].xueyuan=txz[i+1].xueyuan;
						txz[i].zhuanye=txz[i+1].zhuanye;
					}
					chuangjianshu=chuangjianshu-1;//ѧ������һ
				}
				else//��ѧ��λ��ѧ���������β��
					chuangjianshu=chuangjianshu-1;
				m=1;

				cout<<"ɾ�����б�Ϊ��"<<endl;//��ʾɾ����ѧ��֮�������ѧ����Ϣ
				xianshi();
			}
			else{//�û�ѡ��ɾ��
				if( p=='n' )
					cout<<"��δɾ����"<<endl;
				else
					cout<<"ѡ������޷�ʶ��"<<endl;
			}
		}
	}	


	if(m==0){
		cout<<"ɾ��ʧ�ܣ��޴���Ϣ��"<<endl;
	}
}

//��ʾ����ѧ����Ϣ
void CaoZuo::xianshi(){
	//��ǰ��δ���ѧ��
	if(chuangjianshu==0){
		cout<<"ѧ������ϢΪ�գ��޷���ѯ��"<<endl;
	}
	else{
		//ѭ����ʾ����ѧ����Ϣ���Ա����ʽ
		cout<<"ѧ��"<<setw(15)<<"����"<<setw(15)<<"�Ա�"<<setw(15)<<"����"<<setw(15)<<"�༶"<<setw(15)<<""
			<<"ѧԺ"<<setw(15)<<"רҵ"<<endl;
		for(int i=0;i<chuangjianshu;i++){
			cout<<txz[i].xuehao<<setw(15)<<txz[i].name<<setw(15)<<txz[i].xingbie<<
						setw(15)<<txz[i].nianling<<setw(15)<<txz[i].banji<<setw(15)
						<<txz[i].xueyuan<<setw(15)<<txz[i].zhuanye<<endl;
		}
	}
}