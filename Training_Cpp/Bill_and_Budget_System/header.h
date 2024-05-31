// header.h
#ifndef HEADER_H
#define HEADER_H

enum ElectricitySlabs {
    E1 = 125, 
    E2 = 150,
    E3 = 200
};

enum WaterSlabs {
    W1 = 10,
    W2 = 15
};

class Electricity {
private:
    int sanctionLoad;
    long presentReading;
    long previousReading;

public:
    // Constructor
    Electricity(int sl, long present, long previous);

    // Getter and setter functions
    int getSanctionLoad() const;
    long getPresentReading() const;
    long getPreviousReading() const;

    void setSanctionLoad(int sl);
    void setPresentReading(long present);
    void setPreviousReading(long previous);

    // Calculate electricity bill
    double calculateElectricityBill() const;
};

class Water {
private:
    long presentReading;
    long previousReading;

public:
    // Constructor
    Water(long present, long previous);

    // Getter and setter functions
    long getPresentReading() const;
    long getPreviousReading() const;

    void setPresentReading(long present);
    void setPreviousReading(long previous);

    // Calculate water bill
    double calculateWaterBill() const;
};

#endif