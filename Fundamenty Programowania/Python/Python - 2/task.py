class Task:
    def __init__(self, name:str):
        self.name = name
        self.is_done = False

    def show(self):
        if self.is_done:
            sign = 'v'
        else:
            sign = 'x'

        return f'{self.name} \t {sign}'

    def setup_as_done(self):
        self.is_done = True
