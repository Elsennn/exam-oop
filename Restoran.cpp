#include <iostream>
#include <assert.h>
#include <initializer_list>
#include <queue>
#include <ctime>
#include <chrono>
#include <windows.h>
#include <fstream>

using namespace std;
HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
string chose;
string admin;
int chc2;

class admiin {
public:

	void menyu() {
		system("cls");
		cout << " ____________________________" << endl;
		cout << "|****************************|" << endl;
		cout << "|___________UPDATE___________|" << endl;
		cout << "|____________________________|" << endl;
		cout << "| 1. Pizza Products          |" << endl;
		cout << "| 2. Xengel Products         |" << endl;
		cout << "| 3. Dolma Products          |" << endl;
		cout << "| 4. BArbecue Products       |" << endl;
		cout << "|____________________________|" << endl;
		cout << "    Your choice[1,2,3,4]:";
	}

	void menu1() {
		system("cls");
		cout << " ____________________________" << endl;
		cout << "|****************************|" << endl;
		cout << "|___________UPDATE___________|" << endl;
		cout << "|____________________________|" << endl;
		cout << "| 1. Update All Products     |" << endl;
		cout << "| 2. Choose what to update   |" << endl;
		cout << "|____________________________|" << endl;
		cout << "    Your choice[1,2]:";
	}

	void menu() {
		system("cls");
		cout << " ____________________________" << endl;
		cout << "|****************************|" << endl;
		cout << "|___________ADMIN____________|" << endl;
		cout << "|____________________________|" << endl;
		cout << "| 1. Update Products         |" << endl;
		cout << "| 2. EXIT                    |" << endl;
		cout << "|____________________________|" << endl;
		cout << "    Your choice[1]:";


	}
};

class Pizza {
public:
	int _tomato;
	int _sausage;
	int _cheese;
	double _dough;
	int _mushrooms;
	int _pizzaSous;
	int _meat;
	int _potatoes;
	int _pepper;
	int _salyami;

	string _marqarita;
	string _vegetarian;
	string _salyamii;
	string _texas;
	string _amerikano;
	string _customPizza;


	Pizza() {
		_tomato = 20;
		_sausage = 20;
		_cheese = 20;
		_dough = 20;
		_mushrooms = 20;
		_pizzaSous = 20;
		_meat = 20;
		_potatoes = 20;
		_pepper = 20;
		_salyami = 20;
		_marqarita = "Marqarita";
		_vegetarian = "Vegetarian";
		_salyamii = "Salyami";
		_texas = "Texas";
		_amerikano = "Amerikano";
		_customPizza = "Custom Pizza";
	}

	Pizza(int tomato, int sausage, int cheese, double dough, int mushrooms, int pizzasous, int meat, int potatoes, int pepper, int salyami, string marqarita, string vegetarian, string ssalyami, string texas, string amerikano, string cpizza) {
		_tomato = tomato;
		_sausage = sausage;
		_cheese = cheese;
		_dough = dough;
		_mushrooms = mushrooms;
		_pizzaSous = pizzasous;
		_meat = meat;
		_potatoes = potatoes;
		_pepper = pepper;
		_salyami = salyami;
		_marqarita = marqarita;
		_vegetarian = vegetarian;
		_salyamii = ssalyami;
		_texas = texas;
		_amerikano = amerikano;
		_customPizza = cpizza;
	}

	void setTomato(int tomato) {
		_tomato = tomato;
	}

	void setSausage(int sausage) {
		_sausage = sausage;
	}

	void setCheese(int cheese) {
		_cheese = cheese;
	}

	void setDough(double dough) {
		_dough = dough;
	}

	void setMushrooms(int mushrooms) {
		_mushrooms = mushrooms;
	}

	void setPizzaSous(int pizzasous) {
		_pizzaSous = pizzasous;
	}

	void setEt(int et) {
		_meat = et;
	}

	void setPotatoes(int potatoes) {
		_potatoes = potatoes;
	}

	void setPepper(int pepper) {
		_pepper = pepper;
	}

	void setSalyami(int salyami) {
		_salyami = salyami;
	}

	int getTomato() { return _tomato; }

	int getSausage() { return _sausage; }

	int getPepper() { return _pepper; }

	int getPotatoes() { return _potatoes; }

	double getDough() { return _dough; }

	int getEt() { return _meat; }

	int getPizzaSous() { return _pizzaSous; }

	int getCheese() { return _cheese; }

	int getMushrooms() { return _mushrooms; }

	int getSalyami() { return _salyami; }

	void WriteToFile(string name) {
		ofstream file("Pizza.txt", ios_base::app);

		if (file.is_open()) {

			file << name << ' ' << _tomato << ' ' << _sausage << ' ' << _cheese << ' '
				<< _dough << ' ' << _mushrooms << ' ' << _pizzaSous << ' '
				<< _meat << ' ' << _potatoes << ' ' << _pepper << ' '
				<< _salyami << '\n';

		}

		file.close();
	}

	//Marqarita
	void yourChoice1(int choice) {
		if (choice == 1) {
		ch:
			system("cls");
			SetConsoleTextAttribute(hConsole, 302);
			cout << "\t\t\t\t\t\tRESTAURANT APP\n";
			SetConsoleTextAttribute(hConsole, 14);


			cout << "How many " << _marqarita << " pizza do you want:";
			int howMuchPizza;
			cin >> howMuchPizza;
			cout << endl;

			if (_dough - (howMuchPizza * 3.2) >= 0) {
				_cheese = _cheese - (howMuchPizza * 3);
				_pizzaSous = _pizzaSous - (howMuchPizza * 3);
				_dough = _dough - (howMuchPizza * 3.2);
				_pepper = _pepper - (howMuchPizza * 3);

				system("cls");
				SetConsoleTextAttribute(hConsole, 302);
				cout << "\t\t\t\t\t\tPIZZA\n";
				SetConsoleTextAttribute(hConsole, 14);

				cout << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << endl;

				cout << "Cheese    " << (howMuchPizza * 3) << "    Is taken from stock " << endl;
				cout << "Dough    " << (howMuchPizza * 3.2) << "    Is taken from stock " << endl;
				cout << "Pepper    " << (howMuchPizza * 3) << "    Is taken from stock " << endl;
				cout << "Pizza Sous    " << (howMuchPizza * 3) << "    Is taken from stock" << endl;

				cout << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << endl;

				cout << endl;
				cout << endl;
				cout << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << endl;

				cout << "Calorie : " << howMuchPizza * 2.50 << endl;

				cout << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << endl;

				cout << endl;
				cout << endl;

				showStock();
				Sleep(5000);
				system("cls");
				cout << "Do you want to rename " << _marqarita << "?[Y/N]";
				cin >> chose;
				if (chose == "Y" || chose == "y") {
					cout << "\nNew name for " << _marqarita << ":";
					string rnm;
					cin >> rnm;
					_marqarita = rnm;
				}

				WriteToFile(_marqarita);

				cout << "Do you want to update all pizza products?[Y/N]";
				cin >> admin;
				if (admin == "Y" || admin == "y") {
					_dough = 20;
					_pizzaSous = 20;
					_meat = 20;
					_pepper = 20;
					_potatoes = 20;
					_tomato = 20;
					_cheese = 20;
					_mushrooms = 20;
					_salyami = 20;
					_sausage = 20;
					system("cls");
				}
			}

			else {
				system("cls");
				SetConsoleTextAttribute(hConsole, 302);
				cout << "\t\t\t\t\t\tPIZZA\n";
				SetConsoleTextAttribute(hConsole, 14);

				cout << "You Cant order in our stock we dont have Ingredients !\n\n";
				Sleep(4000);
				system("cls");
				goto ch;

			}


		}
	}

	//Vegetarian
	void yourChoice2(int choice) {
		if (choice == 2) {
		ch:
			system("cls");
			SetConsoleTextAttribute(hConsole, 302);
			cout << "\t\t\t\t\t\tRESTAURANT APP\n";
			SetConsoleTextAttribute(hConsole, 14);


			cout << "How many " << _vegetarian << " pizza do you want:";
			int howMuchVegan;
			cin >> howMuchVegan;
			cout << endl;

			if (_dough - (howMuchVegan * 3.2) >= 0) {
				_cheese = _cheese - (howMuchVegan * 3);
				_pizzaSous = _pizzaSous - (howMuchVegan * 3);
				_mushrooms = _mushrooms - (howMuchVegan * 3);
				_dough = _dough - (howMuchVegan * 3.2);
				_pepper = _pepper - (howMuchVegan * 3);

				system("cls");
				SetConsoleTextAttribute(hConsole, 302);
				cout << "\t\t\t\t\t\tPIZZA\n";
				SetConsoleTextAttribute(hConsole, 14);

				cout << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << endl;

				cout << "Cheese    " << (howMuchVegan * 3) << "    Is taken from stock " << endl;
				cout << "Dough    " << (howMuchVegan * 3.2) << "    Is taken from stock " << endl;
				cout << "Pepper    " << (howMuchVegan * 3) << "    Is taken from stock " << endl;
				cout << "MushRooms    " << (howMuchVegan * 3) << "    Is taken from stock " << endl;
				cout << "Pizza Sous    " << (howMuchVegan * 3) << "    Is taken from stock" << endl;

				cout << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << endl;

				cout << endl;
				cout << endl;
				cout << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << endl;

				cout << "Calorie : " << howMuchVegan * 3.33 << endl;

				cout << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << endl;

				cout << endl;
				cout << endl;

				showStock();
				Sleep(5000);
				system("cls");
				cout << "Do you want to rename " << _vegetarian << "?[Y/N]\n";
				cin >> chose;
				if (chose == "Y" || chose == "y") {
					cout << "\nNew name for " << _vegetarian << ":";
					string rnm;
					cin >> rnm;
					_vegetarian = rnm;
				}

				WriteToFile(_vegetarian);

				cout << "Do you want to update all pizza products?[Y/N]\n";
				cin >> admin;
				if (admin == "Y" || admin == "y") {
					_dough = 20;
					_pizzaSous = 20;
					_meat = 20;
					_pepper = 20;
					_potatoes = 20;
					_tomato = 20;
					_cheese = 20;
					_mushrooms = 20;
					_salyami = 20;
					_sausage = 20;
					system("cls");
				}
			}

			else {
				system("cls");
				SetConsoleTextAttribute(hConsole, 302);
				cout << "\t\t\t\t\t\tPIZZA\n";
				SetConsoleTextAttribute(hConsole, 14);

				cout << "You Cant order in our stock we dont have Ingredients !\n\n";
				Sleep(4000);
				system("cls");
				goto ch;

			}


		}
	}

