// source.cpp
#include "header.h"

// Electricity class constructor  //parameterise constructor
Electricity::Electricity(int sl, long present, long previous)
    : sanctionLoad(sl), presentReading(present), previousReading(previous) {}

// Getter and setter functions for Electricity class
int Electricity::getSanctionLoad() const {
    return sanctionLoad;
}

long Electricity::getPresentReading() const {
    return presentReading;
}

long Electricity::getPreviousReading() const {
    return previousReading;
}

void Electricity::setSanctionLoad(int sl) {
    sanctionLoad = sl;
}

void Electricity::setPresentReading(long present) {
    presentReading = present;
}

void Electricity::setPreviousReading(long previous) {
    previousReading = previous;
}

// Calculate electricity bill
double Electricity::calculateElectricityBill() const {
    if (presentReading < previousReading) {
        return 0.0; // Bill is zero if present reading is less than previous reading
    }

    long consumption = presentReading - previousReading;
    double billAmount = 0.0;

    if (sanctionLoad == 1) {
        billAmount = (sanctionLoad * E1) + (consumption * E1 / 100);
    } else if (sanctionLoad == 3) {
        billAmount = (sanctionLoad * E2) + (consumption * E2 / 100);
    } else if (sanctionLoad == 5) {
        billAmount = (sanctionLoad * E3) + (consumption * E3 / 100);
    }

    return billAmount;
}

// Water class constructor
Water::Water(long present, long previous)
    : presentReading(present), previousReading(previous) {}

// Getter and setter functions for Water class
long Water::getPresentReading() const {
    return presentReading;
}
 
long Water::getPreviousReading() const {
    return previousReading;
}

void Water::setPresentReading(long present) {
    presentReading = present;
}

void Water::setPreviousReading(long previous) {
    previousReading = previous;
}

// Calculate water bill
double Water::calculateWaterBill() const {
    if (presentReading < previousReading) {
        return 0.0; // Bill is zero if present reading is less than previous reading
    }

    long consumption = presentReading - previousReading;
    double amount = 0.0;

    if (consumption < 1000) {
        amount = 100 + consumption * 0.010;
    } else {
        amount = 150 + consumption * 0.015;
    }

    return (W1 * 10) + (amount * W2) / 1000;
}