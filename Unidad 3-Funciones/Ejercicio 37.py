i = 0
j = 0
n = 0 
sum = 0
es_primo = 1

n = int(input())

for i in range(2,n):

    for j in range(2,i): 

        if i % j == 0: 

            es_primo = 0

            break
        
    if es_primo:

        sum += i 

        n = n - 1
    
    es_primo = 1 

print (sum)
