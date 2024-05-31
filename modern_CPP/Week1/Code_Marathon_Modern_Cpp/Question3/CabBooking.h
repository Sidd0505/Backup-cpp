#ifndef CABBOOKING_H
#define CABBOOKING_H

#include<iostream>
#include<memory>
class CabBooking
{
    private:
    std::string _booking_id;
    std::string _pickup_location;
    std::string _drop_location;
    float _base_fare;

public:

    std::string bookingId() const { return _booking_id; }
    void setBookingId(const std::string &booking_id) { _booking_id = booking_id; }

    std::string pickupLocation() const { return _pickup_location; }
    void setPickupLocation(const std::string &pickup_location) { _pickup_location = pickup_location; }

    std::string dropLocation() const { return _drop_location; }
    void setDropLocation(const std::string &drop_location) { _drop_location = drop_location; }

    float baseFare() const { return _base_fare; }
    void setBaseFare(float base_fare) { _base_fare = base_fare; }

    CabBooking() = delete;

    ~CabBooking()= default;

    CabBooking(CabBooking&) = delete;

    CabBooking(CabBooking&&) = delete;
    
    CabBooking& operator = (CabBooking&) = delete;

    CabBooking& operator = (CabBooking&&) = delete;

    virtual float CabFareCalculation() = 0;

    CabBooking(std::string booking_id, std::string pickup_location, std::string drop_location, float base_fare);

    CabBooking(std::string booking_id, std::string pickup_location, std::string drop_location);

    friend std::ostream &operator<<(std::ostream &os, const CabBooking &rhs);

};

#endif // CABBOOKING_H
