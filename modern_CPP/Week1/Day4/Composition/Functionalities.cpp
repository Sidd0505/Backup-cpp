#include"Functionalities.h"

void CreateObjects(Container &data)
{
    data.emplace_back(
    std::make_shared<Customer>(
    111,
    "Siddhant",
    27,
    CustomerType::REGULAR,
    std::make_shared<Debitcard>(101,"Sid Sonawane","11/31",DebitCardType::DOMESTIC)
        )
    );

    data.emplace_back(
        std::make_shared<Customer>(
            112,
            "Pranjal",
            34,
            CustomerType::ELITE,
            std::make_shared<Debitcard>(102,"Pranjal Aher", "12/30", DebitCardType::INTERNANTIONAL)
        )
    );
};