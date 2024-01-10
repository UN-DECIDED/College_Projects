
#include <iostream>

using namespace std;
void border();
void umulit(bool &retry);
void options(int &ope);
void withdraw(double val, double balance);
void deposit(double val, double balance);
void balances(double balance);
//void umulit(bool &retry);
bool ulit();



int main()
{
	double val, balance = 1000;
    int x,option;
    
   	border();
    cout << "Kamusta Kaibigan\n" 
    << "WELCOME TO DBANK\n";	
  	border();
    	
    do{
    	
		options(option);
    	
    	border();
    	switch(option){
			case 1:
				withdraw(val, balance);
			break;
			case 2:
				deposit(val,balance);	
				
			break;
			case 3:
				balances(balance);
			break;
			case 0:
				return 0;
			break;
		}
		border();
			
	}while(ulit());
	return 0;
}

void options(int &option){
   	cout << "Enter a Choice\n"
		<< "[1] - Withdraw\n"
		<< "[2] - Deposit\n"
		<< "[3] - Check Balance\n"
		<< "[0] - Exit\n"
		<< "::   ::\b\b\b\b";
   	cin >> option;
    	
}

void border(){
	cout << endl;
	for(int i=0;i<50;i++){
		cout << "*";
	}
	cout << endl;	
}

void withdraw(double val, double balance){
	cout << "Balance: " << balance << endl;
	cout<< "Enter a number to Withdraw: ";				
	cin >> val;
				
	balance = balance - val;
	border();
	cout << balance << " has been withdrawn";	
	
}

void deposit(double val, double balance){
	cout << "Balance: " << balance << endl;						
	cout<< "Enter a number to Deposit: ";
	cin >> val;
				
	balance = balance + val;
	cout << "Balance: " << balance;	
}

void balances(double balance){
	cout << "Your Balance is: " << balance;
}

bool ulit(){
	char check;
	cout << "Do you want to continue??\n"
		<< "[1] - Yes\n"
		<< "[0] - No\n"
		<< "::   ::\b\b\b\b";
	cin >> check;
		
	border();
	return 1;
}


//void umulit(bool &retry){
//	cout << "Do you want to continue??\n"
//		<< "[1] - Yes\n"
//		<< "[0] - No\n"
//		<< "::   ::\b\b\b\b";
//	cin >> retry;
//}
