#include <iostream>
#include <ostream>
 
class Hospital
{
    std::string hospital_id;
    std::string name;
    std::string rating;
 
public:
    Hospital()
    {
        hospital_id = "101";
        name = "xyz";
        rating = "good";
    }
    Hospital(std::string hid, std::string n, std::string r) : hospital_id(hid), name(n), rating(r)
    {
    }
 
    Hospital(Hospital &obj)
    {
        this->hospital_id = obj.hospital_id;
        this->name = obj.name;
        this->rating = obj.rating;
    }
 
    friend std::ostream &operator<<(std::ostream &, const Hospital &);
    friend std::istream &operator>>(std::istream &, Hospital &);
    bool operator==(Hospital &a);
};
 
std::ostream &operator<<(std::ostream &out, const Hospital &c)
{
    out << c.hospital_id << " ";
    out << c.name << " ";
    out << c.rating << " ";
    return out;
}
 
std::istream &operator>>(std::istream &in, Hospital &o)
{
    std::cout << "Enter Hosptial Id ";
    in >> o.hospital_id;
    std::cout << "Enter Name";
    in >> o.name;
    std::cout << "Enter Rating ";
    in >> o.rating;
    return in;
}
 
class Doctor : public Hospital
{
    int doctor_id;
    std::string doctor_name;
    std::string doctor_speciality;
    std::string registerd_hospital_name;
    float doctor_fees;
 
public:
    Doctor()
    {
    }
    Doctor(std::string hospital_id,
           std::string name,
           std::string rating, int did, std::string dname, std::string dsp, std::string rhn, float df)
        : Hospital(hospital_id, name, rating), doctor_id(did), doctor_name(dname), doctor_speciality(dsp), registerd_hospital_name(rhn), doctor_fees(df)
    {
    }
    friend std::ostream &operator<<(std::ostream &, const Doctor &);
    friend std::istream &operator>>(std::istream &, Doctor &);
    float calculate_Tax();
};
 
std::ostream &operator<<(std::ostream &out, const Doctor &o)
{
    out << o.doctor_id;
    out << o.doctor_name;
    out << o.doctor_speciality;
    out << o.registerd_hospital_name;
    out << o.doctor_fees;
    return out;
}
 
std::istream &operator>>(std::istream &in, Doctor &c)
{
    std::cout << "Enter Doctor_id " << std::endl;
    in >> c.doctor_id;
    std::cout << "Enter Doctor_name " << std::endl;
    in >> c.doctor_name;
    std::cout << "Enter Doctor_speciality " << std::endl;
    in >> c.doctor_speciality;
    std::cout << "Enter Registered_hospital_name " << std::endl;
    in >> c.registerd_hospital_name;
    std::cout << "Enter Doctor fees " << std::endl;
    in >> c.doctor_fees;
    return in;
}
 
int main()
{
    int i = 1;
 
    std::cout << "Enter number of Hospitals: ";
    std::cin >> i;
    Hospital *h = new Hospital[i];
 
    // for (int j = 0; j < i; j++)
    // {
    //     std::cin >> h[j];
    //     std::cout << h[j];
    // }
 
    std::cout << "Enter number of doctors: ";
    std::cin >> i;
    Doctor *d = new Doctor[i];
 
    for (int j = 0; j < i; j++)
    {
        std::cin >> h[j];
        std::cout << h[j];
    }
    // float tax=d[0].CalculateTax();
    return 0;
}
 
float Doctor::calculate_Tax()
{
    return 0.2 * doctor_fees;
}
 
bool Hospital::operator==(Hospital &a)
{
    if (this->rating == a.rating)
    {
        return true;
    }
    return false;
}