	//Salyami
	void yourChoice3(int choice) {
		if (choice == 3) {
		ch:
			system("cls");
			SetConsoleTextAttribute(hConsole, 302);
			cout << "\t\t\t\t\t\tRESTAURANT APP\n";
			SetConsoleTextAttribute(hConsole, 14);


			cout << "How many " << _salyamii << " pizza do you want:";
			int howMuchSalyami;
			cin >> howMuchSalyami;
			cout << endl;

			if (_dough - (howMuchSalyami * 3.2) >= 0) {
				_cheese = _cheese - (howMuchSalyami * 3);
				_pizzaSous = _pizzaSous - (howMuchSalyami * 3);
				_mushrooms = _mushrooms - (howMuchSalyami * 3);
				_dough = _dough - (howMuchSalyami * 3.2);
				_pepper = _pepper - (howMuchSalyami * 3);
				_salyami = _salyami - (howMuchSalyami * 3);
				_tomato = _tomato - (howMuchSalyami * 3);

				system("cls");
				SetConsoleTextAttribute(hConsole, 302);
				cout << "\t\t\t\t\t\tPIZZA\n";
				SetConsoleTextAttribute(hConsole, 14);

				cout << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << endl;

				cout << "Cheese    " << (howMuchSalyami * 3) << "    Is taken from stock " << endl;
				cout << "Dough    " << (howMuchSalyami * 3.2) << "    Is taken from stock " << endl;
				cout << "Pepper    " << (howMuchSalyami * 3) << "    Is taken from stock " << endl;
				cout << "MushRooms    " << (howMuchSalyami * 3) << "    Is taken from stock " << endl;
				cout << "Pizza Sous    " << (howMuchSalyami * 3) << "    Is taken from stock" << endl;
				cout << "Salyami    " << (howMuchSalyami * 3) << "    Is taken from stock" << endl;
				cout << "tomato    " << (howMuchSalyami * 3) << "    Is taken from stock" << endl;

				cout << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << endl;

				cout << endl;
				cout << endl;
				cout << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << endl;

				cout << "Calorie : " << howMuchSalyami * 4.12 << endl;

				cout << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << endl;

				cout << endl;
				cout << endl;

				showStock();
				Sleep(5000);
				system("cls");
				cout << "Do you want to rename " << _salyamii << "?[Y/N]\n";
				cin >> chose;
				if (chose == "Y" || chose == "y") {
					cout << "\nNew name for " << _salyamii << ":";
					string rnm;
					cin >> rnm;
					_salyamii = rnm;
				}

				WriteToFile(_salyamii);

				cout << "Do you want to update all pizza products?[Y/N]\n";
				cin >> admin;
				if (admin == "Y" || admin == "y") {
					_dough = 20;
					_pizzaSous = 20;
					_meat = 20;
					_pepper = 20;
					_potatoes = 20;
					_tomato = 20;
					_cheese = 20;
					_mushrooms = 20;
					_salyami = 20;
					_sausage = 20;
					system("cls");
				}
			}

			else {
				system("cls");
				SetConsoleTextAttribute(hConsole, 302);
				cout << "\t\t\t\t\t\tPIZZA\n";
				SetConsoleTextAttribute(hConsole, 14);

				cout << "You Cant order in our stock we dont have Ingredients !\n\n";
				Sleep(4000);
				system("cls");
				goto ch;

			}


		}
	}

	//Texas
	void yourChoice4(int choice) {
		if (choice == 4) {
		ch:
			system("cls");
			SetConsoleTextAttribute(hConsole, 302);
			cout << "\t\t\t\t\t\tRESTAURANT APP\n";
			SetConsoleTextAttribute(hConsole, 14);


			cout << "How many " << _texas << " pizza do you want:";
			int howMuchTExas;
			cin >> howMuchTExas;
			cout << endl;

			if (_dough - (howMuchTExas * 3.2) >= 0) {
				_cheese = _cheese - (howMuchTExas * 3);
				_pizzaSous = _pizzaSous - (howMuchTExas * 3);
				_mushrooms = _mushrooms - (howMuchTExas * 3);
				_dough = _dough - (howMuchTExas * 3.2);
				_pepper = _pepper - (howMuchTExas * 3);
				_meat = _meat - (howMuchTExas * 3);
				_tomato = _tomato - (howMuchTExas * 3);

				system("cls");
				SetConsoleTextAttribute(hConsole, 302);
				cout << "\t\t\t\t\t\tPIZZA\n";
				SetConsoleTextAttribute(hConsole, 14);

				cout << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << endl;

				cout << "Cheese    " << (howMuchTExas * 3) << "    Is taken from stock " << endl;
				cout << "Dough    " << (howMuchTExas * 3.2) << "    Is taken from stock " << endl;
				cout << "Pepper    " << (howMuchTExas * 3) << "    Is taken from stock " << endl;
				cout << "MushRooms    " << (howMuchTExas * 3) << "    Is taken from stock " << endl;
				cout << "Pizza Sous    " << (howMuchTExas * 3) << "    Is taken from stock" << endl;
				cout << "Meat    " << (howMuchTExas * 3) << "    Is taken from stock" << endl;
				cout << "Tomato    " << (howMuchTExas * 3) << "    Is taken from stock" << endl;

				cout << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << endl;

				cout << endl;
				cout << endl;
				cout << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << endl;

				cout << "Calorie : " << howMuchTExas * 3.15 << endl;

				cout << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << endl;

				cout << endl;
				cout << endl;

				showStock();
				Sleep(5000);
				system("cls");
				cout << "Do you want to rename " << _texas << "?[Y/N]\n";
				cin >> chose;
				if (chose == "Y" || chose == "y") {
					cout << "\nNew name for " << _texas << ":";
					string rnm;
					cin >> rnm;
					_vegetarian = rnm;
				}

				WriteToFile(_texas);

				cout << "Do you want to update all pizza products?[Y/N]\n";
				cin >> admin;
				if (admin == "Y" || admin == "y") {
					_dough = 20;
					_pizzaSous = 20;
					_meat = 20;
					_pepper = 20;
					_potatoes = 20;
					_tomato = 20;
					_cheese = 20;
					_mushrooms = 20;
					_salyami = 20;
					_sausage = 20;
					system("cls");
				}
			}

			else {
				system("cls");
				SetConsoleTextAttribute(hConsole, 302);
				cout << "\t\t\t\t\t\tPIZZA\n";
				SetConsoleTextAttribute(hConsole, 14);

				cout << "You Cant order in our stock we dont have Ingredients !\n\n";
				Sleep(4000);
				system("cls");
				goto ch;

			}


		}
	}

	//Amerikano
	void yourChoice5(int choice) {
		if (choice == 5) {
		ch:
			system("cls");
			SetConsoleTextAttribute(hConsole, 302);
			cout << "\t\t\t\t\t\tRESTAURANT APP\n";
			SetConsoleTextAttribute(hConsole, 14);

			cout << "How many " << _amerikano << " pizza do you want:";
			int howMuchAmerikano;
			cin >> howMuchAmerikano;
			cout << endl;

			if (_dough - (howMuchAmerikano * 3.2) >= 0) {
				_cheese = _cheese - (howMuchAmerikano * 3);
				_pizzaSous = _pizzaSous - (howMuchAmerikano * 3);
				_mushrooms = _mushrooms - (howMuchAmerikano * 3);
				_dough = _dough - (howMuchAmerikano * 3.2);
				_pepper = _pepper - (howMuchAmerikano * 3);
				_meat = _meat - (howMuchAmerikano * 3);
				_tomato = _tomato - (howMuchAmerikano * 3);
				_potatoes = _potatoes - (howMuchAmerikano * 3);

				system("cls");
				SetConsoleTextAttribute(hConsole, 302);
				cout << "\t\t\t\t\t\tPIZZA\n";
				SetConsoleTextAttribute(hConsole, 14);

				cout << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << endl;

				cout << "Cheese    " << (howMuchAmerikano * 3) << "    Is taken from stock " << endl;
				cout << "Dough    " << (howMuchAmerikano * 3.2) << "    Is taken from stock " << endl;
				cout << "Pepper    " << (howMuchAmerikano * 3) << "    Is taken from stock " << endl;
				cout << "MushRooms    " << (howMuchAmerikano * 3) << "    Is taken from stock " << endl;
				cout << "Pizza Sous    " << (howMuchAmerikano * 3) << "    Is taken from stock" << endl;
				cout << "Tomato    " << (howMuchAmerikano * 3) << "    Is taken from stock" << endl;
				cout << "Potatoes    " << (howMuchAmerikano * 3) << "    Is taken from stock" << endl;
				cout << "Meat    " << (howMuchAmerikano * 3) << "    Is taken from stock" << endl;

				cout << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << endl;

				cout << endl;
				cout << endl;
				cout << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << endl;

				cout << "Calorie : " << howMuchAmerikano * 5.15 << endl;

				cout << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << endl;

				cout << endl;
				cout << endl;

				showStock();
				Sleep(5000);
				system("cls");
				cout << "Do you want to rename " << _amerikano << "?[Y/N]\n";
				cin >> chose;
				if (chose == "Y" || chose == "y") {
					cout << "\nNew name for " << _amerikano << ":";
					string rnm;
					cin >> rnm;
					_vegetarian = rnm;
				}

				WriteToFile(_amerikano);

				cout << "Do you want to update all pizza products?[Y/N]\n";
				cin >> admin;
				if (admin == "Y" || admin == "y") {
					_dough = 20;
					_pizzaSous = 20;
					_meat = 20;
					_pepper = 20;
					_potatoes = 20;
					_tomato = 20;
					_cheese = 20;
					_mushrooms = 20;
					_salyami = 20;
					_sausage = 20;
					system("cls");
				}
			}

			else {
				system("cls");
				SetConsoleTextAttribute(hConsole, 302);
				cout << "\t\t\t\t\t\tPIZZA\n";
				SetConsoleTextAttribute(hConsole, 14);

				cout << "You Cant order in our stock we dont have Ingredients !\n\n";
				Sleep(4000);
				system("cls");
				goto ch;

			}


		}
	}

	//Exit
	void yourChoice7(int choice) {
		system("cls");
		cout << endl;
		cout << endl;
		cout << endl;
		Sleep(1000);
		SetConsoleTextAttribute(hConsole, 15);
		cout << "\t\t\t\t\t\tLoading : ";
		SetConsoleTextAttribute(hConsole, 14);
		Sleep(100);
		cout << char(219);
		cout << ' ';
		Sleep(100);
		cout << char(219);
		cout << ' ';
		Sleep(100);
		cout << char(219);
		cout << ' ';

		Sleep(100);
		cout << char(219);
		cout << ' ';

		Sleep(100);
		cout << char(219);
		cout << ' ';

		Sleep(100);
		cout << char(219);
		cout << ' ';

		Sleep(100);
		cout << char(219);
		cout << ' ';

		Sleep(100);
		cout << char(219);
		cout << ' ';

		Sleep(100);
		cout << char(219);
		cout << ' ';

		Sleep(1000);
		cout << endl;
		cout << endl;
		cout << endl;
		system("cls");
	}

