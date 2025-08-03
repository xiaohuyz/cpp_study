#include <iostream>
#include "Sale_item.h"
int main() {
    Sales_item total;
     if (std::cin >> total) { // read the first transaction
         Sales_item trans;
         while (std::cin >> trans) { // read the following transactions
             if (total.isbn() == trans.isbn()) {
                 total = total + trans; // add to the first
             }
             else {
                 std::cout << total << std::endl;
                 total = trans; // renew total, so that start another book count
             }
         }
         std::cout << total << std::endl;
     }
     else {
         std::cerr << "No data?!" << std::endl;
         return -1;
     }
    return 0;
}