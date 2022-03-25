#Rotate an array to the right by a given number of steps.
#75%

# initializing list
test_list = [1, 4, 6, 7, 2]
  
test_list = test_list[-3:] + test_list[:-3]
  
# Printing after right rotate
print ("List after right rotate by 3(back to original) : " + str(test_list))