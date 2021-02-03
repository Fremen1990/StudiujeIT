from aplication import Aplication

if __name__ == '__main__':
    aplication = Aplication()
    aplication.show()

    while True:
        print('-'*50)
        print('What you want to do?? s - show tasks, a  - add task, d - mark as done, r - remove q -- quit ')
        command = input("write 's' /  'a' /  'd' / 'r'  or 'q':")
        if command == 's':
            aplication.show()
        elif command == 'a':
            aplication.add()
        elif command == 'd':
            aplication.mark_as_done()
        elif command == 'r':
            aplication.remove_task()
        elif command == 'q':
            quit()
        else:
             print('I do not understand :( ')