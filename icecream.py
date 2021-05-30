#variables
my_scoops = int()
my_sales = float()
my_icecream = str()
total_sales = float()
scoops_left = int()

#input
my_icecream = input("Enter the ice cream flavor:")
my_scoops = int(input("Enter the number of scoops sold:"))

#process
my_sales = 2.5
total_sales = my_scoops * my_sales
scoops_left = (96) - my_scoops

#output
print ("Ice Cream Flavor: " + my_icecream)
print ("Total Sales: $" , total_sales)
print ("Number of scoops left:" , scoops_left)