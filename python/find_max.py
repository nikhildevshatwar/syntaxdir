'''
let's find max num of a set
'''
set = {1,3,4,52,7,6,8,9,10,22}

#Using pre-built function
# print('Max is :', max(set))

#defining our own function
max = -1
for number in set:
    if number > max :
        max = number
print('Max is : ', max)

#using an array
set = [1,3,4,52,7,6,8,9,10,22]
max=set[0]
for counter in range(0, len(set)):
    if max < set[counter]:
        max = set[counter]
print('Max is : ', max)