	//CUSTOM
	void yourChoice6(int choice) {
		if (choice == 6) {
		ch:
			system("cls");
			SetConsoleTextAttribute(hConsole, 302);
			cout << "\t\t\t\t\t\tRESTAURANT APP\n";
			SetConsoleTextAttribute(hConsole, 14);
			cout << "How many " << _customPizza << " pizza do you want:";
			int howMuchCPIZZA;
			cin >> howMuchCPIZZA;
			cout << endl;
		b:
			showCustom();
			cout << "Choose:";
			int chc;
			cin >> chc;


			if (chc == 1) {
			dafff:
				cout << "How much dough (double):";
				double dougher;
				cin >> dougher;
				if (_dough - (howMuchCPIZZA * dougher) >= 0) {
					_dough = _dough - (howMuchCPIZZA * dougher);
					goto b;
				}
				else {
					cout << "We dont have products in stock input again\n";

					goto dafff;

				}
			}


			if (chc == 2) {
			sousssss:
				cout << "How many Pizza Sous:";
				int mm;
				cin >> mm;
				if (_pizzaSous - (howMuchCPIZZA * mm) >= 0) {
					_pizzaSous = _pizzaSous - (howMuchCPIZZA * mm);
					goto b;
				}
				else {
					cout << "We dont have products in stock input again\n";

					goto sousssss;

				}
			}


			if (chc == 3) {
			mettt:
				cout << "How many Meat:";
				int mmm;
				cin >> mmm;
				if (_meat - (howMuchCPIZZA * mmm) >= 0) {
					_meat = _meat - (howMuchCPIZZA * mmm);
					goto b;
				}
				else {
					cout << "We dont have products in stock input again\n";

					goto mettt;

				}


			}


			if (chc == 4) {
			ppr:
				cout << "How many Pepper:";
				int pepperr;
				cin >> pepperr;
				if (_pepper - (howMuchCPIZZA * pepperr) >= 0) {
					_pepper = _pepper - (howMuchCPIZZA * pepperr);
					goto b;
				}
				else {
					cout << "We dont have products in stock input again\n";


					goto ppr;

				}
			}


			if (chc == 5) {
			ptt:
				cout << "How many Potatoes:";
				int ppotatoes;
				cin >> ppotatoes;
				if (_potatoes - (howMuchCPIZZA * ppotatoes) >= 0) {
					_potatoes = _potatoes - (howMuchCPIZZA * ppotatoes);
					goto b;
				}
				else {
					cout << "We dont have products in stock input again\n";


					goto ptt;

				}
			}


			if (chc == 6) {
			tmttt:
				cout << "How many Tomato:";
				int tmt;
				cin >> tmt;
				if (_tomato - (howMuchCPIZZA * tmt) >= 0) {
					_tomato = _tomato - (howMuchCPIZZA * tmt);
					goto b;
				}
				else {
					cout << "We dont have products in stock input again\n";
					goto tmttt;

				}
			}


			if (chc == 7) {
			chis:
				cout << "How many Cheese:";
				int chs;
				cin >> chs;
				if (_cheese - (howMuchCPIZZA * chs) >= 0) {
					_cheese = _cheese - (howMuchCPIZZA * chs);
					goto b;
				}
				else {
					cout << "We dont have products in stock input again\n";


					goto chis;

				}
			}


			if (chc == 8) {
			mushrums:
				cout << "How many Mushrooms:";
				int f;
				cin >> f;
				if (_mushrooms - (howMuchCPIZZA * f) >= 0) {
					_mushrooms = _mushrooms - (howMuchCPIZZA * f);
					goto b;
				}
				else {
					cout << "We dont have products in stock input again\n";


					goto mushrums;
				}
			}


			if (chc == 9) {
			salyami:
				cout << "How many Salyami:";
				int ff;
				cin >> ff;
				if (_salyami - (howMuchCPIZZA * ff) >= 0) {
					_salyami = _salyami - (howMuchCPIZZA * ff);
					goto b;
				}
				else {
					cout << "We dont have products in stock input again\n";


					goto salyami;

				}
			}



			if (chc == 10) {
			sasiska:
				cout << "How many Sausage:";
				int ffs;
				cin >> ffs;
				if (_sausage - (howMuchCPIZZA * ffs) >= 0) {
					_sausage = _sausage - (howMuchCPIZZA * ffs);
					goto b;
				}
				else {
					cout << "We dont have products in stock input again\n";


					goto sasiska;

				}
			}

			if (chc == 11) {
				showStock();
				Sleep(4000);
				goto b;
			}

			system("cls");
			showStock();
			Sleep(5000);
			system("cls");

			WriteToFile(_customPizza);

			cout << "Do you want to update all pizza products?[Y/N]\n";
			cin >> admin;
			if (admin == "Y" || admin == "y") {
				_dough = 20;
				_pizzaSous = 20;
				_meat = 20;
				_pepper = 20;
				_potatoes = 20;
				_tomato = 20;
				_cheese = 20;
				_mushrooms = 20;
				_salyami = 20;
				_sausage = 20;
				system("cls");
			}





		}
	}

	void your8choice(int choice) {
		system("cls");
		cout << "__________________________________________________________________________________________________________________\n";
		cout << "|\t\t\t\t\t\tMARQARITA INFORMATION\t\t\t\t\t\t  |\n";
		cout << "|_________________________________________________________________________________________________________________|\n";
		cout << "|Pizza Margherita (more commonly known in English as Margherita pizza) is a typical Neapolitan pizza, made with San\n|Marzano tomatoes, mozzarella cheese, fresh basil, salt, and extra-virgin olive oil.\n";
		cout << "|__________________________________________________________________________________________________________________\n";
		Sleep(6000);
		system("cls");
	}

	void your9choice(int choice) {
		system("cls");
		cout << "__________________________________________________________________________________________________________________\n";
		cout << "|\t\t\t\t\t\VEGATARIAN INFORMATION\t\t\t\t\t\t\t  |\n";
		cout << "|_________________________________________________________________________________________________________________|\n";
		cout << "|Everyone loves pizza. This disc of dough is an incredible blank canvas to create innovative and crowd-pleasing   \n|pies. Loved by vegetarians, vegans, and carnivores alike, pizza isn't just a quick dinner dish anymore, \n|or an on-the-go bite. Pizza is becoming a gourmet assemblage of delicious, \n|top-of-the-line ingredients.Our extensive collection of recipes includes pizza topping\n|s ranging from our favorite vegetables to creative twists on meat substitutes.\n";
		cout << "|__________________________________________________________________________________________________________________\n";
		Sleep(6000);
		system("cls");
	}

	void your10choice(int choice) {
		system("cls");
		cout << "__________________________________________________________________________________________________________________\n";
		cout << "|\t\t\t\t\t\SALYAMI INFORMATION\t\t\t\t\t\t\t  |\n";
		cout << "|_________________________________________________________________________________________________________________|\n";
		cout << "|Salyami is a spicy variety of salami of Italian-American origin[2],as well as the name of a pizza of American origin.\n|It is made from pork, although there are American varieties made from chicken, beef, etc.\n|It comes from spicy salamimade in southern Italy,such as salsiccia napoletana piccante,\n|spicy sausage from Naples or Sopressata from Calabria.\n|Peperoni is a popular pizza ingredient in American-style pizzerias.\n";
		cout << "|__________________________________________________________________________________________________________________\n";
		Sleep(6000);
		system("cls");
	}

	void your11choice(int choice) {
		system("cls");
		cout << "__________________________________________________________________________________________________________________\n";
		cout << "|\t\t\t\t\t\TEXAS INFORMATION\t\t\t\t\t\t\t  |\n";
		cout << "|_________________________________________________________________________________________________________________|\n";
		cout << "|Pizza sauce, gouda cheese, chicken fillet, bell pepper, corn, red onion i think it is the best pizza in the world|\n";
		cout << "|_________________________________________________________________________________________________________________|\n";
		Sleep(6000);
		system("cls");
	}

	void your12choice(int choice) {
		system("cls");
		cout << "__________________________________________________________________________________________________________________\n";
		cout << "|\t\t\t\t\t\AMERIKANO INFORMATION\t\t\t\t\t\t\t  |\n";
		cout << "|_________________________________________________________________________________________________________________|\n";
		cout << "|Amerikana--Pizza sauce, cottage cheese, sausage, french fries, pickles, i think it is the best pizza in the world|\n";
		cout << "|_________________________________________________________________________________________________________________|\n";
		Sleep(6000);
		system("cls");
	}

	void yourstockchoice(int choice) {
		system("cls");
		showStock();
		Sleep(5000);
	}

	void pizzaMenuu() {
		system("cls");
		SetConsoleTextAttribute(hConsole, 14);
		cout << "....................PIZZA....................\n";
		cout << "No# --------------------------------- Calorie\n";
		cout << "_____________________________________________\n";
		SetConsoleTextAttribute(hConsole, 14);
		cout << endl;
		cout << "[1]  " << _marqarita << "                         2.50kl\n";
		cout << "[2]  " << _vegetarian << "                        3.33kl\n";
		cout << "[3]  " << _salyamii << "                           4.12kl\n";
		cout << "[4]  " << _texas << "                             3.15kl\n";
		cout << "[5]  " << _amerikano << "                         5.15kl\n";
		cout << "[6]  " << _customPizza << "                        ? kl \n";
		cout << "[7]  Exit      \n";
		cout << "_____________________________________________";
		cout << endl;
		cout << "[8]  About Marqarita                   2.50kl\n";
		cout << "[9]  About Vegetarian                  3.33kl\n";
		cout << "[10] About Salyami                     4.12kl\n";
		cout << "[11] About Texas                       3.15kl\n";
		cout << "[12] About Amerikano                   5.15kl\n";
		cout << "[13] Stock Pizza                             \n";
		cout << "_____________________________________________";
		cout << endl;
		cout << "What do you want?[1,2,3,4,5,6,7,8,9,10,11,12,13]:";
	}

	void showStock() {

		SetConsoleTextAttribute(hConsole, 302);

		cout << "\t\t\t\t\t\tSTOCK\n";
		SetConsoleTextAttribute(hConsole, 14);

		cout << "_____________________________________________________\n";
		cout << "Dough : " << _dough << endl;
		cout << "Pizza Sous : " << _pizzaSous << endl;
		cout << "Meat : " << _meat << endl;
		cout << "Pepper : " << _pepper << endl;
		cout << "Potatoes : " << _potatoes << endl;
		cout << "Tomato : " << _tomato << endl;
		cout << "Cheese : " << _cheese << endl;
		cout << "Mushrooms : " << _mushrooms << endl;
		cout << "Salyami : " << _salyami << endl;
		cout << "Sausage : " << _sausage << endl;
		cout << "_____________________________________________________\n";

	}

	void showCustom() {

		SetConsoleTextAttribute(hConsole, 5);

		cout << "\t\t\t\t\t\tCUSTOM PIZZA\n";
		SetConsoleTextAttribute(hConsole, 14);

		cout << "_____________________________________________________\n";
		cout << "1)Dough" << endl;
		cout << "2)Pizza Sous" << endl;
		cout << "3)Meat" << endl;
		cout << "4)Pepper" << endl;
		cout << "5)Potatoes" << endl;
		cout << "6)Tomato" << endl;
		cout << "7)Cheese" << endl;
		cout << "8)Mushrooms" << endl;
		cout << "9)Salyami " << endl;
		cout << "10)Sausage " << endl;
		cout << "11)Stock " << endl;
		cout << "12)Exit " << endl;
		cout << "_____________________________________________________\n";

	}

	void menyupizza() {
		system("cls");

		cout << "\t\t\t\tAll PIZZA PRODUCTS SUCCESFULY UPDATED\n";
		_tomato = 20;
		_sausage = 20;
		_cheese = 20;
		_dough = 20;
		_mushrooms = 20;
		_pizzaSous = 20;
		_meat = 20;
		_potatoes = 20;
		_pepper = 20;
		_salyami = 20;
		system("cls");
	}

	void updatePizza() {
		system("cls");

		cout << "\t\t\t\tAll PRODUCTS SUCCESFULY UPDATED\n";
		_tomato = 20;
		_sausage = 20;
		_cheese = 20;
		_dough = 20;
		_mushrooms = 20;
		_pizzaSous = 20;
		_meat = 20;
		_potatoes = 20;
		_pepper = 20;
		_salyami = 20;
		system("cls");
	}

	void setWhatToUpdatePizza() {
		system("cls");
		cout << "\t\t\t\tAll PIZZA PRODUCTS SUCCESFULY UPDATED\n";
		_tomato = 20;
		_sausage = 20;
		_cheese = 20;
		_dough = 20;
		_mushrooms = 20;
		_pizzaSous = 20;
		_meat = 20;
		_potatoes = 20;
		_pepper = 20;
		_salyami = 20;
		system("cls");
	}
};

class xengel {
public:
	double _dough2;
	int _xengelSous;
	int _meat2;
	string _gurcuXengel;
	string _azeXengel;
	string _customXengel;


	xengel() {
		_dough2 = 40;
		_xengelSous = 40;
		_meat2 = 40;
		_gurcuXengel = "Gurcu Khangal";
		_azeXengel = "Aze Khangal";
		_customXengel = "Custom Khangal";
	}

