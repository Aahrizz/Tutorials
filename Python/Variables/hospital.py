name = input("Enter patient's name: ")
age = input("What's the patient's age: ")
status = input("New or old patient: ")

def y():
    if status == "New":
        print("New patient")
    else:
      print("An old patient")
      
print(f"Patient's name is {name}, {age} years old and a {status} comer here.")
    
