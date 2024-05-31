#include "Functionalities.h"
int main()
{
    Container data;
    CreateObjects(data);
    std::cout << *data[0];
    std::cout << '\n'
              << *data[1] << "\n\n";

    try
    {
        std::cout << HorsepowerUsingCardID(data, "Indigo") << "\n\n";
    }
    catch (const std::runtime_error &e)
    {
        std::cerr << e.what() << '\n';
    }

    try
    {
        Container torque = TorqueOver80(data);
        for (auto &p : torque)
        {
            std::cout << *p;
        }
        std::cout << "\n\n";
    }
    catch (const std::runtime_error &e)
    {
        std::cerr << e.what() << '\n';
    }

    try
    {
        Container types = SearchWithCarType(data, carType::SEDAN);
        for (auto &p : types)
        {
            std::cout << *p;
        }

        std::cout << "\n\n";
    }
    catch (const std::runtime_error &e)
    {
        std::cerr << e.what() << '\n';
    }

    try
    {
        std::cout << AverageEngineHorsepower(data);
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }

    std::cout << "\n\n";
    try
    {
        std::cout << CardIdByLowestPrice(data);
    }
    catch (const std::runtime_error &e)
    {
        std::cerr << e.what() << '\n';
    }

    std::cout << "\n\n";
    try
    {
        std::cout << CombinedPrice(data[0], data[1]);
    }
    catch (const std::runtime_error &e)
    {
        std::cerr << e.what() << '\n';
    }
}