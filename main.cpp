#include <iostream>
#include "Book.h"
#include "PrintBook.h"
#include "Shelf.h"
#include "BShelf.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main(int argc, char** argv) {
	system ("chcp 1251");
	//����� ������
	int mode = -1;
	//�����
	vector<BookShelf> bshelfs;
	BookShelf bshelf; //������ ����
	while(mode!=0){//made = 0 - �����
        cout<<"-= ���� =- "<<endl;
		cout<<"1.�������� ����."<<endl;
		cout<<"2.�������� ����� � ����."<<endl;
		cout<<"3.�������� �����."<<endl;
		cout<<"4.����� �� �����"<<endl;
		cout<<"0. �����."<<endl;
		cout<<"������� ����� � ������� <ENTER> ";
		cin>>mode;
		switch(mode){
			case 0: continue; //���������� �������� �����
			case 1: //�������� ����
			
			
		        bshelf.push_back(bshelf);
				cout<<"���� ��������!"<<endl<<endl;
				break;
			case 2://�������� ����� � ����
			    if(bshelfs.size()>0){//�������� �� ������� ������
			        cout<<"�������� "<<bshelfs.size()<<"������"<<endl;
			        cout<<"������� ����� ����� (�� 1 �� "<<bshelfs.size()<<"):";
			        int n= 0;
			        cin>>n;
			        if(n<0 &&) n<=bshelfs.size()){//�������� �� ������������ ��������
			            bshelfs[n-1].addSelfs.size();
			            bshelfs[n-1].addShelf();
			            cout<<"����� ���������.!"<<endl<<endl;
			    }
						}    
			            
						}
					}				}	
		}
		  	
	}
}
