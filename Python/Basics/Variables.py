import random

print("HI GUYS")
print("Hello", end="")
print("Namasthe")
print("Acccc", 69, "Manikay")

num = 9
name = "Ac"
float = 6.999
print(num, name, float)
num = "Nine"
print(num, name, float)

float = int(float)  # float(),str() => TypeCasting

name = "Accc"
print(num, name, float)
print(type(float))

num, name, float = 69, "Acccccccc", 7.234
num = x = 42
pack = [699, "Merry Christmas", 4.234]
num, name, float = pack

x = "Hello"


def func():
    global x
    x = "Hi"  # Because of global attribute x becomes a global Variable


func()
print(x)

x = 1j
x = [2, 3, 4]
x = (2, 4, 5)
x = range(5, 20)
x = {0: "Merry", 1: "Christmas"}
x = {2, 3, 6, 7}
x = True

print(random.randrange(3, 56))  # Random

x = """HI
Guys
"""  # Multiline String
print(x, len(x), "HI" in x, "hi" not in x)

x = "Sai Ramm     "
print(x[2:7])
print(x.upper(), x.lower(), x.strip(), x.replace("m", "M"))

age = 20
x = f"Age : {age}"  # Literal String
print(x)

x = 15
y = 4
print(x // y)  # Floor Divison

x = {"a", "b"}
y = {"a", "b"}
if x is y:
    print("x and y are same object")
if x is not y:
    print("Hell Nah")

print("a" in x)
print("a" not in y)

# BitWise Operators
print(6 & 3, 6 | 3, 6 ^ 3, ~6, 6 << 1, 3 >> 2)

# Lists
x = [2, 3, "Hello"]
print(x, len(x), type(x))
x.append(True)
x.insert(1, "Ac")
x.extend(y)
x.remove("b")
print(len(x))
