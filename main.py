import time 
from colorama import Fore
import math 


#launcher/ initial questions
yes_or_no = input('Are you buying "Yes" or "No" Contract? ') 
capital = input("Capital (initial investment): ")

#yes or no contract logic
def contract():
    while True:
        if yes_or_no == "yes" or yes_or_no == "Y" or yes_or_no == "YES":
            yes_or_no = True
        elif yes_or_no == "no" or yes_or_no == "N" or yes_or_no == "NO":
            yes_or_no = False
        else:
            print("invalid operator")

#contract price logic 
def contract_Price():

    #global vars
    global yes_contract
    global no_contract

    while True:
        if yes_or_no == True:
            yes_contract = input('price per "yes" contract: ')
            break
        elif yes_or_no == False:
            no_contract = input('price per "no" contract: ')
            break
        else:
            print('invalid "yes" or "no" contract price unit! Try again!')

contract()
contract_Price()