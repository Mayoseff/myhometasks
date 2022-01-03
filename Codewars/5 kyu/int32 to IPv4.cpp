#include <cmath>

std::string uint32_to_ip(uint32_t ip)
{
    std::string bin;
    std::string y;
    while (ip > 0){                 
        y = std::to_string(ip % 2);
        bin = y+bin;
        ip /= 2;
    }
  
    std::string full = bin;
  
    y = "0";
    while (full.size() != 32){    
        full = y + full;
    }

    std::string one;
    for (int i = 31; i > 23; --i) {
        one = full[i] + one;
    }
    std::string two;
    for (int i = 23; i > 15; --i) {
        two = full[i] + two;
    }
    std::string three;
    for (int i = 15; i > 7; --i) {
        three = full[i] + three;
    }
    std::string four;
    for (int i = 7; i >= 0; --i) {
        four = full[i] + four;
    }
    

    int summ = 0;
  
    for (int i = 0; i < one.size(); ++i){
        std::string digit;
        digit += one[i];
        summ += pow(2, 7 - i) * std::stoi(digit);
    }
    one = std::to_string(summ);

    summ = 0;
    for (int i = 0; i < two.size(); ++i) {
        std::string digit;
        digit += two[i];
        summ += pow(2, 7 - i) * std::stoi(digit);
    }
    two = std::to_string(summ);

    summ = 0;
    for (int i = 0; i < three.size(); ++i) {
        std::string digit;
        digit += three[i];
        summ += pow(2, 7 - i) * std::stoi(digit);
    }
    three = std::to_string(summ);

    summ = 0;
    for (int i = 0; i < four.size(); ++i) {
        std::string digit;
        digit += four[i];
        summ += pow(2, 7 - i) * std::stoi(digit);
    }
    four = std::to_string(summ);

    return four + "." + three + "." + two + "." + one;        

}
