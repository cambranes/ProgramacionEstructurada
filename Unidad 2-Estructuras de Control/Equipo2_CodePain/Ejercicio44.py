aNum=-1
bNum=-1
res=1
save=0

while aNum<0 or bNum<0:
    aNum=int(input())
    bNum=int(input())

if aNum<bNum:
    save=bNum
    bNum=aNum
    aNum=save

while res!=0:
    res=aNum%bNum
    aNum=bNum
    bNum=res

print(aNum)
