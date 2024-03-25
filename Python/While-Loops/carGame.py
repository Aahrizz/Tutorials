command = ""
started = False
while True:
    command = input("> ").lower()
    if command == "start":
        #print("Car started..")
        if started:
            print("The car is already started")
        else:
            started = True
            print("Car started..")          
    elif command == "stop":
       # print("Car has stopped")
       if not started:
           print("The car is already stopped")
       else:
        started = False
        print("Car has stopped")
    elif command == "help":
        print("""
start - to start the car
stop - to stop the car
quit - to exit
              """)
    elif command == 'quit':
        break
    else:
        print("I do not understand!")
    
print(command)