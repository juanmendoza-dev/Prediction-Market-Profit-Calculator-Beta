from colorama import Fore

#comments are next to the inputs because colorama makes it a bit messy, sorry about that!
# "yes" contracts = 1, and "no" contracts = 2

#step one: Is it a yes or no contract?
#step two: price per contract.
#step three: profit logic 


capital = input(f"{Fore.LIGHTMAGENTA_EX} Initial {Fore.LIGHTMAGENTA_EX}Capital? ") #initial capital 
yes_no_contract = input(f'{Fore.LIGHTMAGENTA_EX}Purchased {Fore.LIGHTGREEN_EX}"Yes"{Fore.LIGHTMAGENTA_EX} or {Fore.LIGHTRED_EX}"No" {Fore.LIGHTMAGENTA_EX}Contract?: ') #Purchased "Yes" or "No" Contract

#yes or no logic (step 1)
if yes_no_contract == "Yes" or yes_no_contract == "yes" or yes_no_contract == "Y" or yes_no_contract == "y" or yes_no_contract == "YES":
    contract = 1
elif yes_no_contract == "No" or yes_no_contract == "no" or yes_no_contract == "N" or yes_no_contract == "n" or yes_no_contract == "NO":
    contract = 2
else:
    print(Fore.LIGHTRED_EX + "invalid input please try again!")

#contract logic (step 2)
if contract == 1:
    yes_contract = input(f'{Fore.LIGHTMAGENTA_EX}Price Per {Fore.GREEN}"Yes" {Fore.LIGHTMAGENTA_EX}Share: ') #price per "Yes" Share
    contract = f'{Fore.GREEN}"Yes"'
elif contract == 2:
    no_contract = input(f'{Fore.LIGHTMAGENTA_EX}Price Per {Fore.LIGHTRED_EX}"No" {Fore.LIGHTMAGENTA_EX}Share: ') #price per "No" share 
    contract = f'{Fore.LIGHTRED_EX}"No"'
else:
    print(Fore.LIGHTRED_EX +"Error please start over!!")

#profit logic 
if contract  == 1:
    profit = (yes_contract * 0.20)
    sell_price = (yes_contract + profit)
elif contract == 2:
    profit = (no_contract * 0.20)
    sell_price = (no_contract + profit)
else:
    print("something went really wrong please try again!")
    
    



#final output
yes_profit = (f"To make 20% ({}) of {contract} contract {Fore.LIGHTMAGENTA_EX}sell at: ")
no_profit = (f"")

