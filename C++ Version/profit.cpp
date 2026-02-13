
#include <iostream>
#include <string> 

int main(){
    //vars
    double capital; //how much money the user puts in, AKA capital 
    std::string yes_no_contract; //the contract
    double perShare; 
    int share;


    //launcher
    std::cout << "Inital Capital?: "; //inital capital 
    std::cin >> capital;

    std::cout << "Purchased 'Yes' or 'No' Contract?: "; //figures out if the user bought yes or no contract!
    std::cin >> yes_no_contract;

    std::cout << "How many " << yes_no_contract << " did you purchase?: ";
    std::cin >> share;
    
    // Figures out if the contract is a "Yes" or "No" 
    if (yes_no_contract == "Yes"|| yes_no_contract == "YES" || yes_no_contract == "y" || yes_no_contract == "Y"){
        yes_no_contract = "Yes";
       
    }
    
    else if (yes_no_contract == "No" || yes_no_contract == "NO" || yes_no_contract == "n" || yes_no_contract == "N"){
        yes_no_contract = "No"; 
    }

    else {
        std::cout << "Invalid Please Try again!";
    }

    //per share
    std::cout << "How much per " <<'"' <<yes_no_contract << '"'<<" contract/share?: "; // How much per {yes or no contract} contract?
    std::cin >> perShare;


    //safety rails 
    if (perShare > capital){
        std::cout << "Too much money, Must deposit more money!";
    }

    else if (perShare == capital){
        std::cout << "This is risky, It is highly recommended not to use all the capital";
    }

    //actual logic (summary + analysis)
    std::cout << "Contract Type: " << '"' << yes_no_contract << '"' << "Contract"; //Contract type: {yes_no_contract} Contract
    std::cout << ""



    return 0; //goodbye!
}






/*
TODO:

1) Make it so that yes_no_contract: Accepts all type of yes/no inputs (Caps included)
2) Wrap the whole thing a while loop (similar to the python version)
3) Find a way to log everything (log file already created)

*/