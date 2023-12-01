#include <iostream>
#include <MyQueue.cpp>
using namespace std;

int main(){
	
	int menu;
	MyQueue me;
	
	cout <<"Welcome to my Queue Applications" <<endl;
	
	
	do{
		
		cout << "Choose operation:" <<endl;
		cout << "1.) Enqueue" <<endl;
		cout <<"2.) Dequeue"<<endl;
		cout <<"3.) Display Queue Items"<<endl;
		cout <<"4.) Display rear item"<<endl;
		cout <<"5.) Display front item"<<endl;
		cout <<"6.) Display Queue Size"<<endl;
		cout <<"7.) Exit"<<endl;
		
		cout <<"Option: ";
		
		cin >> menu;
		
		if(menu == 1){
			me.enqueue();
		}
		else if(menu ==2){
			me.dequeue();
		}
		else if(menu ==3){
			me.display_queue();
		}
		else if(menu ==4){
			cout << "Rear item: " << me.display_rear() <<endl;
		}
		else if(menu ==5){
			cout << "Front item: " << me.display_front() << endl;
		}
		else if(menu ==6){
			cout << "Queue Size: " << me.sizeOfqueue() << endl;
		}
		
		
		
	}while(menu != 7);
	
}
