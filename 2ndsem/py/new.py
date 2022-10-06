amount= int(input("Enter the amount in multiple of 10 : "))
two_thousand=amount //2000
print("Number of 2000 rupees", two_thousand)
amount -=two_thousand*2000
two_hund=amount // 200
print("Number of 200 rupees", two_hund)
amount -=two_hund*200
one_hund = amount//100
print("Number of 100 rupees", one_hund)
amount -=one_hund*100
one_ten = amount//10
print("Number of 10 rupees", one_ten)
print("The Program is Thus Execcuted")