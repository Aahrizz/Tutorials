temperature = 30
#>= greater than or equal to
#== equality sign
#<= less than or equal to
#!= not equal to
if temperature > 30:
    print("It is a hot day")
else:
    print("NOt a hot day")
    
    
name = input("Enter a name: ")
length  = len(name)

if length < 3:
    print("Name must be at least 3 characters long")
elif length > 50:
    print("Name can only be a maximum of 50 characters")
else:
    print("Name looks good!")