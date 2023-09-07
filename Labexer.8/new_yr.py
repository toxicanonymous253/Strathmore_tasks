import time

# Define the countdown numbers
countdown_numbers = [10, 9, 8, 7, 6, 5, 4, 3, 2, 1]

# Iterate through the countdown numbers
for number in countdown_numbers:
    print(number)
    time.sleep(1)  # Pause for 1 second before the next countdown

# After the countdown, print "Happy New Year!"
print("Happy New Year!")
