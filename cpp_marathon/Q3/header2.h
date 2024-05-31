#ifndef HEADER_H // header guard
#define HEADER_H

class Flight
{
    long flight_no;
    float distance, fare;
    float fuel;
    static int objs;

public:
    Flight(){}; // first Default Constructor
    Flight(long fl_no, float dis, float fue, float far)
    { // second Parametertrized Constructor
        flight_no = fl_no;
        distance = dis;
        fuel = fue;
        fare = far;
    };

    ~Flight()
    { // destructor for flush memory
        std::cout << " memory Gone\n";
    }

    float calculateFuelQuantity();
    static void calculateTotalFlightObjects();

    void feedInfo();
    void showInfo();

    long flightNo() const
    {
        return flight_no;
    }
    void setFlightNo(long flightNo)
    {
        flight_no = flightNo;
    }

    float getFuel() const { return fuel; }
    void setFuel(float fuel_) { fuel = fuel_; }
};

void search(Flight a[], int, int);

#endif // header guard end