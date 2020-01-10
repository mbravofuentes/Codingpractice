person=dict(Name="mario", Age=20,Salary= 8000) #mutable
print(person)
print(person["Name"]) #A key that is named age or name or salary that holds a value
#This is how you change the name or vaue
person["Name"] = "Mario Bravo Fuentes"
print(person["Name"])
#This line below goes into the Person Dict and adds "Insurance: Yes"
person["Insurance"] = "Yes"
#To Delete
del person["Age"]
print(person)
