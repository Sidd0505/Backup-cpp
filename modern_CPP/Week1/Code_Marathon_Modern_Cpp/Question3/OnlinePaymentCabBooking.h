#ifndef ONLINEPAYMENTCABBOOKING_H
#define ONLINEPAYMENTCABBOOKING_H

#include<iostream>
#include"CabBooking.h"
#include"Payment_mode.h"

class OnlinePaymentCabBooking: public CabBooking
{
    int _drops_stops_count;
    _payment_mode  _mode;

    public:

    OnlinePaymentCabBooking() = delete;

    ~OnlinePaymentCabBooking()= default;

    OnlinePaymentCabBooking(OnlinePaymentCabBooking&) = delete;

    OnlinePaymentCabBooking(OnlinePaymentCabBooking&&) = delete;
    
    OnlinePaymentCabBooking& operator = (OnlinePaymentCabBooking&) = delete;

    OnlinePaymentCabBooking& operator = (OnlinePaymentCabBooking&&) = delete;

    friend std::ostream &operator<<(std::ostream &os, const OnlinePaymentCabBooking &rhs);

    OnlinePaymentCabBooking(std::string booking_id, std::string pickup_location, std::string drop_location, float base_fare, _payment_mode mode, int drop_stops_count);

    OnlinePaymentCabBooking(std::string booking_id, std::string pickup_location, std::string drop_location, _payment_mode mode, int drop_stops_count);

    float CabFareCalculation();

};

#endif // ONLINEPAYMENTCABBOOKING_H
