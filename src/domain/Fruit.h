//
// Created by tuddy on 16-Apr-24.
//

#ifndef FRUITAPP_FRUIT_H
#define FRUITAPP_FRUIT_H

#include <stdexcept>
#include <string>

using namespace std;

struct Date {
    int year;
    int month;
    int day;

    Date(int day, int month, int year) :
            day(day), month(month), year(year) {
        if (day > 31) {
            throw std::invalid_argument("Day can't be bigger than 31");
        }

        if (month > 12) {
            throw std::invalid_argument("Month can't be bigger than 12");
        }
    }
};

class Fruit {
private:
    string name;
    string origin;
    Date expiry_date;
    int quantity;
    double price;

public:
    Fruit(const string &name, const string &origin, const Date &expiryDate, int quantity, double price);

    const string &getName() const;

    void setName(const string &name);

    const string &getOrigin() const;

    void setOrigin(const string &origin);

    const Date &getExpiryDate() const;

    void setExpiryDate(const Date &expiryDate);

    int getQuantity() const;

    void setQuantity(int quantity);

    double getPrice() const;

    void setPrice(double price);
};


#endif //FRUITAPP_FRUIT_H
