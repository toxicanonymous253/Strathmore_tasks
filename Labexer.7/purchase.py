#prommpt the user fo the cost of two items
item1_cost = float(input("Enter the cost of the first item: ksh"))
item2_cost = float(input("Enter the cost of the second item: ksh"))

#claculate the total cost
total_cost = item1_cost + item2_cost

#prommpt the user for their payment
payment = float(input("Enter your payment amount: ksh"))

#check if the payment is less, enough or more
if payment < total_cost:
    amount_due = total_cost - payment
    print(f"You still owe ksh{amount_due:.2f}")
elif payment == total_cost:
    print("Thank you for your payment.")
else:
    chenge = payment - total_cost
    print(f"Thank you for your payment, here is your change ksh{chenge:.2f}")