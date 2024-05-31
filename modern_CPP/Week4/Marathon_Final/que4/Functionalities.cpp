#include "Functionalities.h"

void CreateObjects(Container& data){
    data.emplace(
        std::make_pair("A101", std::make_shared<Developer>
        ("A101", "Siddhant", 82200.0f, 4,
        std::vector<SkillSet>{SkillSet::CODING, SkillSet::UNIT_TESTING, SkillSet::CODE_REVIEW}))
    );
    data.emplace(
        std::make_pair("A102", std::make_shared<CodeTester>
        ("A102", "Rushi", 500.0f, 7,
        std::vector<SkillSet>{SkillSet::CODING, SkillSet::CODE_REVIEW}))
    );

}





int CountOfEmployeesAboveThreshold(const Container& data){
    int count = 0;

    for(auto& [k, v] : data){
        std::visit([&](auto &&val){
        
            if (val->salary() > 5000)
            {
                count++;
            }
        },
        v
        );
    }

    return count;
}


float SalaryOfGivenEmployee(const Container &data, const std::string& id)
{
    float result = 0.0f;

    for(auto& [k, v] : data){
        if (k == id)
        {
            std::visit([&](auto &&val){ result = val->salary(); },
                        v);
        }
    }
    return result;

}

bool CheckEmployeesHaveSalaryAbovelimit(const Container& data){

    bool result = true;

    for(auto& [k, v] : data){
        std::visit([&](auto &&val){
        
            if (val->salary() < 6000)
            {
                result = false;
            }
        },
        v
        );
    }
    return result;

}


float AverageSalaryOfTester(const Container &data)
{
    float result = 0.0f;
    int count = 0;
    for(auto& [k, v] : data){
        std::visit([&](auto &&val){
        
            if (std::holds_alternative<TPointer>(v))
            {
                result += val->salary();
                count++;
            }
        },
        v
        );
    }
    
    return result/count;
}





















