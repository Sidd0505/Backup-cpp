#ifndef CABBOOKING_H
#define CABBOOKING_H

#include<iostream>

class CabBooking{
    private:
    std::string _booking_id;
    std::string _pickup_location;
    std::string _drop_location;
    float _base_fare;

    public:
    CabBooking() = delete;
    ~CabBooking() = default;
    CabBooking( CabBooking&) = delete;   
    CabBooking (CabBooking&&) = delete;
    CabBooking& operator= (CabBooking&) = delete;
    CabBooking& operator= (CabBooking&&) = delete;

    friend std::ostream &operator<<(std::ostream &os, const CabBooking &rhs);

    CabBooking(std::string booking_id, std::string pickup_location, std::string drop_location, float base_fare);

    virtual float CabFareCalaculation() = 0;

};
#endif // CABBOOKING_H
