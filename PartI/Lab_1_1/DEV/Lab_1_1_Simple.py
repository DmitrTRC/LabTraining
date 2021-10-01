print('Laboratory work 1.1 measurements of the R-load.')

measurements_count = int(input('Enter number of measurements : '))

for cur_measurement_number in range(1, measurements_count):
    print(f'Enter measurement {cur_measurement_number}  -> ')
    measurement = float(input())
