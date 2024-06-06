// ProektTask3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Shop.h"
using namespace std;

int main() {
    Shop shop;

    Overcoat oc1("Jacket", "Men", 42, 99.99);
    Overcoat oc2("Coat", "Women", 38, 149.99);
    Overcoat oc3("Raincoat", "Kids", 30, 59.99);

    shop.addOvercoat(oc1);
    shop.addOvercoat(oc2);
    shop.addOvercoat(oc3);

    cout << "Initial inventory:" << endl;
    shop.showInventory();

    cout << "\nEditing size of Jacket to 44:" << endl;
    shop.editSize("Jacket", 44);
    shop.showInventory();

    cout << "\nRemoving Coat from inventory:" << endl;
    shop.removeOvercoat("Coat");
    shop.showInventory();

    cout << "\nFinding items of type 'Kids':" << endl;
    vector<Overcoat> kids = shop.findByType("Kids");
    for (const auto& oc : kids) {
        cout << oc << endl;
    }

    cout << "\nSorting inventory by price:" << endl;
    shop.sortInventoryByPrice();
    shop.showInventory();

    return 0;
}