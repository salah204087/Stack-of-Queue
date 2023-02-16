#include <iostream>
#include "Stack.cpp"
using namespace std;


int main() {

	Stack <int> s;
	int choice, n;

	do {
		cout << " 1- Push \n 2- Pop \n 3- Get top \n 4- Clear \n 5- Print \n 6- Exit" << endl;
		cin >> choice;
		switch (choice) {
		case 1:
			cout << "Enter the number you want to push: \t \t (enter -1 to stop)" << endl;
			do {
				cin >> n;
				if (n == -1)
					break;
				s.push(n);
			} while (true);
			cout << "Is pushed!"<<endl;
			break;
		case 2: 
			s.pop();
			cout << "Is poped!" << endl;
			break;
		case 3:
			cout << "The top is " << s.getTop() << endl;
			break;
		case 4:
			s.clear();
			cout << "Is cleared!" << endl;
			break;
		case 5:
			s.print();
			break;
		case 6:
			cout << "Is leaving.......!" << endl;
			break;
		default:
			cout << " You enterd invalid input! \n Please enter valid input: " << endl;
			break;
		}

	} while (choice!=6);



	return 0;
}