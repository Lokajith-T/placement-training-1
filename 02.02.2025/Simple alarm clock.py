import time

alarm_time = input("Enter alarm time (HH:MM:SS): ")

while True:
    current_time = time.strftime("%H:%M:%S")
    if current_time == alarm_time:
        print("Wake up! Alarm ringing!")
        break
    time.sleep(1)
