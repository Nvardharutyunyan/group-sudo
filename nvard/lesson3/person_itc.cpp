#include <iostream>
#include <string>
struct Person {
    std::string firstName;
    std::string lastName;
    int age;
    float weight;
    char gender; // male:='m', female:='f'
    std::string from;
    bool student;
    int status; // amusnacats:=1, chamusnachats:=0
    void Print() {
        std::cout << "--------------------------------------------\n";
        if (student == true) {
            std::cout << "Student ";
        } else {
            std::cout << "No student ";
        }
        if (gender == 'f' && status == 0) {
            std::cout << "Miss ";
        } else if (gender == 'f' && status == 1) {
            std::cout << "Misses ";
        } else if (gender == 'm') {
             std::cout << "Mister ";
        }
        std::cout << firstName << " " << lastName;
        std::cout << " from " << from << " \n" << "Age` " << age << " years old \n" << "Weight` " << weight << " kg \n";
        if (gender == 'm') {
            std::cout << "Gender` male \n";
        } else if (gender == 'f') {
            std::cout << "Gender` female \n";
        }
        if (status == 1 && gender == 'f') {
            std::cout << "Family status` she is married \n";
        } else if (status == 0 && gender == 'f') {
            std::cout << "Family status` she is single \n";
        }
        if (status == 1 && gender == 'm') {
            std::cout << "Family status` he is married \n";
        } else if (status == 0 && gender == 'm') {
            std::cout << "Family status` he is single \n";
        }
    }
};
int main() {
    Person itc[13];
    itc[0] = {"Aleksandr", "Avagyan", 19, 65.5, 'm', "Stepanakert", true, 0};
    itc[1] = {"Ani", "Hakobyan", 19, 50.3, 'f', "Askeran", true, 0};
    itc[2] = {"Artur", "Gasparyan", 25, 68, 'm', "Stepanakert", false, 0};
    itc[3] = {"Armen", "Abrahamyan", 19, 63.1, 'm', "Stepanakert", true, 0};
    itc[4] = {"Arpine", "Harutyunyan", 23, 40.5, 'f', "Martuni", true, 0};
    itc[5] = {"Edgar", "Grigoryan", 16, 60.4, 'm', "Stepanakert", false, 0};
    itc[6] = {"Lilit", "Melqumyan", 19, 53.5, 'f', "Martuni", true, 0};
    itc[7] = {"Hrach", "Gevorgyan", 21, 65.8, 'm', "Martakert", true, 0};
    itc[8] = {"Mariam", "Karapetyan", 21, 55.6, 'f', "Stepanakert", true, 0};
    itc[9] = {"Miqayel", "Sargsyan", 17, 58.01, 'm', "Martuni", true, 0};
    itc[10] = {"Nona", "Musaelyan", 19, 54.5, 'f', "Stepanakert", true, 0};
    itc[11] = {"Nvard", "Harutyunyan", 19, 54.5, 'f', "Martuni", true, 0};
    itc[12] = {"Tigran", "Hovhannisyan", 20, 70.5, 'm', "Martakert", true, 0};
    std::cout <<"Stepanakerti Instigate Mobile ITC-um sovorrum en 13 usanox` \n";
    for (int i = 0; i < 13;  i++) {
        std::cout << i+1 << '.' << itc[i].firstName << "\n";
    }
    std::cout <<"\nEte voreve meky hetaqrqrum e dzez, apa karox eq nra masin texekutyunner imanal. \nGreq nra anuny` ";
    std::string name;
    std::cin >> name;
    bool bul = false;
    for (int i = 0; i < 13;  i++) {
        if (name == itc[i].firstName) {
            bul = true;
            itc[i].Print();
        }
    }
    if (bul == false) {
        std::cout << "Stepanakerti Instigate Mobile-um nman anunov usanox chunenq. \n";
    }
    std::cout << "--------------------------------------------\n\n";    
    std::cout << "Shnorhakalutyun mer carayutyunic ogtvelu hamar. Hajoxutyun \n";

    return 0;
}

