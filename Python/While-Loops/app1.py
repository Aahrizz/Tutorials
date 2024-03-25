option = input("Enter either start, stop, quit to operate the engine or help to access support: ").upper()
start = "The car has started....Ready to go!"
stop = "The car has stopped"
quit = "exited"
help = "start - to start the car\nstop - to stop the car \nquit - to exit"

if option == 'START':
    print(start)
elif option == 'STOP':
    print(stop)
elif option == 'QUIT':
    exit
elif option == 'HELP':
    print(help)
else:
    print("I don't understand that...")