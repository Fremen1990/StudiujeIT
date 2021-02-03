print("Hello Python!! ")
print("- - "*50)

class Task:
    def __init__(self, name:str):
        self.name=name
        self.is_done=False



class Aplication:
    def __init__(self):
        self.tasks=[]

    def show(self):
        for task in self.tasks:
           print(task.show())

if __name__ == '__main__':
    aplication=Aplication()
    aplication.show()