import time 
from colorama import Fore
import math 

#comments are next to the inputs because colorama makes it a bit messy, sorry about that!
# "yes" contracts = 1, and "no" contracts = 2

capital = input(f"{Fore.LIGHTMAGENTA_EX} Initial {Fore.LIGHTMAGENTA_EX}Capital? ") #initial capital 
yes_no_contract = input(f'{Fore.LIGHTMAGENTA_EX}Purchased {Fore.LIGHTGREEN_EX}"Yes"{Fore.LIGHTMAGENTA_EX} or {Fore.LIGHTRED_EX}"No" {Fore.LIGHTMAGENTA_EX}Contract?: ') #Purchased "Yes" or "No" Contract

#yes or no logic (step 1)
if yes_no_contract == "Yes" or yes_no_contract == "yes" or yes_no_contract == "Y" or yes_no_contract == "y" or yes_no_contract == "YES":
    contract = 1
elif yes_no_contract == "No" or yes_no_contract == "no" or yes_no_contract == "N" or yes_no_contract == "n" or yes_no_contract == "NO":
    contract = 2
else:
    print(Fore.LIGHTRED_EX + "invalid input please try again!")

