# a=(input("Enter a number:"))    
# print(f"Multiplication table of {a} is :")
# try:
#     for i in range(1,11):
#         print(f"{int(a)} X {i} = {int(a*i)}")
# except:
#     print("invalid literal")
        
# print("End of program")

try:
    num = int(input("Enter a number:"))
    a=[1,2,3]
    print(a[num])
except ValueError:
    print("Invalid Literal!")
    
except IndexError:
    print("List index out of range!")
    
