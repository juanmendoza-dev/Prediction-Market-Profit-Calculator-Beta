#include <iostream>
#include "riskAnalyzer.h"
#include <string>
using std::cout;
using std::cin;

void runRiskAnalyzer(){
   
    //vars
    double capital; // total amount the user wants to spend 
    std::string trade1;  // f1 will win best picture (example)
    std::string contractType; //"Yes" or "No"
    double $perShare; //price per "Yes" or "No" Share

    //step 0 (launcher)
    cout << "Running Risk Analyzer..." << "\n";

    //step 1 (ask for capital)
    cout << "Total Capital: ";
    cin >> capital;

    //step 2 (ask for trade 1, name that they want to assign )
    cout << "Trade 1:  ";
    cin >> trade1;

    //step 3 (ask for contract type "yes" or "no")
    cout << "Contract Type ('Yes' or 'No'): ";
    cin >> contractType;

    //step 4 (price per share)
    cout << "Price per " << '"' << contractType << '"' << " share"; //price per {contract type} share
    cin >> $perShare;



}