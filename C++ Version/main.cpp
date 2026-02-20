#include <iostream> 
#include <string>
#include "riskAnalyzer.h"
using std::cout;
using std::cin;

int main(){
    //var
    std::string selection;


    //UI launcher 
    cout << "Polymarket/Kalshi Bot" << "\n"; 
    cout << "Options: " << "\n";
    cout << "1) Risk Analyzer" << "\n";
    cout << "2) Profit Prediction" << "\n";
    cout << "3) Exit" << "\n";
    cout << "\n"; //newline
    cout << "Choose Selection: "; //user selection
    std::cin >> selection; 
    
    if (selection == "1" || selection == "one"){
        runRiskAnalyzer(); //runs risk analyzer 
        
    }
    

    /*
    else if (selection == "2" || selection == "two"){

        


    }
    */
    
    else if (selection == "3" || selection == "three"){
        cout << "Exiting...";
        




    }
        

  

    return 0;
}