	xengel(double dough2, int xengelSous, int et2, string gurcuXengel, string azeXengel, string custom) {
		_dough2 = dough2;
		_xengelSous = xengelSous;
		_meat2 = et2;
		_gurcuXengel = gurcuXengel;
		_azeXengel = azeXengel;
		_customXengel = custom;
	}

	void setDough2(double dough2) {
		_dough2 = dough2;
	}

	void setXengelSous(int xengelSous) {
		_xengelSous = xengelSous;
	}

	void setEt2(int et2) {
		_meat2 = et2;
	}

	double getDough() { return _dough2; }

	int getEt() { return _meat2; }

	int getXengelSous() { return _xengelSous; }

	void WriteToFile(string name) {
		ofstream file("Xengel.txt", ios_base::app);

		if (file.is_open()) {

			file << name << ' ' << _dough2 << ' ' << _xengelSous << ' ' << _meat2 << '\n';

		}

		file.close();
	}

	void yourGurcuXengel(int choice) {
		if (choice == 1) {
		ch:
			system("cls");
			SetConsoleTextAttribute(hConsole, 302);
			cout << "\t\t\t\t\t\tRESTAURANT APP\n";
			SetConsoleTextAttribute(hConsole, 14);


			cout << "How many " << _gurcuXengel << " do you want:";
			int howMuchGeoXengel;
			cin >> howMuchGeoXengel;
			cout << endl;

			if (_dough2 - (howMuchGeoXengel * 3.2) >= 0) {
				_meat2 = _meat2 - (howMuchGeoXengel * 3);
				_xengelSous = _xengelSous - (howMuchGeoXengel * 3);
				_dough2 = _dough2 - (howMuchGeoXengel * 3.2);

				system("cls");
				SetConsoleTextAttribute(hConsole, 302);
				cout << "\t\t\t\t\t\tKHANGAL\n";
				SetConsoleTextAttribute(hConsole, 14);

				cout << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << endl;

				cout << "Meat    " << (howMuchGeoXengel * 3) << "    Is taken from stock " << endl;
				cout << "Dough    " << (howMuchGeoXengel * 3.2) << "    Is taken from stock " << endl;
				cout << "Xengel Sous    " << (howMuchGeoXengel * 3) << "    Is taken from stock" << endl;

				cout << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << endl;

				cout << endl;
				cout << endl;
				cout << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << endl;

				cout << "Calorie : " << howMuchGeoXengel * 2.15 << endl;

				cout << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << endl;

				cout << endl;
				cout << endl;

				showStock2();
				Sleep(5000);
				system("cls");
				cout << "Do you want to rename " << _gurcuXengel << "?[Y/N]";
				cin >> chose;
				if (chose == "Y" || chose == "y") {
					cout << "\nNew name for " << _gurcuXengel << ":";
					string rnm;
					cin >> rnm;
					_gurcuXengel = rnm;
				}

				WriteToFile(_gurcuXengel);

				cout << "Do you want to update all Xengel products?[Y/N]";
				cin >> admin;
				if (admin == "Y" || admin == "y") {
					_dough2 = 40;
					_xengelSous = 40;
					_meat2 = 40;
					system("cls");
				}
			}

			else {
				system("cls");
				SetConsoleTextAttribute(hConsole, 302);
				cout << "\t\t\t\t\t\tKHANGAL\n";
				SetConsoleTextAttribute(hConsole, 14);

				cout << "You Cant order in our stock we dont have Ingredients !\n\n";
				Sleep(4000);
				system("cls");
				goto ch;

			}


		}
	}

	void yourAzeXengel(int choice) {
		if (choice == 2) {
		ch:
			system("cls");
			SetConsoleTextAttribute(hConsole, 302);
			cout << "\t\t\t\t\t\tRESTAURANT APP\n";
			SetConsoleTextAttribute(hConsole, 14);


			cout << "How many " << _azeXengel << " do you want:";
			int howMuchAzeXengel;
			cin >> howMuchAzeXengel;
			cout << endl;

			if (_dough2 - (howMuchAzeXengel * 3.2) >= 0) {
				_meat2 = _meat2 - (howMuchAzeXengel * 3);
				_xengelSous = _xengelSous - (howMuchAzeXengel * 3);
				_dough2 = _dough2 - (howMuchAzeXengel * 3.2);

				system("cls");
				SetConsoleTextAttribute(hConsole, 302);
				cout << "\t\t\t\t\t\tKHANGAL\n";
				SetConsoleTextAttribute(hConsole, 14);

				cout << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << endl;

				cout << "Meat    " << (howMuchAzeXengel * 3) << "    Is taken from stock " << endl;
				cout << "Dough    " << (howMuchAzeXengel * 3.2) << "    Is taken from stock " << endl;
				cout << "Xengel Sous    " << (howMuchAzeXengel * 3) << "    Is taken from stock" << endl;

				cout << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << endl;

				cout << endl;
				cout << endl;
				cout << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << endl;

				cout << "Calorie : " << howMuchAzeXengel * 2.40 << endl;

				cout << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << endl;

				cout << endl;
				cout << endl;

				showStock2();
				Sleep(5000);
				system("cls");
				cout << "Do you want to rename " << _azeXengel << "?[Y/N]";
				cin >> chose;
				if (chose == "Y" || chose == "y") {
					cout << "\nNew name for " << _azeXengel << ":";
					string rnm;
					cin >> rnm;
					_azeXengel = rnm;
				}

				WriteToFile(_azeXengel);

				cout << "Do you want to update all Xengel products?[Y/N]";
				cin >> admin;
				if (admin == "Y" || admin == "y") {
					_dough2 = 40;
					_xengelSous = 40;
					_meat2 = 40;
					system("cls");
				}
			}

			else {
				system("cls");
				SetConsoleTextAttribute(hConsole, 302);
				cout << "\t\t\t\t\t\tKHANGAL\n";
				SetConsoleTextAttribute(hConsole, 14);

				cout << "You Cant order in our stock we dont have Ingredients !\n\n";
				Sleep(4000);
				system("cls");
				goto ch;

			}


		}
	}

	void yourChoice33(int choice) {
		if (choice == 3) {
		ch:
			system("cls");
			SetConsoleTextAttribute(hConsole, 302);
			cout << "\t\t\t\t\t\tRESTAURANT APP\n";
			SetConsoleTextAttribute(hConsole, 14);
			cout << "How many " << _customXengel << " do you want:";
			int howMuchCXENGEL;
			cin >> howMuchCXENGEL;
			cout << endl;
		b:
			showCustom();
			cout << "Choose:";
			int chc;
			cin >> chc;


			if (chc == 1) {
			a:
				cout << "How much dough (double):";
				double dougher;
				cin >> dougher;
				if (_dough2 - (howMuchCXENGEL * dougher) >= 0) {
					_dough2 = _dough2 - (howMuchCXENGEL * dougher);
					goto b;
				}
				else {
					cout << "We dont have products in stock input again\n";

					goto a;
				}
			}


			if (chc == 2) {
			m:
				cout << "How many Khangal Sous:";
				int mm;
				cin >> mm;
				if (_xengelSous - (howMuchCXENGEL * mm) >= 0) {
					_xengelSous = _xengelSous - (howMuchCXENGEL * mm);
					goto b;
				}
				else {
					cout << "We dont have products in stock input again\n";


					goto m;
					system("cls");
				}
			}


			if (chc == 3) {
			mmma:
				cout << "How many Meat:";
				int mmm;
				cin >> mmm;
				if (_meat2 - (howMuchCXENGEL * mmm) >= 0) {
					_meat2 = _meat2 - (howMuchCXENGEL * mmm);
					goto b;
				}
				else {
					cout << "We dont have products in stock input again\n";


					goto mmma;

				}


			}
			if (chc == 4) {
				showStock2();
				Sleep(4000);
				goto b;
			}


			system("cls");
			showStock2();
			Sleep(5000);
			system("cls");

			WriteToFile(_customXengel);

			cout << "Do you want to update all Khangal products?[Y/N]\n";
			cin >> admin;
			if (admin == "Y" || admin == "y") {
				_dough2 = 20;
				_xengelSous = 20;
				_meat2 = 20;
				system("cls");
			}
		}
	}

	void yourChoice4(int choice) {
		system("cls");
		cout << endl;
		cout << endl;
		cout << endl;
		Sleep(1000);
		SetConsoleTextAttribute(hConsole, 15);
		cout << "\t\t\t\t\t\tLoading : ";
		SetConsoleTextAttribute(hConsole, 14);
		Sleep(100);
		cout << char(219);
		cout << ' ';
		Sleep(100);
		cout << char(219);
		cout << ' ';
		Sleep(100);
		cout << char(219);
		cout << ' ';

		Sleep(100);
		cout << char(219);
		cout << ' ';

		Sleep(100);
		cout << char(219);
		cout << ' ';

		Sleep(100);
		cout << char(219);
		cout << ' ';

		Sleep(100);
		cout << char(219);
		cout << ' ';

		Sleep(100);
		cout << char(219);
		cout << ' ';

		Sleep(100);
		cout << char(219);
		cout << ' ';

		Sleep(1000);
		cout << endl;
		cout << endl;
		cout << endl;
		system("cls");
	}

	void your6choice(int choice) {
		system("cls");
		cout << "__________________________________________________________________________________________________________________\n";
		cout << "|\t\t\t\t\t\tKHANGAL INFORMATION\t\t\t\t\t\t  |\n";
		cout << "|_________________________________________________________________________________________________________________|\n";
		cout << "|Hengel, hangel or hingel (Azerbaijani Turkish: Xingal/Xengel, Turkish: Hangel/Hengel, Dagestan: Hinkal) is an \n|insincen type of dumpling that has appeared in the Caucasus[1]. It is held in Artvin and surrounding Area in \n|Turkey (especially in Shavşat district), Ardahan, Sivas, Eastern Black Sea, Erzurum, Kars. It is known by a \n|similar name almost everywhere in the Caucasus,especially in Dagestan. There is also a version of potatoes put \n|in it.\n";
		cout << "|__________________________________________________________________________________________________________________\n";
		Sleep(6000);
		system("cls");
	}

	void your5choice(int choice) {
		system("cls");
		cout << "________________________________________________________\n";
		cout << "|\t\tKHANGAL INFORMATION\t\t\t|\n";
		cout << "|_______________________________________________________|\n";
		cout << "|Khinkali is one of Georgia’s most popular dishes and is \n|our guests' favorite! These large, juicy beef-filled \n|dumplings are spiced with chile, dzira, and cilantro.No\n|meal is complete without these succulent and flavorful\n|Georgian style dumplings!\n";
		cout << "|_______________________________________________________|\n";
		Sleep(6000);
		system("cls");
	}

	void yourstockchoice(int choice) {
		system("cls");
		showStock2();
		Sleep(5000);
	}

	void showStock2() {

		SetConsoleTextAttribute(hConsole, 14);
		cout << "\t\t\t\t\t\tKHANGAL STOCK\n";
		cout << "_____________________________________________________\n";
		cout << "Meat : " << _meat2 << endl;
		cout << "Dough : " << _dough2 << endl;
		cout << "Xengel Sous : " << _xengelSous << endl;
		cout << "_____________________________________________________\n";

	}

