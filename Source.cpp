#include <iostream>
#include <string>
using namespace std;

int HotDrinksMenu(); //declares all of the functions that will be used in the program
int ColdDrinksMenu();
int ChocolateMenu();
int CrispsMenu();
int MainMenu();
double money;


int MainMenu() {

	cout << "1: Hot Drinks" << endl;
	cout << "2: Cold Drinks" << endl;
	cout << "3: Chocolate" << endl;
	cout << "4: Crisps" << endl;

	int CategoryChoice;
	cin >> CategoryChoice; //allows user to input their category selection

	switch (CategoryChoice) { //assigns each menu option a numerical value to be selected by the user
	case 1:
		HotDrinksMenu(); //takes the user to the desired menu function
		break;
	case 2:
		ColdDrinksMenu();
		break;
	case 3:
		ChocolateMenu();
		break;
	case 4:
		CrispsMenu();
		break;
	default:
		cout << "Please enter a valid input." << endl; //informs the user there has been a mistake in what they entered
	}
	return CategoryChoice; //returns the category choice selection to the main function
}


int HotDrinksMenu() {

	cout << "Which hot drink would you like?" << endl;
	cout << "1: Coffee $2.00" << endl;
	cout << "2: Tea $1.80" << endl;
	cout << "3: Hot Chocolate $2.20" << endl;

	int HotDrinkChoice;
	cin >> HotDrinkChoice;

	switch (HotDrinkChoice) {
	case 1:
		cout << "Please insert $2.00" << endl;
		cin >> money; //allows the user to enter their money

		if (money > 1.99) {
			cout << "Thank you, your change is $" << money - 2 << endl; //if the user pays the right amount first time then the console thanks them and  calculates their change
		}
		else {
			double ExtraMoney = 0;
			double TotalMoney = money + ExtraMoney; 

			while ((TotalMoney) < 2.00) { //allows the user to enter money as many times as they want until the cost is reached

				cout << "Please insert a further $" << 2 - (TotalMoney) << endl;
				cin >> ExtraMoney;
				TotalMoney = TotalMoney + ExtraMoney; //TotalMoney variable acts as a storage of all the money entered in total 
				if (TotalMoney == 2) { //when the total value is reached the loop is stopped
					cout << "Thank you for purchasing." << endl;
					break;
				}
				if (TotalMoney > 2) {
					cout << "Thank you for purchasing, your change is $" << TotalMoney - 2 << endl;
					break;
				}

			}
		}
		break;

	case 2:
		cout << "Please insert $1.80" << endl;
		cin >> money;

		if (money > 1.79) {
			cout << "Thank you, your change is $" << money - 1.80 << endl;
		}
		else {
			double ExtraMoney = 0;
			double TotalMoney = money + ExtraMoney;

			while ((TotalMoney) < 1.80) {

				cout << "Please insert a further $" << 1.80 - (TotalMoney) << endl;
				cin >> ExtraMoney;
				TotalMoney = TotalMoney + ExtraMoney;
				if (TotalMoney == 1.80) {
					cout << "Thank you for purchasing." << endl;
					break;
				}
				if (TotalMoney > 1.80) {
					cout << "Thank you for purchasing, your change is $" << TotalMoney - 1.80<< endl;
					break;
				}

			}
		}
		break;
		
	case 3:
		cout << "Please insert $2.20" << endl;
		cin >> money;

		if (money > 2.19) {
			cout << "Thank you, your change is $" << money - 2.20 << endl;
		}
		else {
			double ExtraMoney = 0;
			double TotalMoney = money + ExtraMoney;

			while ((TotalMoney) < 2.20) {

				cout << "Please insert a further $" << 2.20 - (TotalMoney) << endl;
				cin >> ExtraMoney;
				TotalMoney = TotalMoney + ExtraMoney;
				if (TotalMoney == 2.20) {
					cout << "Thank you for purchasing." << endl;
					break;
				}
				if (TotalMoney > 2.20) {
					cout << "Thank you for purchasing, your change is $" << TotalMoney - 2.20 << endl;
					break;
				}

			}
		}
		break;

	}
	return HotDrinkChoice; //returns the drink choice to the main function
}


