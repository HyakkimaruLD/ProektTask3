#pragma once
#include <string>
#include <iostream>
using namespace std;

class Overcoat {
    string name;
    string type;
    int size;
    double price;
public:
    Overcoat();
    Overcoat(const string& name, const string& type, int size, double price);

    string getName() const;
    string getType() const;
    int getSize() const;
    double getPrice() const;

    void setName(const string& name);
    void setType(const string& type);
    void setSize(int size);
    void setPrice(double price);

    bool operator==(const Overcoat& other) const;
    bool operator!=(const Overcoat& other) const;
    bool operator>(const Overcoat& other) const;
    bool operator>=(const Overcoat& other) const;
    bool operator<(const Overcoat& other) const;
    bool operator<=(const Overcoat& other) const;

    Overcoat& operator++();       
    Overcoat operator++(int);      
    Overcoat& operator--();        
    Overcoat operator--(int);      

    friend ostream& operator<<(ostream& out, const Overcoat& oc);
    friend istream& operator>>(istream& in, Overcoat& oc);
};