	void khangalMenuu() {
		system("cls");
		SetConsoleTextAttribute(hConsole, 14);
		cout << "...................KHANGAL...................\n";
		SetConsoleTextAttribute(hConsole, 14);
		cout << "No# --------------------------------- Calorie";
		cout << endl;
		cout << "_____________________________________________";
		cout << endl;
		cout << "[1]  " << _gurcuXengel << "                     2.15kl\n";
		cout << "[2]  " << _azeXengel << "                       2.40kl\n";
		cout << "[3]  Custom Khangal                      ? kl\n";
		cout << "[4]  Exit      \n";
		cout << "_____________________________________________";
		cout << endl;
		cout << "[5]  Informtion About Georgian Khangal      \n";
		cout << "[6]  Informtion About Azerbaijan Khangal      \n";
		cout << "[7]  Stock Khangal      \n";
		cout << "_____________________________________________\n";
		cout << "What do you want?[1,2,3,4,5,6,7]:";
	}

	void showCustom() {

		SetConsoleTextAttribute(hConsole, 302);

		cout << "\t\t\t\t\t\tCUSTOM KHANGAL\n";
		SetConsoleTextAttribute(hConsole, 14);

		cout << "_____________________________________________________\n";
		cout << "1)Dough" << endl;
		cout << "2)Khangal Sous" << endl;
		cout << "3)Meat" << endl;
		cout << "4)Stock " << endl;
		cout << "5)Stop " << endl;
		cout << "_____________________________________________________\n";

	}

	void updateXengel() {
		_dough2 = 40;
		_xengelSous = 40;
		_meat2 = 40;
	};
};

class Barbecue {
public:

	double _kababSous;
	int _chicken;
	int _meat3;

	string _chickenBarbecue;
	string _Barbecue;
	string _lule;
	string _tike;
	string _customBarbecue;


	Barbecue() {
		_kababSous = 20;
		_chicken = 20;
		_meat3 = 20;
		_chickenBarbecue = "Barbecue chicken";
		_Barbecue = "Barbecue";
		_lule = "Lule";
		_tike = "Tike";
		_customBarbecue = "Custom Barbecue";
	}

	Barbecue(double kababSous, int chicken, int et3, string chickenBarbecue, string Barbecue, string lule, string tike, string barbecue) {

		_kababSous = kababSous;
		_chicken = chicken;
		_meat3 = et3;

		_chickenBarbecue = chickenBarbecue;
		_Barbecue = Barbecue;
		_lule = lule;
		_tike = tike;
		_customBarbecue = barbecue;

	}

	void WriteToFile(string name) {
		ofstream file("Barbecue.txt", ios_base::app);

		if (file.is_open()) {

			file << name << ' ' << _kababSous << ' ' << _chicken << ' ' << _meat3 << '\n';

		}

		file.close();
	}

	void setBarbecueSous(int kababSous) {
		_kababSous = kababSous;
	}

	void setChicken(int chicken) {
		_chicken = chicken;
	}

	void setMeat3(int et3) {
		_meat3 = et3;
	}

	double getBarbecueSous() { return _kababSous; }

	int getMeat() { return _meat3; }

	int getChicken() { return _chicken; }

	void yourChickenBarbecue(int choice) {
		if (choice == 1) {
		ch:
			system("cls");
			SetConsoleTextAttribute(hConsole, 302);
			cout << "\t\t\t\t\t\tRESTAURANT APP\n";
			SetConsoleTextAttribute(hConsole, 14);


			cout << "How many plates " << _chickenBarbecue << " do you want:";
			int howchcBarbecue;
			cin >> howchcBarbecue;
			cout << endl;

			if (_kababSous - (howchcBarbecue * 3.2) >= 0) {

				_kababSous = _kababSous - (howchcBarbecue * 3.2);
				_chicken = _chicken - (howchcBarbecue * 3);

				system("cls");
				SetConsoleTextAttribute(hConsole, 302);
				cout << "\t\t\t\t\t\tBARBECUE\n";
				SetConsoleTextAttribute(hConsole, 14);

				cout << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << endl;

				cout << "Chicken    " << (howchcBarbecue * 3) << "    Is taken from stock " << endl;
				cout << "Kabab Sous    " << (howchcBarbecue * 3.2) << "    Is taken from stock" << endl;

				cout << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << endl;

				cout << endl;
				cout << endl;
				cout << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << endl;

				cout << "Calorie : " << howchcBarbecue * 3.15 << endl;

				cout << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << endl;

				cout << endl;
				cout << endl;

				showStock22();
				Sleep(5000);
				system("cls");
				cout << "Do you want to rename " << _chickenBarbecue << "?[Y/N]";
				cin >> chose;
				if (chose == "Y" || chose == "y") {
					cout << "\nNew name for " << _chickenBarbecue << ":";
					string rnm;
					cin >> rnm;
					_Barbecue = rnm;
				}

				WriteToFile(_chickenBarbecue);

				cout << "Do you want to update all Barbecue products?[Y/N]";
				cin >> admin;
				if (admin == "Y" || admin == "y") {
					_chicken = 20;
					_kababSous = 20;
					_meat3 = 20;
					system("cls");
				}
			}

			else {
				system("cls");
				SetConsoleTextAttribute(hConsole, 302);
				cout << "\t\t\t\t\t\tBARBECUE\n";
				SetConsoleTextAttribute(hConsole, 14);

				cout << "You Cant order in our stock we dont have Ingredients !\n\n";
				Sleep(4000);
				system("cls");
				goto ch;

			}
		}
	}

	void yourBarbecue(int choice) {
		if (choice == 2) {
		ch:
			system("cls");
			SetConsoleTextAttribute(hConsole, 302);
			cout << "\t\t\t\t\t\tRESTAURANT APP\n";
			SetConsoleTextAttribute(hConsole, 14);


			cout << "How many plates " << _Barbecue << " do you want:";
			int howBarbecue;
			cin >> howBarbecue;
			cout << endl;

			if (_kababSous - (howBarbecue * 3.2) >= 0) {
				_meat3 = _meat3 - (howBarbecue * 3);
				_kababSous = _kababSous - (howBarbecue * 3.2);

				system("cls");
				SetConsoleTextAttribute(hConsole, 302);
				cout << "\t\t\t\t\t\tBARBECUE\n";
				SetConsoleTextAttribute(hConsole, 14);

				cout << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << endl;

				cout << "Meat    " << (howBarbecue * 3) << "    Is taken from stock " << endl;
				cout << "Kabab Sous    " << (howBarbecue * 3.2) << "    Is taken from stock" << endl;

				cout << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << endl;

				cout << endl;
				cout << endl;
				cout << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << endl;

				cout << "Calorie : " << howBarbecue * 4.95 << endl;

				cout << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << endl;

				cout << endl;
				cout << endl;

				showStock22();
				Sleep(5000);
				system("cls");
				cout << "Do you want to rename " << _Barbecue << "?[Y/N]";
				cin >> chose;
				if (chose == "Y" || chose == "y") {
					cout << "\nNew name for " << _Barbecue << ":";
					string rnm;
					cin >> rnm;
					_Barbecue = rnm;
				}

				WriteToFile(_Barbecue);

				cout << "Do you want to update all Barbecue products?[Y/N]";
				cin >> admin;
				if (admin == "Y" || admin == "y") {
					_chicken = 20;
					_kababSous = 20;
					_meat3 = 20;
					system("cls");
				}
			}

			else {
				system("cls");
				SetConsoleTextAttribute(hConsole, 302);
				cout << "\t\t\t\t\t\tBARBECUE\n";
				SetConsoleTextAttribute(hConsole, 14);

				cout << "You Cant order in our stock we dont have Ingredients !\n\n";
				Sleep(4000);
				system("cls");
				goto ch;

			}
		}
	}

	void yourLule(int choice) {
		if (choice == 3) {
		ch:
			system("cls");
			SetConsoleTextAttribute(hConsole, 302);
			cout << "\t\t\t\t\t\tRESTAURANT APP\n";
			SetConsoleTextAttribute(hConsole, 14);


			cout << "How many plates " << _lule << " do you want:";
			int howmuchlule;
			cin >> howmuchlule;
			cout << endl;

			if (_kababSous - (howmuchlule * 3.2) >= 0) {
				_meat3 = _meat3 - (howmuchlule * 3);
				_kababSous = _kababSous - (howmuchlule * 3.2);

				system("cls");
				SetConsoleTextAttribute(hConsole, 302);
				cout << "\t\t\t\t\t\tBARBECUE\n";
				SetConsoleTextAttribute(hConsole, 14);

				cout << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << endl;

				cout << "Meat    " << (howmuchlule * 3) << "    Is taken from stock " << endl;
				cout << "Kabab Sous    " << (howmuchlule * 3.2) << "    Is taken from stock" << endl;

				cout << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << endl;

				cout << endl;
				cout << endl;
				cout << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << endl;

				cout << "Calorie : " << howmuchlule * 4.40 << endl;

				cout << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << endl;

				cout << endl;
				cout << endl;

				showStock22();
				Sleep(5000);
				system("cls");
				cout << "Do you want to rename " << _lule << "?[Y/N]";
				cin >> chose;
				if (chose == "Y" || chose == "y") {
					cout << "\nNew name for " << _lule << ":";
					string rnm;
					cin >> rnm;
					_Barbecue = rnm;
				}

				WriteToFile(_lule);

				cout << "Do you want to update all Barbecue products?[Y/N]";
				cin >> admin;
				if (admin == "Y" || admin == "y") {
					_chicken = 20;
					_kababSous = 20;
					_meat3 = 20;
					system("cls");
				}
			}

			else {
				system("cls");
				SetConsoleTextAttribute(hConsole, 302);
				cout << "\t\t\t\t\t\tBARBECUE\n";
				SetConsoleTextAttribute(hConsole, 14);

				cout << "You Cant order in our stock we dont have Ingredients !\n\n";
				Sleep(4000);
				system("cls");
				goto ch;

			}
		}
	}

	void yourTike(int choice) {
		if (choice == 4) {
		ch:
			system("cls");
			SetConsoleTextAttribute(hConsole, 302);
			cout << "\t\t\t\t\t\tRESTAURANT APP\n";
			SetConsoleTextAttribute(hConsole, 14);


			cout << "How many plates " << _tike << " do you want:";
			int HOWmUCHtIKE;
			cin >> HOWmUCHtIKE;
			cout << endl;

			if (_kababSous - (HOWmUCHtIKE * 3.2) >= 0) {
				_meat3 = _meat3 - (HOWmUCHtIKE * 3);
				_kababSous = _kababSous - (HOWmUCHtIKE * 3.2);

				system("cls");
				SetConsoleTextAttribute(hConsole, 302);
				cout << "\t\t\t\t\t\tBARBECUE\n";
				SetConsoleTextAttribute(hConsole, 14);

				cout << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << endl;

				cout << "Meat    " << (HOWmUCHtIKE * 3) << "    Is taken from stock " << endl;
				cout << "Kabab Sous    " << (HOWmUCHtIKE * 3.2) << "    Is taken from stock" << endl;

				cout << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << endl;

				cout << endl;
				cout << endl;
				cout << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << endl;

				cout << "Calorie : " << HOWmUCHtIKE * 4.22 << endl;

				cout << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << endl;

				cout << endl;
				cout << endl;

				showStock22();
				Sleep(5000);
				system("cls");
				cout << "Do you want to rename " << _tike << "?[Y/N]";
				cin >> chose;
				if (chose == "Y" || chose == "y") {
					cout << "\nNew name for " << _tike << ":";
					string rnm;
					cin >> rnm;
					_Barbecue = rnm;
				}

				WriteToFile(_tike);

				cout << "Do you want to update all Barbecue products?[Y/N]";
				cin >> admin;
				if (admin == "Y" || admin == "y") {
					_chicken = 20;
					_kababSous = 20;
					_meat3 = 20;
					system("cls");
				}
			}

			else {
				system("cls");
				SetConsoleTextAttribute(hConsole, 302);
				cout << "\t\t\t\t\t\tBARBECUE\n";
				SetConsoleTextAttribute(hConsole, 14);

				cout << "You Cant order in our stock we dont have Ingredients !\n\n";
				Sleep(4000);
				system("cls");
				goto ch;

			}
		}
	}

