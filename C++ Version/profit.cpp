
#include <iostream>

int main(){
    //vars
    double capital; //how much money the user puts in, AKA capital 
    std::string yes_no_contract; //the contract
    double perShare; 


    //launcher
    std::cout << "Inital Capital?: "; //inital capital 
    std::cin >> capital;

    std::cout << "Purchased 'Yes' or 'No' Contract?: "; //figures out if the user bought yes or no contract!
    std::cin >> yes_no_contract;
    
    // Figures out if the contract is a "Yes" or "No" 
    if (yes_no_contract == "Yes"|| yes_no_contract == "YES" || yes_no_contract == "y" || yes_no_contract == "Y"){
       std::string yes_no_contract = "Yes";
       
    }
    
    else if (yes_no_contract == "No" || yes_no_contract == "NO" || yes_no_contract == "n" || yes_no_contract == "N"){
        std::string yes_no_contract = "No"; 
    }

    else {
        std::cout << "Invalid Please Try again!";
    }

    //per share
    std::cout << "How Much per " << yes_no_contract <<" contract/share?"; // How much per {yes or no contract} contract?
    std::cin >> perShare;

    //safety rails 
    if (perShare > capital){
        std::cout << "Too much money, Must deposit more money!";
    }

    else if (perShare == capital){
        std::cout << "This is risky, It is highly recommended not to use all the capital";
    }

    return 0; //goodbye!
}