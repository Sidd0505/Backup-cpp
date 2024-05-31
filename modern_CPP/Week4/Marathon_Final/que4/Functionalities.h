#ifndef FUNCTIONALITIES_H
#define FUNCTIONALITIES_H

#include "CodeTester.h"
#include <unordered_map>
#include <memory>
#include <variant>
#include <optional>
#include <algorithm>



using DPointer = std::shared_ptr<Developer>;
using TPointer = std::shared_ptr<CodeTester>;
using VType = std::variant<DPointer, TPointer>;
using Container = std::unordered_map<std::string, VType>;

void CreateObjects(Container& data);

int CountOfEmployeesAboveThreshold(const Container& data);

float SalaryOfGivenEmployee(const Container& data, const std::string& id);

bool CheckEmployeesHaveSalaryAbovelimit(const Container& data);

float AverageSalaryOfTester(const Container& data);

#endif // FUNCTIONALITIES_H














