#include "Overcoat.h"

Overcoat::Overcoat() : name(""), type(""), size(0), price(0.0) {}

Overcoat::Overcoat(const string& name, const string& type, int size, double price) : name(name), type(type), size(size), price(price) {}

string Overcoat::getName() const {
    return name;
}

string Overcoat::getType() const {
    return type;
}

int Overcoat::getSize() const {
    return size;
}

double Overcoat::getPrice() const {
    return price;
}

void Overcoat::setName(const string& name) {
    this->name = name;
}

void Overcoat::setType(const string& type) {
    this->type = type;
}

void Overcoat::setSize(int size) {
    this->size = size;
}

void Overcoat::setPrice(double price) {
    this->price = price;
}

bool Overcoat::operator==(const Overcoat& other) const {
    return this->type == other.type;
}

bool Overcoat::operator!=(const Overcoat& other) const {
    return this->type != other.type;
}

bool Overcoat::operator>(const Overcoat& other) const {
    return this->price > other.price;
}

bool Overcoat::operator>=(const Overcoat& other) const {
    return this->price >= other.price;
}

bool Overcoat::operator<(const Overcoat& other) const {
    return this->price < other.price;
}

bool Overcoat::operator<=(const Overcoat& other) const {
    return this->price <= other.price;
}

Overcoat& Overcoat::operator++() {
    ++size;
    return *this;
}

Overcoat Overcoat::operator++(int) {
    Overcoat temp = *this;
    ++(*this);
    return temp;
}

Overcoat& Overcoat::operator--() {
    --size;
    return *this;
}

Overcoat Overcoat::operator--(int) {
    Overcoat temp = *this;
    --(*this);
    return temp;
}


ostream& operator<<(ostream& out, const Overcoat& oc) {
    out << "Name: " << oc.name << ", Type: " << oc.type << ", Size: " << oc.size << ", Price: " << oc.price;
    return out;
}

istream& operator>>(istream& in, Overcoat& oc) {
    cout << "Enter name: ";
    in >> oc.name;
    cout << "Enter type: ";
    in >> oc.type;
    cout << "Enter size: ";
    in >> oc.size;
    cout << "Enter price: ";
    in >> oc.price;
    return in;
}
