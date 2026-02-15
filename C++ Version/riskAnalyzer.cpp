#include <iostream>
#include "riskAnalyzer.h"
#include <string>
#include <limits>
using std::cout;
using std::cin;
using std::getline;

void runRiskAnalyzer(){
   
    //vars
    double capital; // total amount the user wants to spend 
    std::string trade1;  // f1 will win best picture (example)
    std::string contractType; //"Yes" or "No"
    double pricePerShare; //price per "Yes" or "No" Share

    //step 0 (launcher)
    cout << "Running Risk Analyzer..." << "\n";

    //step 1 (ask for capital)
    cout << "Total Capital: ";
    cin >> capital;

    //clear buffer
    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');


    //step 2 (ask for trade 1, name that they want to assign )
    cout << "Trade 1:  ";
    getline(cin, trade1); //gets the whole entire line instead of just one letter

    //step 3 (ask for contract type "yes" or "no")
    cout << "Contract Type ('Yes' or 'No'): ";
    cin >> contractType;

    //step 4 (price per share)
    cout << "Price per " << '"' << contractType << '"' << " share"; //price per {contract type} share
    cin >> pricePerShare;



}