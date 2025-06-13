#include <iostream>
#include <vector>
#include <string>
using namespace std;

class menu {
private:
    vector<string> dishes;
    int quantity;

public:
    menu() {
        dishes.push_back("unknown");
        quantity = 0;
    }

    menu(vector<string>& dish_list, int num) {
        dishes = dish_list;
        quantity = num;
    }

    void setDishes(vector<string>& new_dishes) {
        dishes = new_dishes;
    }

    vector<string> getDishes() {
        return dishes;
    }

    void setQuantity(int new_quantity) {
        quantity = new_quantity;
    }

    int getQuantity() {
        return quantity;
    }

    void show(string message, const vector<string>& items) {
        cout << message << endl;
        for(size_t i = 0; i < items.size(); i++) {
            cout << i + 1 << ". " << items[i];
            if(i < items.size() - 1) cout << ", ";
        }
        cout << endl;
    }
};

int main() {
    int choice;
    cout << "Do you want drinks(1), meal(2) or both(3): ";
    cin >> choice;

    do {
        if (choice == 1) {    // Drinks
            int quantity;
            cout << "Enter the quantity of drinks you want to order: ";
            cin >> quantity;
            
            vector<string> drinks;
            cin.ignore();  // Clear input buffer

            for(int i = 0; i < quantity; i++) {
                string drink;
                cout << "Enter drink " << i+1 << ": ";
                getline(cin, drink);
                drinks.push_back(drink);
            }

            menu drinkMenu(drinks, quantity);
            drinkMenu.show("\nYour drink order:", drinks);
            break;
        }
        else if (choice == 2) {    // Food
            int quantity;
            cout << "Enter the quantity of meals you want to order: ";
            cin >> quantity;
            
            vector<string> meals;
            cin.ignore();

            for(int i = 0; i < quantity; i++) {
                string meal;
                cout << "Enter meal " << i+1 << ": ";
                getline(cin, meal);
                meals.push_back(meal);
            }

            menu foodMenu(meals, quantity);
            foodMenu.show("\nYour food order:", meals);
            break;
        }
        else if (choice == 3) {    // Both
            // Drinks
            int drinkQty, mealQty;
            cout << "Enter the quantity of drinks: ";
            cin >> drinkQty;
            
            vector<string> drinks;
            cin.ignore();

            for(int i = 0; i < drinkQty; i++) {
                string drink;
                cout << "Enter drink " << i+1 << ": ";
                getline(cin, drink);
                drinks.push_back(drink);
            }

            // Meals
            cout << "Enter the quantity of meals: ";
            cin >> mealQty;
            
            vector<string> meals;
            cin.ignore();

            for(int i = 0; i < mealQty; i++) {
                string meal;
                cout << "Enter meal " << i+1 << ": ";
                getline(cin, meal);
                meals.push_back(meal);
            }

            menu drinkMenu(drinks, drinkQty);
            menu foodMenu(meals, mealQty);
            
            drinkMenu.show("\nYour drink order:", drinks);
            foodMenu.show("\nYour food order:", meals);
            break;
        }
        else {
            cout << "Enter a valid choice!!!" << endl;
            continue;
        }
    } while(true);

    return 0;
}