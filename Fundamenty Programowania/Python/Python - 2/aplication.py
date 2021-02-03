from task import Task

class Aplication:
    def __init__(self):
        self.tasks=[
            Task('start learning :) '),
            Task('Start training ')
        ]

    def show(self):
        for index, task in enumerate(self.tasks):
           print(f'[{index}].', task.show())


    def add(self):
        name = self.pull_task_name(self)
        task = Task(name)
        self.tasks.append(task)
        self.show()

    def mark_as_done(self):
        index = self.pull_index()
        self.tasks[index].setup_as_done()
        self.show()

    def remove_task(self):
        index = self.pull_index()
        del self.tasks[index]
        self.show()


    def pull_index(self)-> int:
        is_ok = False
        while not is_ok:
             index = int(input("which task should be marked as done?? "))
             if index < len(self.tasks):
                 is_ok = True

        return index

    @staticmethod
    def pull_task_name(self) -> str:
        is_ok = False
        while not is_ok:
            name = input('Tell me what you have to do.. ?')
            if len(name) > 3:
                is_ok = True

        return name