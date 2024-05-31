#include "Permit.h"


std::ostream &operator<<(std::ostream &os, const Permit &rhs) {
    os << "_serial_number: " << rhs._serial_number
       << " _permit_type: " << static_cast<int>(rhs._permit_type)
       << " _permit_duration_left: " << rhs._permit_duration_left
       << " _permit_renewal_charge: " << rhs._permit_renewal_charge;
    return os;
}


Permit::Permit(std::string serial_number, PermitType permit_type, int permit_duration_left, float permit_renewal_charge)
        : _serial_number(serial_number), _permit_type(permit_type), _permit_duration_left(permit_duration_left), _permit_renewal_charge(permit_renewal_charge)
{
}
