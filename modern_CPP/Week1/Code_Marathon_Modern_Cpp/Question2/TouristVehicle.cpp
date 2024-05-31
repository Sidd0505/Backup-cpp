#include"TouristVehicle.h"

std::ostream &operator<<(std::ostream &os, const TouristVehicle &rhs) {
    os << "_number: " << rhs._number
       << " _Type: " << static_cast<int>(rhs._Type)
       << " _seat_count: " << rhs._seat_count
       << " _permit: " << (*rhs._permit);
    return os;
}

void PermitTypeToString(PermitType typee)
{
    switch(static_cast<int>(typee))
    {
        case 0: 
        {std::cout<<"LEASE";
                break;
        }
        case 1:
        {
            std::cout<<"OWNED";
            break;
        } 
        default:
            break; 
    }
}

TouristVehicle::TouristVehicle(std::string number, TouristVehicleType Type, int seat_count, std::shared_ptr<Permit> permit)
                :_number(number), _Type(Type), _seat_count(seat_count), _permit(permit)
{
}
