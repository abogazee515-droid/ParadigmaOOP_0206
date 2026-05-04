//name, quantity, category, and production date. The class also includes a method to display
// the product details. Create two objects named “electronics” and “non-electronics.”

#include<iostream>
using namespace std;

class product
{
public:
    string Name;
    int quantity;
    string category;
    string production_date;


    void PrintProduct()
    {
        cout << "Name of the product : " << Name << endl;
        cout << "quantity of the product " << Name << " : " << quantity << endl;
        cout << "The product " << Name << " in category of : " << category << endl;
        cout << "production date : " << production_date << endl;
    }

};

int main()
{
    product pr1;

    cout << "Enter the name of the product: ";
    cin >> pr1.Name;

    cout << "Enter the number of quantity: ";
    cin >> pr1.quantity;

    cout << "Enter the name of category: ";
    cin >> pr1.category;

    cout << "Enter the production date: ";
    cin >> pr1.production_date;
}