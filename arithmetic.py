# Print Fahrenheit-Celsius Table

def main():
    lower = 0    # lower limit of temperature scale
    upper = 300  # upper limit
    step = 20    # step size

    fahr = lower

    while fahr <= upper:
        celsius = 5 * (fahr - 32) / 9  # formula for conversion
        print(f"{fahr}\t{celsius:.2f}")  # formatted output with 2 decimal places
        fahr += step

if __name__ == "__main__":
    main()