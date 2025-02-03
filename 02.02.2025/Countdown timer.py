import time

def countdown(seconds):
    while seconds:
        print(f"Time left: {seconds} seconds")
        time.sleep(1)
        seconds -= 1
    print("Time's up!")

countdown(10)