int ColdDrinksMenu() {

	cout << "Which cold drink would you like?" << endl;
	cout << "1: Coca Cola $1.00" << endl;
	cout << "2: Pepsi $1.00" << endl;
	cout << "3: Fanta Orange $0.90" << endl;
	cout << "4: Sprite $0.90" << endl;
	cout << "5: Diet Coke $0.85" << endl;

	int ColdDrinkChoice;
	cin >> ColdDrinkChoice;

	switch (ColdDrinkChoice) {
	case 1:
		cout << "Please insert $1.00" << endl;
		cin >> money;

		if (money > 0.99) {
			cout << "Thank you, your change is $" << money - 1 << endl;
		}
		else {
			double ExtraMoney = 0;
			double TotalMoney = money + ExtraMoney;

			while ((TotalMoney) < 1.00) {

				cout << "Please insert a further $" << 1 - (TotalMoney) << endl;
				cin >> ExtraMoney;
				TotalMoney = TotalMoney + ExtraMoney;
				if (TotalMoney == 1) {
					cout << "Thank you for purchasing." << endl;
					break;
				}
				if (TotalMoney > 1) {
					cout << "Thank you for purchasing, your change is $" << TotalMoney - 1 << endl;
					break;
				}

			}
		}
		break;

	case 2:
		cout << "Please insert $1.00" << endl;
		cin >> money;

		if (money > 0.99) {
			cout << "Thank you, your change is $" << money - 1 << endl;
		}
		else {
			double ExtraMoney = 0;
			double TotalMoney = money + ExtraMoney;

			while ((TotalMoney) < 1.00) {

				cout << "Please insert a further $" << 1 - (TotalMoney) << endl;
				cin >> ExtraMoney;
				TotalMoney = TotalMoney + ExtraMoney;
				if (TotalMoney == 1) {
					cout << "Thank you for purchasing." << endl;
					break;
				}
				if (TotalMoney > 1) {
					cout << "Thank you for purchasing, your change is $" << TotalMoney - 1 << endl;
					break;
				}

			}
		}
		break;

	case 3: 
		cout << "Please insert $0.90" << endl;
		cin >> money;

		if (money > 0.89) {
			cout << "Thank you, your change is $" << money - 0.9 << endl;
		}
		else {
			double ExtraMoney = 0;
			double TotalMoney = money + ExtraMoney;

			while ((TotalMoney) < 0.9) {

				cout << "Please insert a further $" << 0.9 - (TotalMoney) << endl;
				cin >> ExtraMoney;
				TotalMoney = TotalMoney + ExtraMoney;
				if (TotalMoney == 0.9) {
					cout << "Thank you for purchasing." << endl;
					break;
				}
				if (TotalMoney > 0.9) {
					cout << "Thank you for purchasing, your change is $" << TotalMoney - 0.9 << endl;
					break;
				}

			}
		}
		break;

	case 4: 
		cout << "Please insert $0.90" << endl;
		cin >> money;

		if (money > 0.89) {
			cout << "Thank you, your change is $" << money - 0.9 << endl;
		}
		else {
			double ExtraMoney = 0;
			double TotalMoney = money + ExtraMoney;

			while ((TotalMoney) < 0.9) {

				cout << "Please insert a further $" << 0.9 - (TotalMoney) << endl;
				cin >> ExtraMoney;
				TotalMoney = TotalMoney + ExtraMoney;
				if (TotalMoney == 0.9) {
					cout << "Thank you for purchasing." << endl;
					break;
				}
				if (TotalMoney > 0.9) {
					cout << "Thank you for purchasing, your change is $" << TotalMoney - 0.9 << endl;
					break;
				}

			}
		}
		break;

	case 5:
		cout << "Please insert $0.85" << endl;
		cin >> money;

		if (money > 0.84) {
			cout << "Thank you, your change is $" << money - 0.85 << endl;
		}
		else {
			double ExtraMoney = 0;
			double TotalMoney = money + ExtraMoney;

			while ((TotalMoney) < 0.85) {

				cout << "Please insert a further $" << 0.85 - (TotalMoney) << endl;
				cin >> ExtraMoney;
				TotalMoney = TotalMoney + ExtraMoney;
				if (TotalMoney == 0.85) {
					cout << "Thank you for purchasing." << endl;
					break;
				}
				if (TotalMoney > 0.85) {
					cout << "Thank you for purchasing, your change is $" << TotalMoney - 0.85 << endl;
					break;
				}

			}
		}
		break;
	}

	return ColdDrinkChoice;
}

