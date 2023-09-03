# Get user input
num_str = input("Enter a number to be tested if it is odd or even: ")

# Check if the input can be converted to an integer
if num_str.isdigit():
    num = int(num_str)
    
    # Check if the number is even or odd
    if num % 2 == 0:
        print("The number is even.")
    else:
        print("The number is odd.")
else:
    print("Invalid input. Please enter a valid integer.")
