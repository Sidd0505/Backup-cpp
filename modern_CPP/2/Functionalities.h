#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H

#include<iostream>
#include"Device.h"
#include<memory>
#include<vector>

using pointer=std::shared_ptr<Device>;
using container=std::vector<pointer>;

using pointer2=std::shared_ptr<DeviceDriver>;
using container2=std::vector<pointer2>;

void Create_Object(container &data);

std::vector<std::string> _DeviceID_By_Batter_Drain(const container&data)noexcept(false);

bool Check_AllDevice_INFOTAINMENT(const container&data)noexcept(false);

float Return_AvgOfSizeOfQ1Q2(const container&data)noexcept(false);

std::string Verson_number_by_Given_DeviceID(const container& data,std::string id)noexcept(false);

container2 Device_Driver_instances(const container&data,Device_type type)noexcept(false);

#endif // FUNCTIONALITIES_H
