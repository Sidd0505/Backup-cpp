#ifndef ONLINEPAYMENT_H
#define ONLINEPAYMENT_H

#include<iostream>
#include"CabBooking.h"
#include"PaymentMode.h"

class OnlinePayment : public CabBooking
{
    private:
    PaymentMode _mode;
    int _drop_stops_count;

    public:
    
    OnlinePayment() = delete;
    ~OnlinePayment() = default;
    OnlinePayment( OnlinePayment&) = delete;   
    OnlinePayment (OnlinePayment&&) = delete;
    OnlinePayment& operator= (OnlinePayment&) = delete;
    OnlinePayment& operator= (OnlinePayment&&) = delete;

    friend std::ostream &operator<<(std::ostream &os, const OnlinePayment &rhs);
    OnlinePayment(std::string bookinng_id, std::string pickup_location, std::string drop_location, float base_fare, PaymentMode  mode, int drop_stop_count );


};


#endif // ONLINEPAYMENT_H
