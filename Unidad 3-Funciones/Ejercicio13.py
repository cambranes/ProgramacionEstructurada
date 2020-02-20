#Autor Irving Eduardo Poot Moo
#Version 1.0
#Program who translate a militar hour to a normal hour


#Translation Process
def timeTranslate(time):
    amPm = "am"
    hours = time // 100
    minutes = time - (time // 100)*100

    
    if (hours > 12):
        hours = hours - 12
        amPm = "pm"
        
    return (str(hours).zfill(2)+":"+str(minutes).zfill(2)+ " " + amPm)

#Main Process
time = int(input())
print(timeTranslate(time))