#include<stdio.h>
#include<stdlib.h>
#include<stdlib.h>
#include <iostream>
using namespace std;
//�����ʽ����
void create()
{
	char shift[4]={'+','-','*','/'};
	int s1,s2;
	int op[11],temp;
	char string[100];
	for(int i=1;i<=1000;i++)
	{
		s1=rand()%4+1;//���������� 
		for(int j=1;j<=s1;j++) //���ɲ�����
		{	
			op[j]=rand()%4;
			temp=rand()%100+1;
		
			printf("%d",temp);
			printf("%c",shift[op[j]]);		
		}
		temp=rand()%100+1;
			
			printf("%d",temp);
			printf("\n");	
	}
} 
//������ 
int main()
{
	printf("1000����ʽ�����ɣ�\n\n");
	create();
	printf("\n\n");
    int a0[1000],b0[1000],c0[1000]; 
	int a1[1000],b1[1000],c1[1000];
	int a2[1000],b2[1000],c2[1000];
	int a3[1000],b3[1000],c3[1000];
	int answer[1000],a,b,c;
    int i,j,A0,A1,A2,A3,B0,B1,B2,B3;
    int num,line=1,k;
    int min,max,m;
    int CC=1,FS=1,YS=1;
    k=0;
    A0=0;A1=0;A2=0;A3=0;
    B0=0;B1=0;B2=0;B3=0;
    cout<<"����������������ʽ������"<<endl;
    cin>>num;
    cout<<"����������ֵȷ����ʽ��a,b��ȡֵ��Χ���뱣֤ǰһ��ֵС�ں�һ��ֵ����"<<endl;
    cin>>min>>max;
    while(1)                            //�ж������Ƿ�Ϸ�
    {
        if(min>=max)
        {
            cout<<"���벻�Ϸ������������룺";
            cin>>min>>max;
        }
        else
            break;
    }
    m=max-min+1;
    for(i=0;i<1000;i++)
    {
        a0[i]=0;b0[i]=0;
        a1[i]=0;b1[i]=0;
        a2[i]=0;b2[i]=0;
        a3[i]=0;b3[i]=0;
    }
   while(1)
    {
        a=min+rand()%m;
        b=min+rand()%m;
        c=rand()%4;
        //����ʽ��Ϊ�ӡ������ˡ�������
        if(c==0)                       //�ӷ�
        {
            for(j=0;j<=A0;j++)
            {
                if(a==a0[j]&&b==b0[j])
                {
                    B0++;break;
                }
            }
            if(B0>0)
            {
                B0=0;continue;
            }
            else
            {
                a0[A0]=a;
                b0[A0]=b;
                c0[A0]=a+b;
                A0++;
            }
        }
        else if(c==1)                   //����
        {
            for(j=0;j<=A1;j++)
            {
                if(a==a1[j]&&b==b1[j])
                {
                    B1++;break;
                }
            }
            if(B1>0)
            {
                B1=0;continue;
            }
            else
            {
                a1[A1]=a;
                b1[A1]=b;
                c1[A1]=a+b;
                A1++;
            }
        }
        else if(c==2)                     //�˷�
        {
            for(j=0;j<=A2;j++)
            {
                if(a==a2[j]&&b==b2[j])
                {
                	 B2++;break;
				}    
            }
            if(B2>0) 
			{
				B2=0;continue;
			}
            else
            {
                a2[A2]=a;
                b2[A2]=b;
                c2[A2]=a+b;
                A2++;
            }
        }
        else                               //����
        {
            if(b==0)  continue;
            for(j=0;j<=A3;j++)
            {
                if(a==a3[j]&&b==b3[j])
                {
                	B3++;break; 
				}
            }
            if(B3>0)
            {
                B3=0;continue;
            }
            else
            {
                a3[A3]=a;
                b3[A3]=b;
                c3[A3]=a+b;
                A3++;
            }
        }
        if(num==A0+A1+A2+A3)   break;              //������ʽ����
    }
    //���
    for(i=0;i<A0;i++)                        // �ӷ����� 
    {
        k++;
        if(a0[i]<0) cout<<"("<<a0[i]<<")";           
        else cout<<a0[i]<<" ";    
        cout<<"+";
        if(b0[i]<0) cout<<"("<<b0[i]<<")";
        else cout<<" "<<b0[i]<<" ";  
        cout<<"=";
        if(k%line==0) cout<<endl;   
        else cout<<"\t";        
    }
    for(i=0;i<A1;i++)                         // �������� 
    {
        k++;
        if(a1[i]<0) cout<<"("<<a1[i]<<")";   
        else cout<<a1[i]<<" ";  
        cout<<"-";
        if(b1[i]<0) cout<<"("<<b1[i]<<")";   
        else cout<<" "<<b1[i]<<" ";  
        cout<<"=";
        if(k%line==0) cout<<endl;   
        else cout<<"\t";    
    }
    for(i=0;i<A2;i++)                         // �˷����� 
    {
        k++;
        if(a2[i]<0) cout<<"("<<a2[i]<<")"; 
        else cout<<a2[i]<<" ";
    	cout<<"*";
        if(b2[i]<0) cout<<"("<<b2[i]<<")";
        else cout<<" "<<b2[i]<<" ";    
        cout<<"=";
        if(k%line==0) cout<<endl;
        else cout<<"\t";      
    }
    for(i=0;i<A3;i++)                          // �������� 
    {
        k++;
        if(a3[i]<0) cout<<"("<<a3[i]<<")";    
        else cout<<a3[i]<<" ";
        cout<<"/";
        if(b3[i]<0) cout<<"("<<b3[i]<<")";  
        else cout<<" "<<b3[i]<<" ";
        cout<<"=";
        if(k%line==0) cout<<endl;   
        else cout<<"\t";
    }
    cout<<"�����������ʽ�Ľ����"<<endl;
    for(i=0;i<num;i++)
        cin>>answer[i];
    int cou=0,corr=0;
    //�ж��������ĶԴ�
    for(i=0;i<A0;i++)
    {
        if(c0[i]==answer[cou])
        {cou++;corr++;}
        else
        {
            cou++;
            cout<<"��"<<cou<<"����"<<endl;
        }
    }
    for(i=0;i<A1;i++)
    {
        if(c1[i]==answer[cou])
        {cou++;corr++;}
        else
        {
            cou++;
            cout<<"��"<<cou<<"����"<<endl;
        }
    }
    for(i=0;i<A2;i++)
    {
        if(c2[i]==answer[cou])
        {cou++;corr++;}
        else
        {
            cou++;
            cout<<"��"<<cou<<"����"<<endl;
        }
    }
    for(i=0;i<A3;i++)
    {
        if(c3[i]==answer[cou])
        {cou++;corr++;}
        else
        {
            cou++;
            cout<<"��"<<cou<<"����"<<endl;
        }
    }
    return 0;
}
