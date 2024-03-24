weight  = input("Enter your weight in kilos or pounds: ")

option = input("(L)bs or (K)g: ")

if option.upper() == 'L':
    weight_kg = float(weight) * 0.45
    print(f"{weight_kg} kgs")
elif option.upper() == 'K':
    weight_lbs = float(weight) / 0.45
    print(f"{weight_lbs} lbs")
else:
    print("Enter correct weight")
    

#print(weight)