	void yourCustomBarbecue(int choice) {
		if (choice == 5) {
		ch:
			system("cls");
			SetConsoleTextAttribute(hConsole, 302);
			cout << "\t\t\t\t\t\tRESTAURANT APP\n";
			SetConsoleTextAttribute(hConsole, 14);
			cout << "How many " << _customBarbecue << " do you want:";
			int howMuchCXENGEL;
			cin >> howMuchCXENGEL;
			cout << endl;
		b:
			showCustomBrB();
			cout << "Choose:";
			int chc;
			cin >> chc;


			if (chc == 1) {
			a:
				cout << "How much Chicken :";
				double dougher;
				cin >> dougher;
				if (_chicken - (howMuchCXENGEL * dougher) >= 0) {
					_chicken = _chicken - (howMuchCXENGEL * dougher);
					goto b;
				}
				else {
					cout << "We dont have products in stock input again\n";

					goto a;
				}
			}


			if (chc == 2) {
			m:
				cout << "How many Barbecue Sous(double):";
				int mm;
				cin >> mm;
				if (_kababSous - (howMuchCXENGEL * mm) >= 0) {
					_kababSous = _kababSous - (howMuchCXENGEL * mm);
					goto b;
				}
				else {
					cout << "We dont have products in stock input again\n";


					goto m;
					system("cls");
				}
			}


			if (chc == 3) {
			mmma:
				cout << "How many Meat:";
				int mmm;
				cin >> mmm;
				if (_meat3 - (howMuchCXENGEL * mmm) >= 0) {
					_meat3 = _meat3 - (howMuchCXENGEL * mmm);
					goto b;
				}
				else {
					cout << "We dont have products in stock input again\n";


					goto mmma;

				}


			}
			if (chc == 4) {
				showStock22();
				Sleep(4000);
				goto b;
			}


			system("cls");
			showStock22();
			Sleep(5000);
			system("cls");

			WriteToFile(_customBarbecue);

			cout << "Do you want to update all Barbecue products?[Y/N]\n";
			cin >> admin;
			if (admin == "Y" || admin == "y") {
				_chicken = 20;
				_kababSous = 20;
				_meat3 = 20;
				system("cls");
			}
		}
	}

	void yourChoice6(int choice) {
		system("cls");
		cout << endl;
		cout << endl;
		cout << endl;
		Sleep(1000);
		SetConsoleTextAttribute(hConsole, 15);
		cout << "\t\t\t\t\t\tLoading : ";
		SetConsoleTextAttribute(hConsole, 14);
		Sleep(100);
		cout << char(219);
		cout << ' ';
		Sleep(100);
		cout << char(219);
		cout << ' ';
		Sleep(100);
		cout << char(219);
		cout << ' ';

		Sleep(100);
		cout << char(219);
		cout << ' ';

		Sleep(100);
		cout << char(219);
		cout << ' ';

		Sleep(100);
		cout << char(219);
		cout << ' ';

		Sleep(100);
		cout << char(219);
		cout << ' ';

		Sleep(100);
		cout << char(219);
		cout << ' ';

		Sleep(100);
		cout << char(219);
		cout << ' ';

		Sleep(1000);
		cout << endl;
		cout << endl;
		cout << endl;
		system("cls");
	}

	void yourInfchoice(int choice) {
		system("cls");
		cout << "__________________________________________________________________________________________________________________\n";
		cout << "|\t\t\t\t\t\Barbecue INFORMATION\t\t\t\t\t\t\t  |\n";
		cout << "|_________________________________________________________________________________________________________________|\n";
		cout << "|Barbecue is a cooked meat, with its origins in Middle Eastern cuisines.Many variants are popular around the world|\n";
		cout << "|_________________________________________________________________________________________________________________|\n";
		Sleep(6000);
		system("cls");
	}

	void showStock22() {
		SetConsoleTextAttribute(hConsole, 14);
		cout << "_____________________________________________________\n";
		cout << "Chicken : " << _chicken << endl;
		cout << "Barbecue Sous : " << _kababSous << endl;
		cout << "Meat : " << _meat3 << endl;
		cout << "_____________________________________________________\n";
	}

	void barbecueMenu() {
		system("cls");
		SetConsoleTextAttribute(hConsole, 14);
		cout << "...................Barbecue...................\n";
		SetConsoleTextAttribute(hConsole, 14);
		cout << "No# ---------------------------------- Calorie";
		cout << endl;
		cout << "______________________________________________";
		cout << endl;
		cout << "[1]  " << _chickenBarbecue << "			3.15kl\n";
		cout << "[2]  " << _Barbecue << "				4.95kl\n";
		cout << "[3]  " << _lule << "				4.40kl\n";
		cout << "[4]  " << _tike << "				4.22kl\n";
		cout << "[5]  Custom Barbecue                      ? kl\n";
		cout << "[6]  Exit      \n";
		cout << "_______________________________________________";
		cout << endl;
		cout << "[7]  Informtion About Barbecue      \n";
		cout << "[8]  Stock Barbecue      \n";
		cout << "_______________________________________________\n";
		cout << "What do you want?[1,2,3,4,5,6,7]:";
	}

	void showCustomBrB() {


		cout << "\t\t\t\t\t\tCUSTOM BARBECUE\n";
		SetConsoleTextAttribute(hConsole, 14);

		cout << "_____________________________________________________\n";
		cout << "1)Chicken" << endl;
		cout << "2)Barbecue Sous" << endl;
		cout << "3)Meat" << endl;
		cout << "4)Stock " << endl;
		cout << "5)Stop " << endl;
		cout << "_____________________________________________________\n";

	}

	void yourstockchoice(int choice) {
		system("cls");
		showStock22();
		Sleep(5000);
	}

	void updateBarbecue() {
		_kababSous = 20;
		_chicken = 20;
		_meat3 = 20;
	}
};

class dolma {
public:
	string _cabbageDolma;
	string _leafDolma;
	string _pepperDolma;
	string __TomatoDolma;
	string _EggPlantDolma;
	string _customDolma;

	int _meatd;
	int _pepperr;
	int _tomato;
	int _eggplant;
	int _cabbage;
	int _leaf;


	dolma() {
		_cabbageDolma = "Cabbage Dolma";
		_leafDolma = "Leaf Dolma";
		_pepperDolma = "Pepper Dolma";
		__TomatoDolma = "Tomato Dolma";
		_EggPlantDolma = "Egg Plant Dolma";
		_customDolma = "Custom Dolma";

		_meatd = 20;
		_pepperr = 20;
		_tomato = 20;
		_eggplant = 20;
		_cabbage = 20;
		_leaf = 20;
	}

	dolma(string cb, string ld, string pd, string td, string egd, int meat, int peppers, int tomatos, int eggplant, int cabbage, int leaf, string cstm) {
		_cabbageDolma = cb;
		_leafDolma = ld;
		_pepperDolma = pd;
		__TomatoDolma = td;
		_EggPlantDolma = egd;
		_customDolma = cstm;

		_meatd = meat;
		_pepperr = peppers;
		_tomato = tomatos;
		_eggplant = eggplant;
		_cabbage = cabbage;
		_leaf = leaf;
	}

	void WriteToFile(string name) {
		ofstream file("Dolma.txt", ios_base::out);

		if (file.is_open()) {

			file << name << ' '
				<< _meatd << ' ' << _pepperr << ' ' << _tomato << ' '
				<< _eggplant << ' ' << _cabbage << ' ' << _leaf << '\n';

		}

		file.close();
	}

	void yourCabbageDolma(int choice) {
		if (choice == 1) {
		ch:
			system("cls");
			SetConsoleTextAttribute(hConsole, 302);
			cout << "\t\t\t\t\t\tRESTAURANT APP\n";
			SetConsoleTextAttribute(hConsole, 14);


			cout << "How many " << _cabbageDolma << " do you want:";
			int howMuchCabbage;
			cin >> howMuchCabbage;
			cout << endl;

			if (_meatd - (howMuchCabbage * 3) >= 0) {

				_meatd = _meatd - (howMuchCabbage * 3);
				_cabbage = _cabbage - (howMuchCabbage * 3);

				system("cls");
				SetConsoleTextAttribute(hConsole, 302);
				cout << "\t\t\t\t\t\tDOLMA\n";
				SetConsoleTextAttribute(hConsole, 14);

				cout << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << endl;

				cout << "Meat    " << (howMuchCabbage * 3) << "    Is taken from stock " << endl;
				cout << "Cabbage    " << (howMuchCabbage * 3) << "    Is taken from stock" << endl;

				cout << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << endl;

				cout << endl;
				cout << endl;
				cout << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << endl;

				cout << "Calorie : " << howMuchCabbage * 3.95 << endl;

				cout << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << endl;

				cout << endl;
				cout << endl;

				showStock();
				Sleep(5000);
				system("cls");
				cout << "Do you want to rename " << _cabbageDolma << "?[Y/N]";
				cin >> chose;
				if (chose == "Y" || chose == "y") {
					cout << "\nNew name for " << _cabbageDolma << ":";
					string rnm;
					cin >> rnm;
					_cabbageDolma = rnm;
				}

				WriteToFile(_cabbageDolma);

				cout << "Do you want to update all Dolma products?[Y/N]";
				cin >> admin;
				if (admin == "Y" || admin == "y") {
					_meatd = 20;
					_pepperr = 20;
					_tomato = 20;
					_eggplant = 20;
					_cabbage = 20;
					_leaf = 20;
					system("cls");
				}
			}

			else {
				system("cls");
				SetConsoleTextAttribute(hConsole, 302);
				cout << "\t\t\t\t\t\tDOLMA\n";
				SetConsoleTextAttribute(hConsole, 14);

				cout << "You Cant order in our stock we dont have Ingredients !\n\n";
				Sleep(4000);
				system("cls");
				goto ch;

			}
		}
	}

	void yourLeafDolma(int choice) {
		if (choice == 2) {
		ch:
			system("cls");
			SetConsoleTextAttribute(hConsole, 302);
			cout << "\t\t\t\t\t\tRESTAURANT APP\n";
			SetConsoleTextAttribute(hConsole, 14);


			cout << "How many " << _leafDolma << " do you want:";
			int howMuchLeaf;
			cin >> howMuchLeaf;
			cout << endl;

			if (_meatd - (howMuchLeaf * 3) >= 0) {

				_meatd = _meatd - (howMuchLeaf * 3);
				_leaf = _leaf - (howMuchLeaf * 3);

				system("cls");
				SetConsoleTextAttribute(hConsole, 302);
				cout << "\t\t\t\t\t\tDOLMA\n";
				SetConsoleTextAttribute(hConsole, 14);

				cout << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << endl;

				cout << "Meat    " << (howMuchLeaf * 3) << "    Is taken from stock " << endl;
				cout << "Leaf    " << (howMuchLeaf * 3) << "    Is taken from stock" << endl;

				cout << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << endl;

				cout << endl;
				cout << endl;
				cout << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << endl;

				cout << "Calorie : " << howMuchLeaf * 2.95 << endl;

				cout << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << endl;

				cout << endl;
				cout << endl;

				showStock();
				Sleep(5000);
				system("cls");
				cout << "Do you want to rename " << _leafDolma << "?[Y/N]";
				cin >> chose;
				if (chose == "Y" || chose == "y") {
					cout << "\nNew name for " << _leafDolma << ":";
					string rnm;
					cin >> rnm;
					_leafDolma = rnm;
				}

				WriteToFile(_leafDolma);

				cout << "Do you want to update all Dolma products?[Y/N]";
				cin >> admin;
				if (admin == "Y" || admin == "y") {
					_meatd = 20;
					_pepperr = 20;
					_tomato = 20;
					_eggplant = 20;
					_cabbage = 20;
					_leaf = 20;
					system("cls");
				}
			}

			else {
				system("cls");
				SetConsoleTextAttribute(hConsole, 302);
				cout << "\t\t\t\t\t\tDOLMA\n";
				SetConsoleTextAttribute(hConsole, 14);

				cout << "You Cant order in our stock we dont have Ingredients !\n\n";
				Sleep(4000);
				system("cls");
				goto ch;

			}
		}
	}

