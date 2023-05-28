try:
    #result = 45 / 0
    result = 45 / 5
except:
    print("Error happened.") # program will come here if it got error
finally:
    print("finally here") # program will come here it got error or not
print("Done")