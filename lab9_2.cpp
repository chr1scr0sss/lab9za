#include<iostream>
using namespace std;

//Write the function printO() here
void printO(int Rows, int Columns){
    if(Rows <= 0 || Columns <=0){
        cout << "Invalid input"; 
    }
	for(int R = 0; R < Rows; R++){
for(int C = 0; C < Columns; C++){
		cout << 'O';
	}
	cout << '\n';
}
}

//return result;

int main(){
	
	printO(2,2);
	cout << "\n";
	
	printO(3,5);
	cout << "\n";	
	
	printO(5,3);
	cout << "\n";	
	
	printO(0,3);
	cout << "\n";	
	
	printO(7,-1);
	cout << "\n";	
	
	return 0;
}