	void yourPepperDolma(int choice) {
		if (choice == 3) {
		ch:
			system("cls");
			SetConsoleTextAttribute(hConsole, 302);
			cout << "\t\t\t\t\t\tRESTAURANT APP\n";
			SetConsoleTextAttribute(hConsole, 14);


			cout << "How many " << _pepperDolma << " do you want:";
			int howMuchPepperDolmush;
			cin >> howMuchPepperDolmush;
			cout << endl;

			if (_meatd - (howMuchPepperDolmush * 3) >= 0) {

				_meatd = _meatd - (howMuchPepperDolmush * 3);
				_pepperr = _pepperr - (howMuchPepperDolmush * 3);

				system("cls");
				SetConsoleTextAttribute(hConsole, 302);
				cout << "\t\t\t\t\t\tDOLMA\n";
				SetConsoleTextAttribute(hConsole, 14);

				cout << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << endl;

				cout << "Meat    " << (howMuchPepperDolmush * 3) << "    Is taken from stock " << endl;
				cout << "Pepper    " << (howMuchPepperDolmush * 3) << "    Is taken from stock" << endl;

				cout << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << endl;

				cout << endl;
				cout << endl;
				cout << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << endl;

				cout << "Calorie : " << howMuchPepperDolmush * 1.40 << endl;

				cout << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << endl;

				cout << endl;
				cout << endl;

				showStock();
				Sleep(5000);
				system("cls");
				cout << "Do you want to rename " << _pepperDolma << "?[Y/N]";
				cin >> chose;
				if (chose == "Y" || chose == "y") {
					cout << "\nNew name for " << _pepperDolma << ":";
					string rnm;
					cin >> rnm;
					_pepperDolma = rnm;
				}

				WriteToFile(_pepperDolma);

				cout << "Do you want to update all Dolma products?[Y/N]";
				cin >> admin;
				if (admin == "Y" || admin == "y") {
					_meatd = 20;
					_pepperr = 20;
					_tomato = 20;
					_eggplant = 20;
					_cabbage = 20;
					_leaf = 20;
					system("cls");
				}
			}

			else {
				system("cls");
				SetConsoleTextAttribute(hConsole, 302);
				cout << "\t\t\t\t\t\tDOLMA\n";
				SetConsoleTextAttribute(hConsole, 14);

				cout << "You Cant order in our stock we dont have Ingredients !\n\n";
				Sleep(4000);
				system("cls");
				goto ch;

			}
		}
	}

	void yourTomatoDolma(int choice) {
		if (choice == 4) {
		ch:
			system("cls");
			SetConsoleTextAttribute(hConsole, 302);
			cout << "\t\t\t\t\t\tRESTAURANT APP\n";
			SetConsoleTextAttribute(hConsole, 14);


			cout << "How many " << __TomatoDolma << " do you want:";
			int howMuchTomatoDolmush;
			cin >> howMuchTomatoDolmush;
			cout << endl;

			if (_meatd - (howMuchTomatoDolmush * 3) >= 0) {

				_meatd = _meatd - (howMuchTomatoDolmush * 3);
				_pepperr = _pepperr - (howMuchTomatoDolmush * 3);

				system("cls");
				SetConsoleTextAttribute(hConsole, 302);
				cout << "\t\t\t\t\t\tDOLMA\n";
				SetConsoleTextAttribute(hConsole, 14);

				cout << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << endl;

				cout << "Meat    " << (howMuchTomatoDolmush * 3) << "    Is taken from stock " << endl;
				cout << "Tomato    " << (howMuchTomatoDolmush * 3) << "    Is taken from stock" << endl;

				cout << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << endl;

				cout << endl;
				cout << endl;
				cout << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << endl;

				cout << "Calorie : " << howMuchTomatoDolmush * 2.22 << endl;

				cout << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << endl;

				cout << endl;
				cout << endl;

				showStock();
				Sleep(5000);
				system("cls");
				cout << "Do you want to rename " << __TomatoDolma << "?[Y/N]";
				cin >> chose;
				if (chose == "Y" || chose == "y") {
					cout << "\nNew name for " << __TomatoDolma << ":";
					string rnm;
					cin >> rnm;
					__TomatoDolma = rnm;
				}

				WriteToFile(__TomatoDolma);

				cout << "Do you want to update all Dolma products?[Y/N]";
				cin >> admin;
				if (admin == "Y" || admin == "y") {
					_meatd = 20;
					_pepperr = 20;
					_tomato = 20;
					_eggplant = 20;
					_cabbage = 20;
					_leaf = 20;
					system("cls");
				}
			}

			else {
				system("cls");
				SetConsoleTextAttribute(hConsole, 302);
				cout << "\t\t\t\t\t\tDOLMA\n";
				SetConsoleTextAttribute(hConsole, 14);

				cout << "You Cant order in our stock we dont have Ingredients !\n\n";
				Sleep(4000);
				system("cls");
				goto ch;

			}
		}
	}

	void yourBadimjanDolma(int choice) {
		if (choice == 5) {
		ch:
			system("cls");
			SetConsoleTextAttribute(hConsole, 302);
			cout << "\t\t\t\t\t\tRESTAURANT APP\n";
			SetConsoleTextAttribute(hConsole, 14);


			cout << "How many " << _EggPlantDolma << " do you want:";
			int howMuchTomatoDolmush;
			cin >> howMuchTomatoDolmush;
			cout << endl;

			if (_meatd - (howMuchTomatoDolmush * 3) >= 0) {

				_meatd = _meatd - (howMuchTomatoDolmush * 3);
				_eggplant = _eggplant - (howMuchTomatoDolmush * 3);

				system("cls");
				SetConsoleTextAttribute(hConsole, 302);
				cout << "\t\t\t\t\t\tDOLMA\n";
				SetConsoleTextAttribute(hConsole, 14);

				cout << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << endl;

				cout << "Meat    " << (howMuchTomatoDolmush * 3) << "    Is taken from stock " << endl;
				cout << "Eggplant(badimcan)    " << (howMuchTomatoDolmush * 3) << "    Is taken from stock" << endl;

				cout << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << endl;

				cout << endl;
				cout << endl;
				cout << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << endl;

				cout << "Calorie : " << howMuchTomatoDolmush * 3.22 << endl;

				cout << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << char(205) << endl;

				cout << endl;
				cout << endl;

				showStock();
				Sleep(5000);
				system("cls");
				cout << "Do you want to rename " << _EggPlantDolma << "?[Y/N]";
				cin >> chose;
				if (chose == "Y" || chose == "y") {
					cout << "\nNew name for " << _EggPlantDolma << ":";
					string rnm;
					cin >> rnm;
					_EggPlantDolma = rnm;
				}

				WriteToFile(_EggPlantDolma);

				cout << "Do you want to update all Dolma products?[Y/N]";
				cin >> admin;
				if (admin == "Y" || admin == "y") {
					_meatd = 20;
					_pepperr = 20;
					_tomato = 20;
					_eggplant = 20;
					_cabbage = 20;
					_leaf = 20;
					system("cls");
				}
			}

			else {
				system("cls");
				SetConsoleTextAttribute(hConsole, 302);
				cout << "\t\t\t\t\t\tDOLMA\n";
				SetConsoleTextAttribute(hConsole, 14);

				cout << "You Cant order in our stock we dont have Ingredients !\n\n";
				Sleep(4000);
				system("cls");
				goto ch;

			}
		}
	}

	void dExit(int choice) {
		system("cls");
		cout << endl;
		cout << endl;
		cout << endl;
		Sleep(1000);
		SetConsoleTextAttribute(hConsole, 15);
		cout << "\t\t\t\t\t\tLoading : ";
		SetConsoleTextAttribute(hConsole, 14);
		Sleep(100);
		cout << char(219);
		cout << ' ';
		Sleep(100);
		cout << char(219);
		cout << ' ';
		Sleep(100);
		cout << char(219);
		cout << ' ';

		Sleep(100);
		cout << char(219);
		cout << ' ';

		Sleep(100);
		cout << char(219);
		cout << ' ';

		Sleep(100);
		cout << char(219);
		cout << ' ';

		Sleep(100);
		cout << char(219);
		cout << ' ';

		Sleep(100);
		cout << char(219);
		cout << ' ';

		Sleep(100);
		cout << char(219);
		cout << ' ';

		Sleep(1000);
		cout << endl;
		cout << endl;
		cout << endl;
		system("cls");
	}

	void yourInfchoice(int choice) {
		system("cls");
		cout << "_______________________________________________________________________\n";
		cout << "|						  DOLMA INFORMATION								|\n";
		cout << "|______________________________________________________________________|\n";
		cout << "|Dolma is a family of stuffed dishes that can be served warm or cold.  |\n";
		cout << "|______________________________________________________________________|\n";
		Sleep(6000);
		system("cls");
	}

	void yourstockchoice(int choice) {
		system("cls");
		showStock();
		Sleep(5000);
	}

	void yourCustomDolma(int choice) {
		if (choice == 6) {
		ch:
			system("cls");
			SetConsoleTextAttribute(hConsole, 302);
			cout << "\t\t\t\t\t\tRESTAURANT APP\n";
			SetConsoleTextAttribute(hConsole, 14);
			cout << "How many " << _customDolma << " do you want:";
			int howMucCSTM;
			cin >> howMucCSTM;
			cout << endl;
		b:
			cstmDolmaMenu();
			cout << "Choose:";
			int chc;
			cin >> chc;


			if (chc == 1) {
			a:
				cout << "How Many Meat :";
				double dougher;
				cin >> dougher;
				if (_meatd - (howMucCSTM * dougher) >= 0) {
					_meatd = _meatd - (howMucCSTM * dougher);
					goto b;
				}
				else {
					cout << "We dont have products in stock input again\n";

					goto a;
				}
			}


			if (chc == 2) {
			m:
				cout << "How many Pepper:";
				int mm;
				cin >> mm;
				if (_pepperr - (howMucCSTM * mm) >= 0) {
					_pepperr = _pepperr - (howMucCSTM * mm);
					goto b;
				}
				else {
					cout << "We dont have products in stock input again\n";


					goto m;
					system("cls");
				}
			}


			if (chc == 3) {
			mmma:
				cout << "How many Meat:";
				int mmm;
				cin >> mmm;
				if (_tomato - (howMucCSTM * mmm) >= 0) {
					_tomato = _tomato - (howMucCSTM * mmm);
					goto b;
				}
				else {
					cout << "We dont have products in stock input again\n";


					goto mmma;

				}

			}

			if (chc == 4) {
			mmama:
				cout << "How many Leaf:";
				int mmm;
				cin >> mmm;
				if (_leaf - (howMucCSTM * mmm) >= 0) {
					_leaf = _leaf - (howMucCSTM * mmm);
					goto b;
				}
				else {
					cout << "We dont have products in stock input again\n";


					goto mmama;

				}

			}

			if (chc == 5) {
			mmaama:
				cout << "How many Cabbage:";
				int mmm;
				cin >> mmm;
				if (_cabbage - (howMucCSTM * mmm) >= 0) {
					_cabbage = _cabbage - (howMucCSTM * mmm);
					goto b;
				}
				else {
					cout << "We dont have products in stock input again\n";


					goto mmaama;

				}

			}

			if (chc == 6) {
			mmaaama:
				cout << "How many Eggplant(badimcan):";
				int mmm;
				cin >> mmm;
				if (_eggplant - (howMucCSTM * mmm) >= 0) {
					_eggplant = _eggplant - (howMucCSTM * mmm);
					goto b;
				}
				else {
					cout << "We dont have products in stock input again\n";


					goto mmaaama;

				}

			}

			if (chc == 7) {
				showStock();
				Sleep(4000);
				goto b;
			}


			system("cls");
			showStock();
			Sleep(5000);
			system("cls");

			WriteToFile(_customDolma);

			cout << "Do you want to update all Dolma products?[Y/N]\n";
			cin >> admin;
			if (admin == "Y" || admin == "y") {
				_meatd = 20;
				_pepperr = 20;
				_tomato = 20;
				_eggplant = 20;
				_cabbage = 20;
				_leaf = 20;
				system("cls");
			}
		}
	}

