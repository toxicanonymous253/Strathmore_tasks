# Initialize variables
start = 12
end = 28
step = 2
current = start
total_sum = 0

# Using a while loop to print the numbers and compute the sum
while current <= end:
    print(current, end=" ")
    total_sum += current
    current += step

# Display the sum
print("\nThe sum of the numbers is:", total_sum)
