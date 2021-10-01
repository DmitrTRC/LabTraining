print('Laboratory work 1.1 measurements of the R-load.')

measurements = []

measurements_count = int(input('Enter number of measurements : '))

for cur_measurement_number in range(1, measurements_count+1):
    print(f'Enter value for measurement {cur_measurement_number} -> ', end='')
    measurement = float(input())
    measurements.append(measurement)

print('Results of the measurements: ')

for index, cur_measurement_number in enumerate(measurements):
    print (f'({index}): {cur_measurement_number} Ohms')

