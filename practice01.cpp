#include<iostream>
using namespace std;

int main()
{
	int qty;
	int choice;
	// quantity
	int Qrooms = 0, Qpizza = 0, Qburger = 0;
	// items sold
	int Srooms = 0, Spizza = 0, Sburger = 0;
	// total price of items
	int total_rooms = 0, total_pizza = 0, total_burger = 0;
	
	cout << "\n\t Quantity of items we have";
	cout << "\n Rooms available: ";
	cin >> Qrooms;
	cout << "\n Quantity of pizza: ";
	cin >> Qpizza;
	cout << "\n Quantity of burger: ";
	cin >> Qburger;
	
	m:
	cout << "\n\t\t Please select from the menu options ";
	cout << "\n\n1) Rooms";
	cout << "\n2) Pizza";
	cout << "\n3) Burger";
	cout << "\n4) Information about sales and items";
	cout << "\n5) Exit";
	
	cout << "\n\n Please enter your choice:";
	cin >> choice;
	
	switch(choice)
	{
		case 1:
			cout << "\n\n Enter the number of rooms to book:";
			cin >> qty;
			
			if (Qrooms-Srooms >= qty) {
				Srooms = Srooms + qty;
				total_rooms = total_rooms + qty * 250;
				cout << "\n\n\t\t" << qty << " room(s) have been chosen";
			}
			else {
				cout << "\n\tOnly" << Qrooms - Srooms << " rooms available";
			}
			break;
			
		case 2:
			cout << "\n\n Enter pizza quantity:";
			cin >> qty;
			
			if (Qpizza - Spizza >= qty) {
				Spizza = Spizza + qty;
				total_pizza = total_pizza + qty * 50;
				cout << "\n\n\t\t" << qty << " pizza(s) has been chosen";
			}
			else {
				cout << "\n\tOnly" << Qpizza - Spizza << " pizza available";
			}
			break;
			
		case 3:
			cout << "\n\n Enter pizza quantity:";
			cin >> qty;
			
			if (Qburger - Sburger >= qty) {
				Sburger = Sburger + qty;
				total_burger = total_burger + qty * 25;
				cout << "\n\n\t\t" << qty << " burger(s) has been chosen";
			}
			else {
				cout << "\n\tOnly " << Qburger - Sburger << " burger available";
			}
			break;
		
		case 4:
			cout << "\n\t\tDetails of sales and items";
			cout << "\n\n Numbers of rooms we have: " << Qrooms;
			cout << "\n\n Numbers of rooms rented: " << Srooms;
			cout << "\n\n Remaining rooms: " << Qrooms - Srooms;
			cout << "\n\n Total rooms collection for the day: " << total_rooms;
			
			cout << "\n\n Numbers of pizza we have: " << Qpizza;
			cout << "\n\n Numbers of pizza ordered: " << Spizza;
			cout << "\n\n Remaining pizza: " << Qpizza - Spizza;
			cout << "\n\n Total pizza collection for the day: " << total_pizza;
			
			cout << "\n\n Numbers of burger we have: " << Qburger;
			cout << "\n\n Numbers of burger ordered: " << Sburger;
			cout << "\n\n Remaining burger: " << Qburger - Sburger;
			cout << "\n\n Total burger collection for the day: " << total_burger;
			
			cout << "\n\n\n Total collection for the day: " << total_rooms + total_pizza + total_burger;
			break;
		
		case 5:
			exit(0);
			
			default:
				cout << "\n Please select the numbers mentioned above!";
		
	}
	goto m;
}
