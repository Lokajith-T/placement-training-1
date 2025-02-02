def convert_temperature(value, unit):
    if unit.lower() == "c":
        return (value * 9/5) + 32  # Celsius to Fahrenheit
    elif unit.lower() == "f":
        return (value - 32) * 5/9  # Fahrenheit to Celsius
    else:
        return "Invalid unit!"

temp = float(input("Enter temperature: "))
unit = input("Enter unit (C/F): ")
print("Converted temperature:", convert_temperature(temp, unit))
