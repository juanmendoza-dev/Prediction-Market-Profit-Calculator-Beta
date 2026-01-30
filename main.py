import time 
from colorama import Fore
import math 

#contract vars
yes = 0
no = 0

#question/setup var
yes_or_no = input("Yes or No, Contract?: ") 
capital = input("Capital (initial invesment): ")


#logic (where the magic happens)

#yes or no contract logic
if yes_or_no == "no" or  yes_or_no == "N":
   yes_or_no == False
elif yes_or_no == "yes" or yes_or_no == "Y":
   yes_or_no == True
else:
   print("invalid operator")

if yes_or_no == True:
   yes == input('price per "yes" contract: ')
else:
   no == input('price per "no" contract: ')