	void dolmaMenu() {
		system("cls");
		SetConsoleTextAttribute(hConsole, 14);
		cout << "....................Dolma.....................\n";
		SetConsoleTextAttribute(hConsole, 14);
		cout << "No# ---------------------------------- Calorie";
		cout << endl;
		cout << "______________________________________________";
		cout << endl;
		cout << "[1]  " << _cabbageDolma << "			3.95kl\n";
		cout << "[2]  " << _leafDolma << "				2.95kl\n";
		cout << "[3]  " << _pepperDolma << "			1.40kl\n";
		cout << "[4]  " << __TomatoDolma << "			2.22kl\n";
		cout << "[5]  " << _EggPlantDolma << "			3.22kl\n";
		cout << "[6]  Custom Dolma                        ? kl\n";
		cout << "[7]  Exit      \n";
		cout << "_______________________________________________";
		cout << endl;
		cout << "[8]  Informtion About Dolma      \n";
		cout << "[9]  Stock Dolma      \n";
		cout << "_______________________________________________\n";
		cout << "What do you want?[1,2,3,4,5,6,7]:";
	}

	void cstmDolmaMenu() {


		cout << "\t\t\t\t\t\tCUSTOM BARBECUE\n";
		SetConsoleTextAttribute(hConsole, 14);

		cout << "_____________________________________________________\n";
		cout << "1)Meat" << endl;
		cout << "2)Pepper" << endl;
		cout << "3)Tomato" << endl;
		cout << "4)Leaf" << endl;
		cout << "5)Cabbage" << endl;
		cout << "6)Eggplant(badimcan)" << endl;
		cout << "7)Stock " << endl;
		cout << "8)Stop " << endl;
		cout << "_____________________________________________________\n";

	}

	void updateDolma() {
		_meatd = 20;
		_pepperr = 20;
		_tomato = 20;
		_eggplant = 20;
		_cabbage = 20;
		_leaf = 20;
	}

	void showStock() {

		SetConsoleTextAttribute(hConsole, 14);
		cout << "_____________________________________________________\n";
		cout << "Meat : " << _meatd << endl;
		cout << "Pepper : " << _pepperr << endl;
		cout << "Tomato : " << _tomato << endl;
		cout << "Egg plant : " << _eggplant << " (Badimcan) " << endl;
		cout << "Cabbage : " << _cabbage << endl;
		cout << "Leaf : " << _leaf << endl;
		cout << "_____________________________________________________\n";

	}
};

class menu {
public:
	void menui() {
		system("cls");
		SetConsoleTextAttribute(hConsole, 11);
		cout << "          Welcome to  Restaurant!" << endl;
		cout << "Please continue to make all your selections by using the item number on the left" << endl;
		cout << "When you are finished type '5' to exit." << endl;
		cout << endl;
		cout << "..................................MENU........................................" << endl;
		cout << "Item#-------------------------------------------------------------------Calorie" << endl;
		cout << "______________________________________________________________________________" << endl;
		cout << "[1] Pizza................................................................5.15" << endl;
		cout << endl;
		cout << "[2] Khangal..............................................................2.40" << endl;
		cout << endl;
		cout << "[3] Barbecue.............................................................4.95" << endl;
		cout << endl;
		cout << "[4] Dolma................................................................3.95" << endl;
		cout << endl;
		cout << "[5] Exit....................................................................." << endl;
		cout << endl;
		cout << "Choese[1,2,3,4,5]:";
	}
};

void main() {
	string usname;
	string uspass;
	admiin a;
	Barbecue bb;
	Pizza pz;
	xengel x;
	dolma d;
	menu mn;
	int am;
	int am1;
	int am11;
	int am111;
	system("cls");
	int choser;
	int choser1;
	int choser2;
	int choser3;
	int choser4;
m:
	system("cls");
	SetConsoleTextAttribute(hConsole, 11);
	cout << "	=	                _______________                        =\n";
	cout << "	=	     ______________MAIN MENU_____________              =\n";
	cout << "	=	           _________________________                   =\n";
	cout << "	=	 _____________________________________________         =\n";
	cout << "	=   | [1]Admin                                    |        =\n";
	cout << "	=	| [2]Restaurant                               |        =\n";
	cout << "	=	| [3]Exit                                     |        =\n";
	cout << "	=	|_____________________________________________|        =\n";
	cout << "	=	     ____________________________________              =\n";
	cout << "	=	           _________________________                   =\n";
	cout << "	=	                _______________                        =\n";
	cout << "                                 Your choice:";
	cin >> choser1;
	if (choser1 == 1) {
		system("cls");
		a.menu();
		cin >> choser2;
		if (choser2 == 1) {
			a.menu1();
			cin >> choser3;
			if (choser3 == 1) {
				pz.updatePizza();
				x.updateXengel();
				bb.updateBarbecue();
				d.updateDolma();
				system("cls");
				cout << "ALL PRODUCTS SUCCESFULY UPDATED\n";
				Sleep(2000);
				goto m;
			}
			if (choser3 == 2) {
				a.menyu();
				cin >> choser4;
				if (choser4 == 1) {
					system("cls");

					pz.updatePizza();
					Sleep(2000);
					goto m;
				}
				if (choser4 == 2) {
					system("cls");

					x.updateXengel();
					cout << "ALL XENGEL PRODUCTS UPDATED";
					Sleep(2000);

					goto m;
				}
				if (choser4 == 3) {
					system("cls");

					d.updateDolma();
					cout << "ALL DOLMA PRODUCTS UPDATED";
					Sleep(2000);
					goto m;
				}
				if (choser4 == 4) {
					system("cls");

					bb.updateBarbecue();
					cout << "ALL BARBECUE PRODUCTS UPDATED";
					Sleep(2000);
					goto m;
				}
			}
		}
		if (choser2 == 2) {
			goto m;
		}

	}

	if (choser1 == 2) {
		system("cls");
		cout << "NAME:";
		cin >> usname;
		cout << "\n";
		cout << "PASSWORD:";
		cin >> uspass;
		mn.menui();


		cin >> choser;
		if (choser == 1) {
			pz.pizzaMenuu();
			int pizzaChoice;
			cin >> pizzaChoice;

			if (pizzaChoice == 1) {
				pz.yourChoice1(pizzaChoice);
				goto m;
			}

			if (pizzaChoice == 2) {
				pz.yourChoice2(pizzaChoice);
				goto m;
			}

			if (pizzaChoice == 3) {
				pz.yourChoice3(pizzaChoice);
				goto m;
			}

			if (pizzaChoice == 4) {
				pz.yourChoice4(pizzaChoice);
				goto m;
			}

			if (pizzaChoice == 5) {
				pz.yourChoice5(pizzaChoice);
				goto m;
			}

			if (pizzaChoice == 6) {
				pz.yourChoice6(pizzaChoice);
				goto m;
			}

			if (pizzaChoice == 7) {
				pz.yourChoice7(pizzaChoice);
				goto m;
			}
			if (pizzaChoice == 8) {
				pz.your8choice(pizzaChoice);
				goto m;
			}
			if (pizzaChoice == 9) {
				pz.your9choice(pizzaChoice);
				goto m;
			}
			if (pizzaChoice == 10) {
				pz.your10choice(pizzaChoice);
				goto m;
			}
			if (pizzaChoice == 11) {
				pz.your11choice(pizzaChoice);
				goto m;
			}
			if (pizzaChoice == 12) {
				pz.your12choice(pizzaChoice);
				goto m;
			}
			if (pizzaChoice == 13) {
				pz.yourstockchoice(pizzaChoice);
				goto m;
			}
		}

		if (choser == 2) {
			x.khangalMenuu();
			int khangalChoice;
			cin >> khangalChoice;

			if (khangalChoice == 1) {
				x.yourGurcuXengel(khangalChoice);
				goto m;
			}

			if (khangalChoice == 2) {
				x.yourAzeXengel(khangalChoice);
				goto m;
			}

			if (khangalChoice == 3) {
				x.yourChoice33(khangalChoice);
				goto m;
			}

			if (khangalChoice == 4) {
				x.yourChoice4(khangalChoice);
				goto m;
			}
			if (khangalChoice == 5) {
				x.your5choice(khangalChoice);
				goto m;
			}
			if (khangalChoice == 6) {
				x.your6choice(khangalChoice);
				goto m;
			}
			if (khangalChoice == 7) {
				x.yourstockchoice(khangalChoice);
				goto m;
			}
		}

		if (choser == 3) {
			bb.barbecueMenu();
			int barbecueChoice;
			cin >> barbecueChoice;
			if (barbecueChoice == 1) {
				bb.yourChickenBarbecue(barbecueChoice);
				goto m;
			}
			if (barbecueChoice == 2) {
				bb.yourBarbecue(barbecueChoice);
				goto m;
			}
			if (barbecueChoice == 3) {
				bb.yourLule(barbecueChoice);
				goto m;
			}
			if (barbecueChoice == 4) {
				bb.yourTike(barbecueChoice);
				goto m;
			}
			if (barbecueChoice == 5) {
				bb.yourCustomBarbecue(barbecueChoice);
				goto m;
			}
			if (barbecueChoice == 6) {
				bb.yourChoice6(barbecueChoice);
				goto m;
			}
			if (barbecueChoice == 7) {
				bb.yourInfchoice(barbecueChoice);
				goto m;
			}
			if (barbecueChoice == 8) {
				bb.yourstockchoice(barbecueChoice);
				goto m;
			}
		}

		if (choser == 4) {
			d.dolmaMenu();
			int dChoice;
			cin >> dChoice;

			if (dChoice == 1) {
				d.yourCabbageDolma(dChoice);
				goto m;
			}

			if (dChoice == 2) {
				d.yourLeafDolma(dChoice);
				goto m;
			}

			if (dChoice == 3) {
				d.yourPepperDolma(dChoice);
				goto m;
			}

			if (dChoice == 4) {
				d.yourTomatoDolma(dChoice);
				goto m;
			}

			if (dChoice == 5) {
				d.yourBadimjanDolma(dChoice);
				goto m;
			}
			if (dChoice == 6) {
				d.yourCustomDolma(dChoice);
				goto m;
			}
			if (dChoice == 7) {
				d.dExit(dChoice);
				goto m;
			}
			if (dChoice == 8) {
				d.yourInfchoice(dChoice);
				goto m;
			}
			if (dChoice == 9) {
				d.yourstockchoice(dChoice);
				goto m;
			}
		}

		if (choser == 5) {
			goto m;
		}
	}

	if (choser1 == 3) {
	}
}
