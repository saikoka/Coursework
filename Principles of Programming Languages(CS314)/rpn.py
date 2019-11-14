stack = []
while True:
    try:
        x = input()
    except EOFError:
        break
    if x.isdigit():
        stack.append(int(x))
        print(stack[len(stack) - 1])
    elif x is "~":
        if len(stack) >= 1:
            operand = stack.pop()
            operand = operand * -1
            stack.append(operand)
            print(stack[len(stack) - 1])
        else:
            print("invalid operation")
    elif x is "+":
        if len(stack) >= 2:
            operand1 = stack.pop()
            operand2 = stack.pop()
            summation = operand1 + operand2
            stack.append(summation)
            print(stack[len(stack) - 1])
        else:
            print("invalid operation")
    elif x is "*":
        if len(stack) >= 2:
            operand1 = stack.pop()
            operand2 = stack.pop()
            product = operand1 * operand2
            stack.append(product)
            print(stack[len(stack) - 1])
        else:
            print("invalid operation")
    elif x is "-":
        if len(stack) >= 2:
            operand1 = stack.pop()
            operand2 = stack.pop()
            difference = operand2 - operand1
            stack.append(difference)
            print(stack[len(stack) - 1])
        else:
            print("invalid operation")
    elif x is "/":
        if len(stack) >= 2:
            operand1 = stack.pop()
            operand2 = stack.pop()
            quotient = operand2 / operand1
            stack.append(quotient)
            print(stack[len(stack) - 1])
        else:
            print("invalid operation")
    else:
        print("incorrect syntax")
