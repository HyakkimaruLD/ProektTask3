#include "Shop.h"
#include <iostream>
using namespace std;

void Shop::addOvercoat(const Overcoat& oc) {
    inventory.push_back(oc);
}

void Shop::removeOvercoat(const string& name) {
    inventory.erase(remove_if(inventory.begin(), inventory.end(),[&name](const Overcoat& oc) { return oc.getName() == name; }),inventory.end());
}

void Shop::editSize(const string& name, int newSize) {
    for (auto& oc : inventory) {
        if (oc.getName() == name) {
            oc.setSize(newSize);
            break;
        }
    }
}

vector<Overcoat> Shop::findByType(const string& type) const {
    vector<Overcoat> result;
    for (const auto& oc : inventory) {
        if (oc.getType() == type) {
            result.push_back(oc);
        }
    }
    return result;
}

void Shop::sortInventoryByPrice() {
    sort(inventory.begin(), inventory.end(), [](const Overcoat& a, const Overcoat& b) {
        return a < b;
        });
}

void Shop::showInventory() const {
    for (const auto& oc : inventory) {
        cout << oc << endl;
    }
}
