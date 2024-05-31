#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H

#include"Device.h"
#include"DeviceDriver.h"

using Pointer = std::shared_ptr<Device>;
using Container = std::vector<Pointer>;

using Pointer2 = std::shared_ptr<DeviceDriver>;
using Container2 = std::vector<Pointer2>;

void CreateObjects(Container& data) noexcept(false);

std::vector<std::string> FindDeviceId(Container& data);

bool InfotainmentOrNot(Container&data);

float AverageSizeinBytes(Container &data);

std::string FindVersionNumber(Container& data, std::string device_id);

Container2 DevicedriverTypeMatch(Container& data, _device_type typee);


#endif // FUNCTIONALITIES_H
