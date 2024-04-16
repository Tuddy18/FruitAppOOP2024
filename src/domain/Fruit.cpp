//
// Created by tuddy on 16-Apr-24.
//

#include "Fruit.h"

Fruit::Fruit(const string &name,
             const string &origin,
             const Date &expiryDate,
             int quantity,
             double price) : name(name),
                             origin(origin),
                             expiry_date(expiryDate),
                             quantity(quantity),
                             price(price) {}

const string &Fruit::getName() const {
    return name;
}

void Fruit::setName(const string &name) {
    Fruit::name = name;
}

const string &Fruit::getOrigin() const {
    return origin;
}

void Fruit::setOrigin(const string &origin) {
    Fruit::origin = origin;
}

const Date &Fruit::getExpiryDate() const {
    return expiry_date;
}

void Fruit::setExpiryDate(const Date &expiryDate) {
    expiry_date = expiryDate;
}

int Fruit::getQuantity() const {
    return quantity;
}

void Fruit::setQuantity(int quantity) {
    Fruit::quantity = quantity;
}

double Fruit::getPrice() const {
    return price;
}

void Fruit::setPrice(double price) {
    Fruit::price = price;
}
