#include"CabBooking.h"
#include<memory>
#include<vector>
#include"OnlinePaymentCabBooking.h"
#include"CashPaymentCabBookin.h"

using Pointer =std::shared_ptr<CabBooking>;
using Container = std::vector<Pointer>;

void CreateObjects(Container& data);

