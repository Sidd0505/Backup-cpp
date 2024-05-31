#include"OnlinePaymentCabBooking.h"
#include"CabBooking.h"

std::ostream &operator<<(std::ostream &os, const OnlinePaymentCabBooking &rhs) {
    os << static_cast<const CabBooking &>(rhs)
       << " _drops_stops_count: " << rhs._drops_stops_count
       << " _mode: " << static_cast<int>(rhs._mode);
    return os;
}

OnlinePaymentCabBooking::OnlinePaymentCabBooking(std::string booking_id, std::string pickup_location, std::string drop_location, float base_fare, _payment_mode mode, int drop_stops_count)
                        :CabBooking(booking_id, pickup_location,drop_location,base_fare), _mode(mode), _drops_stops_count(drop_stops_count)
{
}


OnlinePaymentCabBooking::OnlinePaymentCabBooking(std::string booking_id, std::string pickup_location, std::string drop_location, _payment_mode mode, int drop_stops_count)
                        :CabBooking(booking_id, pickup_location,drop_location),_mode(mode), _drops_stops_count(drop_stops_count)
{
}

float OnlinePaymentCabBooking::CabFareCalculation()
{
    
}
