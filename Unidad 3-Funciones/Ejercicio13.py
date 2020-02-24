'''
Author Irving Eduardo Poot Moo
Version 1.0
Program who translate a military hour to a normal hour
'''


def inputNumber():
    '''
    It gets the military hour that we will translate
        Args:
            N (int):Value of the military hour
        Returns:
            The original hour
    '''
    N = 0
    N = int(input())
    return N


def timeTranslate(hours):
    '''
    Determinate if the given hour is Am or Pm
        Args:
            amPm (char): Default time
            hours (int): previously modified hour
        Returns:
            The modified time
    '''
    amPm = "am"
    if (hours > 12):
        hours = hours - 12
        amPm = "pm"
        
    return amPm

def hoursTranslate(time):
    '''
    Gets the hours from the military time
        Args:
            time (int): The original hour
            hours (int): The hours of the original hour
        Returns:
            The modified hours
    '''
    hours = time // 100
    return hours

def minutesTranslate(time):
    '''
    Gets the minutes from the military time
        Args:
            time (int): The original hour
            minutes (int): The minutes of the original hour
        Returns:
            The modified minutes
    '''
    minutes = time - (time // 100)*100
    return minutes

def printHour(hours, minutes, amPm):
    '''
    Print the translated hour
        Args:
            hours (int): The hours of the original hour
            minutes (int): The minutes of the original hour
            amPm (char): Determinated time
        Returns:
            Nothing
    '''
    print(str(hours).zfill(2)+":"+str(minutes).zfill(2)+ " " + amPm)

#Input
'''
It recives the military hour
    Args:
        time (int): Given hour
'''    

time = inputNumber()

#Process
'''
Translate the militry hour step by step, beggining from the time to the hours and finally the minutes
    Args:
        time (int): Given hour
        hours (int): Translated hours
        minutes (int): Translated minutes
        amPM (char): Translated time
'''
hours = hoursTranslate(time)
minutes = minutesTranslate(time)
amPm = timeTranslate(time)

#Output
'''
Print the translated hour
'''
printHour(hours, minutes, amPm)