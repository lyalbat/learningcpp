#include <iostream>
using std::string; 

bool check_valid_card(string card_number);
int sum_even_digits(int even_digit);

int main() {
    string card_number;
    std::cout << "Enter your credit card number: " << '\n';
    std::cin >> card_number;
    std::cout << "This is your credit card: " << card_number << '\n';
    const bool isValidNumber = check_valid_card(card_number);
    if(isValidNumber){
        std::cout << "This credit card is valid!"<< '\n';
    }
    else{
        std::cout << "Sorry, this credit card is not valid!"<< '\n';
    }
    return 0;
}

bool check_valid_card(string card_number){
    int sum = 0;
    for (int i = card_number.size() - 1; i >= 0; i--)
    {
        int element = card_number[i]- 48; //48 is equal to 0 in ASCII
        if((i+1)%2 == 0){
            sum += sum_even_digits(element);
        }
        else{
            sum += element;
        }
    }
    std::cout << "this is the final sum: " << sum << '\n';
    return (sum%10)==0;
}

int sum_even_digits(int even_digit){
    int multiplied = even_digit*2;
    if(multiplied>9){
        return (multiplied/10) + (multiplied%10);
    }
    return multiplied;
}