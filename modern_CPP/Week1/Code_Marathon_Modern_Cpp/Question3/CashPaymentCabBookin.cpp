#include"CashPaymentCabBookin.h"

std::ostream &operator<<(std::ostream &os, const CashPaymentCabBooking &rhs) {
    os << static_cast<const CabBooking &>(rhs)
       << " _rewards_points_claimed: " << rhs._rewards_points_claimed;
    return os;
}

CashPaymentCabBooking::CashPaymentCabBooking(std::string booking_id, std::string pickup_location, std::string drop_location, float base_fare, int rewards_points_claimed)
                        : CabBooking(booking_id, pickup_location,drop_location,base_fare), _rewards_points_claimed(rewards_points_claimed)
                    
{
}

CashPaymentCabBooking::CashPaymentCabBooking(std::string booking_id, std::string pickup_location, std::string drop_location, int rewards_points_claimed)
                    : CabBooking(booking_id, pickup_location,drop_location), _rewards_points_claimed(rewards_points_claimed)
{
}

float CashPaymentCabBooking::CabFareCalculation()
{
    
}
