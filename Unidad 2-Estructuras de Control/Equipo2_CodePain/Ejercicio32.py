baseYear=-1
topYear=-1
place=0
quantity=0

while baseYear<0 or topYear<0:
    baseYear=int(input())
    topYear=int(input())
    if baseYear>topYear:
        baseYear=-1
        topYear=-1

place=baseYear%4

if place==0:
    quantity=int((topYear-baseYear)/4+1)
else:
    if place==1:
        quantity=int((topYear+1-baseYear)/4)
    else:
        if place==2:
            quantity=int((topYear+2-baseYear)/4)
        else:
            quantity=int((topYear+3-baseYear)/4)

print(quantity)
