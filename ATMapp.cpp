//This program build a very simple ATM app using user input and
//switch selection statements

#include <iostream>

using namespace std;

int main() {

	    double currentBalance = 10000;
		double currentWithdrawal;
		double currentDeposit;
		int option;

		do {


			cout << "-----------------Main Menu-------------------" << endl;
			cout << "                                             " << endl;
			cout << "Please select from the following options:" << endl;
			cout << "1. Current Balance" << endl;
			cout << "2. Make Deposit" << endl;
			cout << "3. Make Withdrawal" << endl;
			cout << "4. Exit" << endl;
			cout << "                                             " << endl;
			cout << "---------------------------------------------" << endl;


			cin >> option;

			system("cls"); //Clearing the screen for readability

			switch (option) {

			case 1:
            
				cout << "Your current balance is $" << currentBalance << "." << endl;
				cout << "  " << endl;

				break;

			case 2:

				cout << "Select an amount to deposit." << endl;
				cin >> currentDeposit;

				currentBalance = currentBalance + currentDeposit;

				cout << "Your new balance is $" << currentBalance << "." << endl;
				cout << "  " << endl;
				
				break;

			case 3:

				cout << "Select an amount to withdraw." << endl;
				cin >> currentWithdrawal;

				if (currentWithdrawal <= currentBalance) {
					currentBalance = currentBalance - currentWithdrawal;
					cout << "Your new balance is $" << currentBalance << "." << endl;
				}
				else {
					cout << "Insufficient funds." << endl;
				}
				cout << "  " << endl;
				
				break;

			case 4:
				cout << "Thank you for using our automated system. Goodbye!" << endl;
				break;
				cout << "  " << endl;
				
			default:
				cout << "Invalid option selected. Please try again." << endl;
				break;
			}
			cout << "  " << endl;

		} while (option != 4); //To return to Main menu after selection if user selects anything but option 4

};


