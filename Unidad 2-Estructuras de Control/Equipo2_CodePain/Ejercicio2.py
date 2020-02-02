aNum=float(input())
bNum=float(input())

if aNum>bNum:
    print(str(aNum) + ">" + str(bNum))
else:
    if aNum<bNum:
        print(str(aNum) + "<" + str(bNum))
    else:
        print(str(aNum) + "=" + str(bNum))