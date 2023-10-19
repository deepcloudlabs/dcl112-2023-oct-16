#include "bank.h"

int main(){
    banking::Bank bank1(1, "garanti bbva");
    // error: banking::Bank bank2(bank1);
    banking::Bank bank2(2, "isbank");
    // error: bank2 = bank1;
    return 0;
}