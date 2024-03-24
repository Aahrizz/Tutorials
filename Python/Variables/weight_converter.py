#A program to convert weigth from pounds to kgs

weight_lbs = input("Enter your weight in lbs: ")

convert_ratio = 0.454
weight_kgs = float(weight_lbs) * convert_ratio

print(f"You are {weight_kgs} kgs")

