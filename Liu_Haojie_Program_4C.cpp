// Haojie Liu

// CIS-5 Online

// Mar 9

// Program 4C: Facemask Sales


#include <iostream>
#include <iomanip>


using namespace std;

int main() {
    
    float const FORTY_NINE = 0.2;
    float const ONENINENINE = 0.3;
    float const FOURNINENINE = 0.4;
    float const FIVE_HUNDRED = 0.5;
    int const MASK_PRICE = 13;
    
    int mask;
    float total;
    
    cout << "Thank you for using the mask price calculator.";
    cout << "if you buy more face mask, we will offer more discount" << endl;
    cout << "The original price of the facemask is 13$\n" << endl;
    cout << "for 10 - 49, you will get a 20% discount \n " ;
    cout << "for 50 - 199, you will get a 30% discount \n " ;
    cout << "for 200 - 499, you will get a 40% discount \n " ;
    cout << "for 500 or more, you will get a 50% discount \n " ;
    cout << "please enter the number of facemasks you would like to buy.\n" << endl;
    cin >> mask;
    
    cout << setprecision(2) << fixed;
    
    if (mask > 10000){
        cout << "you exceed the maximum, please retry" << endl;
        return 0;
    }
    else if (mask == 0){
        cout << "you need to buy at least one mask" << endl;
        return 0;
    }
    else if ( (mask >= 10) && (mask <= 49) ){
        total = mask * MASK_PRICE * FORTY_NINE;
    }
    else if ( (mask >= 50) && (mask <= 199) ){
        total = mask * MASK_PRICE * ONENINENINE;
    }
    else if ( (mask >= 200) && (mask <= 499) ){
        total = mask * MASK_PRICE * FOURNINENINE;
    }
    else if ( mask >= 500 ){
        total = mask * MASK_PRICE * FIVE_HUNDRED;
    }
    else{
        total = mask * MASK_PRICE;
    }
    
    
    
    cout << "your total will be " << total << endl;
    
    
    
    
    
    
    return 0;
}
