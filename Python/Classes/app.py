class Person:
    def __init__(self, name ='Kimani', nationality ='Somali', age = 55) -> None:
        self.name = name
        self.age = age
        self.nationality = nationality
        
    #lets have a method for this person
    def sing(self):
        print("I can sing on a good day, you wanna see!!")

del Person        
p1 = Person()

del p1
del p1.nationality
print(p1.name)
print(p1.age)
print(p1.nationality)
p1.sing()