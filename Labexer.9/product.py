# Initialize the product to 1
product = 1

while True:
    # Get a number from the user
    num = int(input("Enter a number: "))

    # Check if the number is positive
    if num > 0:
        # Multiply the current product by the entered number
        product *= num
    else:
        # If the number is zero or negative, break out of the loop
        break

# Output the product of all positive numbers
print("The product of all your positive numbers is", product)
