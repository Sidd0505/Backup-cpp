#include"OnlinePayment.h"

std::ostream &operator<<(std::ostream &os, const OnlinePayment &rhs) {
    os << static_cast<const CabBooking &>(rhs)
       << " _mode: " << static_cast<int>(rhs._mode)
       << " _drop_stops_count: " << rhs._drop_stops_count;

    return os;
}

OnlinePayment::OnlinePayment(std::string bookinng_id, std::string pickup_location, std::string drop_location, float base_fare, PaymentMode mode, int drop_stop_count)
            :CabBooking(bookinng_id,pickup_location,drop_location,base_fare),OnlinePayment()
{
}
