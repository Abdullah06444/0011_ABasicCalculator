import math



def switch(ch):
    case={}
    number2 = 1
    if ch != 6 and ch != 7:
        number2 = float(input("Enter any number :"))

    while True:
        try:

            case = {

                1: number1+number2,
                2: number1-number2,
                3: number1*number2,
                4: number1/number2,
                5: number1%number2,
                6: math.sqrt(number1),
                7: number1/180.0,
                'default': 'Invalid operation\n\n'
            }
            if ch < 7:
                print("Result : {0}\n\n".format(float(case[ch])))
            if ch == 7:
                print(str(number1) + " degree is " + str(case[ch])+ " pi radian\n\n")

            break

        except ValueError:
            break

        except KeyError:
            print(case['default'])
            continue

        except ZeroDivisionError:
            print("Result : cannot divided by zero\n\n")
            break


# Main Function
turnOnOff = True

while turnOnOff:
    try:
        number1 = float(input("Enter any number :"))

        print("1) Addition Operation")
        print("2) Subtraction Operation")
        print("3) Multiplication Operation")
        print("4) Division Operation")
        print("5) Remainder Calculate Operation")
        print("6) Square-root Calculate Operation")
        print("7) Radian Calculate Operation")
        print("8) Terminate Program\n\n")

        choice = int(input("Select your operation :"))

        if choice == 8:
            turnOnOff = False
        else:
            switch(choice)

        #case.get(choice, lambda: KeyError)

    except ValueError:
        continue #It is not integer value

    except KeyError:
        print("Invalid operation\n\n")
        continue