int ChocolateMenu() {

	cout << "Which chocolate would you like?" << endl;
	cout << "1: Kit Kat $0.75" << endl;
	cout << "2: Dairy Milk $0.70" << endl;
	cout << "3: Crunchie $0.75" << endl;
	cout << "4: Boost $0.80" << endl;
	cout << "5: Twirl $0.75" << endl;

	int ChocolateChoice;
	cin >> ChocolateChoice;

	switch (ChocolateChoice) {
	case 1:
		cout << "Please insert $0.75" << endl;
		cin >> money;

		if (money > 0.74) {
			cout << "Thank you, your change is $" << money - 0.75 << endl;
		}
		else {
			double ExtraMoney = 0;
			double TotalMoney = money + ExtraMoney;

			while ((TotalMoney) < 0.75) {

				cout << "Please insert a further $" << 0.75 - (TotalMoney) << endl;
				cin >> ExtraMoney;
				TotalMoney = TotalMoney + ExtraMoney;
				if (TotalMoney == 0.75) {
					cout << "Thank you for purchasing." << endl;
					break;
				}
				if (TotalMoney > 0.75) {
					cout << "Thank you for purchasing, your change is $" << TotalMoney - 0.75 << endl;
					break;
				}

			}
		}
		break;

	case 2:
		cout << "Please insert $0.70" << endl;
		cin >> money;

		if (money > 0.69) {
			cout << "Thank you, your change is $" << money - 0.70 << endl;
		}
		else {
			double ExtraMoney = 0;
			double TotalMoney = money + ExtraMoney;

			while ((TotalMoney) < 0.70) {

				cout << "Please insert a further $" << 0.70 - (TotalMoney) << endl;
				cin >> ExtraMoney;
				TotalMoney = TotalMoney + ExtraMoney;
				if (TotalMoney == 0.70) {
					cout << "Thank you for purchasing." << endl;
					break;
				}
				if (TotalMoney > 0.70) {
					cout << "Thank you for purchasing, your change is $" << TotalMoney - 0.70 << endl;
					break;
				}

			}
		}
		break;
	case 3:
		cout << "Please insert $0.75" << endl;
		cin >> money;

		if (money > 0.74) {
			cout << "Thank you, your change is $" << money - 0.75 << endl;
		}
		else {
			double ExtraMoney = 0;
			double TotalMoney = money + ExtraMoney;

			while ((TotalMoney) < 0.75) {

				cout << "Please insert a further $" << 0.75 - (TotalMoney) << endl;
				cin >> ExtraMoney;
				TotalMoney = TotalMoney + ExtraMoney;
				if (TotalMoney == 0.75) {
					cout << "Thank you for purchasing." << endl;
					break;
				}
				if (TotalMoney > 0.75) {
					cout << "Thank you for purchasing, your change is $" << TotalMoney - 0.75 << endl;
					break;
				}

			}
		}
		break;

	case 4:
		cout << "Please insert $0.80" << endl;
		cin >> money;

		if (money > 0.79) {
			cout << "Thank you, your change is $" << money - 0.80 << endl;
		}
		else {
			double ExtraMoney = 0;
			double TotalMoney = money + ExtraMoney;

			while ((TotalMoney) < 0.80) {

				cout << "Please insert a further $" << 0.80 - (TotalMoney) << endl;
				cin >> ExtraMoney;
				TotalMoney = TotalMoney + ExtraMoney;
				if (TotalMoney == 0.80) {
					cout << "Thank you for purchasing." << endl;
					break;
				}
				if (TotalMoney > 0.80) {
					cout << "Thank you for purchasing, your change is $" << TotalMoney - 0.80 << endl;
					break;
				}
			}

		}
		break;

	case 5:
		cout << "Please insert $0.75" << endl;
		cin >> money;

		if (money > 0.74) {
			cout << "Thank you, your change is $" << money - 0.75 << endl;
		}
		else {
			double ExtraMoney = 0;
			double TotalMoney = money + ExtraMoney;

			while ((TotalMoney) < 0.75) {

				cout << "Please insert a further $" << 0.75 - (TotalMoney) << endl;
				cin >> ExtraMoney;
				TotalMoney = TotalMoney + ExtraMoney;
				if (TotalMoney == 0.75) {
					cout << "Thank you for purchasing." << endl;
					break;
				}
				if (TotalMoney > 0.75) {
					cout << "Thank you for purchasing, your change is $" << TotalMoney - 0.75 << endl;
					break;
				}

			}
		}
		break;

	}

	return ChocolateChoice;
}


