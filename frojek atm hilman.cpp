#include<iostream>
using namespace std;
int main(){
	int menu;
    int saldo=0;
    int nominal;
    do{
    	cout<<"===== ATM ====="<<endl;
    	cout<<"1. setor"<<endl;
    	cout<<"2. tarik"<<endl;
    	cout<<"3. cek saldo"<<endl;
    	cout<<"0. keluar"<<endl;
    	cout<<"==============="<<endl;
    	cout<<"pilih :";
    	cin >>menu;
    	switch(menu){
    		case 1:
    			cout<<"fitur setor"<<endl;
    			cout<<"masukan nominal :"<<endl;
    			cin >>nominal;
    			saldo=saldo+nominal;
    			break;
    		case 2:
    			cout<<"fitur tarik"<<endl;
				cout<<"masukan nominal :"<<endl;
    			cin >>nominal;
    			saldo=saldo-nominal;
    			break;
    		case 3:	
    		    cout<<"saldo :"<<saldo<<endl;
    		    break;
    		case 0:
			    cout<<"keluar"<<endl;
			    break;
			default:
			    cout<<"pilihan tidak valid"<<endl;
			    break;
			
			    
		}
    	
    	
	}while(menu);
	return 0;
}
