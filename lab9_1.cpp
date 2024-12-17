#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){	
int i = 1;
double interestrate, prevbalance, interest, payment, newbalance = 0, total = 0;

	cout << "Enter initial loan: ";
	cin >> prevbalance;
	cout << "Enter interest rate per year (%): ";
	cin >> interestrate;
	cout << "Enter amount you can pay per year: ";
	cin >> payment;

	//use 'setw' to set width of table and 'left' to set left-alignment
	//you can change input argument of 'setw()' to see the effect
	//Try to change from 'left' to 'right' and see the effect
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	
	//use 'fixed' and 'setprecision' to fix the number of decimal digits for displaying
	//you can change input argument of 'setprecision()' to see the effect
do{
	interest = prevbalance*(interestrate/100);
	total = prevbalance+interest;
	newbalance = prevbalance+interest - payment;
		cout << fixed << setprecision(2); 
	cout << setw(13) << left << i; 
	cout << setw(13) << left << prevbalance;
	cout << setw(13) << left << interest;
	cout << setw(13) << left << total;

	if(payment>total){
			cout << setw(13) << left << total;
			newbalance = 0;
	}else{
			cout << setw(13) << left << payment;
	}
	cout << setw(13) << left << newbalance;
	cout << endl;
	i++;
	prevbalance = newbalance;
}while(prevbalance>payment);

while(newbalance!=0){
	interest = prevbalance*(interestrate/100);
	cout << fixed << setprecision(2); 
	cout << setw(13) << left << i; 
	cout << setw(13) << left << prevbalance;
	cout << setw(13) << left << interest;
	total = prevbalance+interest;
	cout << setw(13) << left << total;
	if(total<payment){
		payment = total;
	}
				cout << setw(13) << left << payment;
				newbalance = total-payment;
	cout << setw(13) << left << newbalance;
	cout << endl;
	prevbalance = newbalance;
	i++;
}


	//cout << fixed << setprecision(2); 
	//cout << setw(13) << left << 1; 
	//cout << setw(13) << left << 1000.0;
	//cout << setw(13) << left << 50.0;
	//cout << setw(13) << left << 1050.0;
	//cout << setw(13) << left << 100.0;
	//cout << setw(13) << left << 950.0;
	//cout << "\n";	
	
	return 0;
}