int CrispsMenu() {

	cout << "Which crisps would you like?" << endl;
	cout << "1: Quavers $0.80" << endl;
	cout << "2: Doritos - Cool Original $0.85" << endl;
	cout << "3: Walkers - Ready Salted $0.80" << endl;
	cout << "4: Mini Cheddars $0.70" << endl;
	cout << "5: Walkers - Cheese and Onion $0.80" << endl;

	int CrispsChoice;
	cin >> CrispsChoice;

	switch (CrispsChoice) {
	case 1:
		cout << "Please insert $0.80" << endl;
		cin >> money;

		if (money > 0.79) {
			cout << "Thank you, your change is $" << money - 0.80 << endl;
		}
		else {
			double ExtraMoney = 0;
			double TotalMoney = money + ExtraMoney;

			while ((TotalMoney) < 0.80) {

				cout << "Please insert a further $" << 0.80 - (TotalMoney) << endl;
				cin >> ExtraMoney;
				TotalMoney = TotalMoney + ExtraMoney;
				if (TotalMoney == 0.80) {
					cout << "Thank you for purchasing." << endl;
					break;
				}
				if (TotalMoney > 0.80) {
					cout << "Thank you for purchasing, your change is $" << TotalMoney - 0.80 << endl;
					break;
				}
			}
			
		}
		break;

	case 2:
		cout << "Please insert $0.85" << endl;
		cin >> money;

		if (money > 0.84) {
			cout << "Thank you, your change is $" << money - 0.85 << endl;
		}
		else {
			double ExtraMoney = 0;
			double TotalMoney = money + ExtraMoney;

			while ((TotalMoney) < 0.85) {

				cout << "Please insert a further $" << 0.85 - (TotalMoney) << endl;
				cin >> ExtraMoney;
				TotalMoney = TotalMoney + ExtraMoney;
				if (TotalMoney == 0.85) {
					cout << "Thank you for purchasing." << endl;
					break;
				}
				if (TotalMoney > 0.85) {
					cout << "Thank you for purchasing, your change is $" << TotalMoney - 0.85 << endl;
					break;
				}

			}
		}
		break;
	case 3:
		cout << "Please insert $0.80" << endl;
		cin >> money;

		if (money > 0.79) {
			cout << "Thank you, your change is $" << money - 0.80 << endl;
		}
		else {
			double ExtraMoney = 0;
			double TotalMoney = money + ExtraMoney;

			while ((TotalMoney) < 0.80) {

				cout << "Please insert a further $" << 0.80 - (TotalMoney) << endl;
				cin >> ExtraMoney;
				TotalMoney = TotalMoney + ExtraMoney;
				if (TotalMoney == 0.80) {
					cout << "Thank you for purchasing." << endl;
					break;
				}
				if (TotalMoney > 0.80) {
					cout << "Thank you for purchasing, your change is $" << TotalMoney - 0.80 << endl;
					break;
				}

			}
		}
		break;

	case 4:
		cout << "Please insert $0.70" << endl;
		cin >> money;

		if (money > 0.69) {
			cout << "Thank you, your change is $" << money - 0.70 << endl;
		}
		else {
			double ExtraMoney = 0;
			double TotalMoney = money + ExtraMoney;

			while ((TotalMoney) < 0.70) {

				cout << "Please insert a further $" << 0.70 - (TotalMoney) << endl;
				cin >> ExtraMoney;
				TotalMoney = TotalMoney + ExtraMoney;
				if (TotalMoney == 0.70) {
					cout << "Thank you for purchasing." << endl;
					break;
				}
				if (TotalMoney > 0.70) {
					cout << "Thank you for purchasing, your change is $" << TotalMoney - 0.70 << endl;
					break;
				}

			}
		}
		break;

	case 5:
		cout << "Please insert $0.80" << endl;
		cin >> money;

		if (money > 0.79) {
			cout << "Thank you, your change is $" << money - 0.80 << endl;
		}
		else {
			double ExtraMoney = 0;
			double TotalMoney = money + ExtraMoney;

			while ((TotalMoney) < 0.80) {

				cout << "Please insert a further $" << 0.80 - (TotalMoney) << endl;
				cin >> ExtraMoney;
				TotalMoney = TotalMoney + ExtraMoney;
				if (TotalMoney == 0.80) {
					cout << "Thank you for purchasing." << endl;
					break;
				}
				if (TotalMoney > 0.80) {
					cout << "Thank you for purchasing, your change is $" << TotalMoney - 0.80 << endl;
					break;
				}

			}
		}
		break;
	}

	return CrispsChoice;
}

int main() {

	char otherpurchase;

	cout << "Welcome to the vending machine! Please select an option." << endl;

	MainMenu(); 

	cout << "Item dispensing..." << endl;
	cout << "Would you like to make another purchase? Y/N" << endl;
	cin >> otherpurchase; // allows the user to choose whether to make a purchase or to exit the program
	switch (otherpurchase) {
		case 'y':
		case 'Y': //both uppercase and lowercase values are accepted
			MainMenu();
		case 'n':
		case 'N':
			cout << "Thank you for using the vending machine." << endl;
	}

	system("pause");
	return 0;
}

