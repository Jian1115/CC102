#include <iostream>

using namespace std;

int main(){
	cout << "Revised Pattern 2" << endl;
	
	for (int i=0; i<7; i++){
		for(int j=0; j<i; j++){
			cout << "  ";
		}
		for(int j=i; j<7; j++){
			if((i % 2 == 0 && j % 2 == 1 || i % 2 == 1 && j % 2 == 1 )){
				cout << "# ";
			}
			else if ((i % 2 == 0 && j % 2 == 0 || i % 2 == 1 && j % 2 == 1 )){
				cout << "@ ";
			}
			else{
				cout << "$ ";
			}
		}
		cout << endl;
	}
	return 0;
	
}