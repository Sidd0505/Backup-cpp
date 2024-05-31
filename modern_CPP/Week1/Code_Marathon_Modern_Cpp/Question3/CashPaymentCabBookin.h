#ifndef CASHPAYMENTCABBOOKIN_H
#define CASHPAYMENTCABBOOKIN_H

#include<iostream>
#include"CabBooking.h"

class CashPaymentCabBooking :public CabBooking
{
    private:
    int _rewards_points_claimed;

    public:

    CashPaymentCabBooking() = delete;

    ~CashPaymentCabBooking()= default;

    CashPaymentCabBooking(CashPaymentCabBooking&) = delete;

    CashPaymentCabBooking(CashPaymentCabBooking&&) = delete;
    
    CashPaymentCabBooking& operator = (CashPaymentCabBooking&) = delete;

    CashPaymentCabBooking& operator = (CashPaymentCabBooking&&) = delete;

    int rewardsPointsClaimed() const { return _rewards_points_claimed; }
    void setRewardsPointsClaimed(int rewards_points_claimed) { _rewards_points_claimed = rewards_points_claimed; }

    friend std::ostream &operator<<(std::ostream &os, const CashPaymentCabBooking &rhs);

    CashPaymentCabBooking(std::string booking_id, std::string pickup_location, std::string drop_location, float base_fare, int rewards_points_claimed);

    CashPaymentCabBooking(std::string booking_id, std::string pickup_location, std::string drop_location, int rewards_points_claimed);

    float CabFareCalculation();

};

#endif // CASHPAYMENTCABBOOKIN_H
