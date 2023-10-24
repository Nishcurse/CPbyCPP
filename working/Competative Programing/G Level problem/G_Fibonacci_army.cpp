// Io Language Code
SelfFibonacci := method(z,
    if(z == 1 or z == 0, 1, SelfFibonacci(z - 2) + SelfFibonacci(z - 1))
)

c := File standardInput readLine asNumber
result := SelfFibonacci(c)
result print
