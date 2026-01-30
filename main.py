import time 
from colorama import Fore
import math 

#contract vars
yes_contract = 0
no_contract = 0

#launcher/ inital questions
yes_or_no = input("Yes or No, Contract?: ") 
capital = input("Capital (initial invesment): ")


#yes or no contract logic
def contract():
    while True:
        if yes_or_no == "no" or  yes_or_no == "N":
            yes_or_no == False
        elif yes_or_no == "yes" or yes_or_no == "Y":
            yes_or_no == True
        else:
            print("invalid operator")

#contract price logic 
def contract_Price():
    while True:
        if yes_or_no == True:
            yes_contract == input('price per "yes" contract: ')
            break
        elif yes_or_no == False:
            no_contract == input('price per "no" contract: ')
            break
        else:
            print('invalid "yes" or "no" contract price unit! Try again!')

            #testets