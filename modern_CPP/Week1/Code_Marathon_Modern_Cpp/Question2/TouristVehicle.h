#ifndef TOURISTVEHICLE_H
#define TOURISTVEHICLE_H

#include<iostream>
#include"TouristVehicleType.h"
#include<memory>
#include"Permit.h"
#include<list>

class TouristVehicle{
    private:
    std::string _number;
    TouristVehicleType _Type;
    int _seat_count;
    std::shared_ptr<Permit>_permit;

    public:

    TouristVehicle() = delete;

    ~TouristVehicle() = default;

    TouristVehicle(TouristVehicle &) = delete;

    TouristVehicle (TouristVehicle&&) = delete;

    TouristVehicle operator = (TouristVehicle&) = delete;

    TouristVehicle operator = (TouristVehicle&&) = delete;

    TouristVehicle(std::string number, TouristVehicleType Type, int seat_count, std::shared_ptr<Permit> permit);

    std::string number() const { return _number; }
    void setNumber(const std::string &number) { _number = number; }

    TouristVehicleType type() const { return _Type; }
    void setType(const TouristVehicleType &Type) { _Type = Type; }

    int seatCount() const { return _seat_count; }
    void setSeatCount(int seat_count) { _seat_count = seat_count; }

    std::shared_ptr<Permit>permit() const { return _permit; }
    void setPermit(const std::shared_ptr<Permit>&permit) { _permit = permit; }

    friend std::ostream &operator<<(std::ostream &os, const TouristVehicle &rhs);

};

void PermitTypeToString(PermitType typee);

#endif // TOURISTVEHICLE_H
