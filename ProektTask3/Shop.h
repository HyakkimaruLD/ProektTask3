#pragma once
#include "Overcoat.h"
#include <vector>
#include <algorithm>

class Shop {
    vector<Overcoat> inventory;
public:
    void addOvercoat(const Overcoat& oc);
    void removeOvercoat(const string& name);
    void editSize(const string& name, int newSize);
    vector<Overcoat> findByType(const string& type) const;
    void sortInventoryByPrice();

    void showInventory() const;
};