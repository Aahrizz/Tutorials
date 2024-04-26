class Student:
    def __init__(self, name, age, admNo) -> None:
        self.name =  name
        self.age = age
        self.admNo = admNo
        
    def admitted(self):
        print("The admitted student is:", self.name, "of age", self.age, "and their admission number is", self.admNo)
        

std = Student('Kiamani', 34, 6473)
std.admitted()

