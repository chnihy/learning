import numpy

speed = [99,86,87,88,86,103,87,94,78,77,85,86]

med = numpy.median(speed)
mean = numpy.mean(speed)

# Standard Deviation is the average distance between numbers
std_deviation = numpy.std(speed)

# Variance is the square of the Std Deviation
variance = numpy.var(speed)

# Percentiles describe the value that a given percent of the values are lower than.
# Ex: what age are 75% of people younger than?
ages = [5,31,43,48,50,41,7,11,15,39,80,82,32,2,8,6,25,36,27,61,31]
percentile = numpy.percentile(ages, 75) 


# Random Data Set Creation
# Create an array containing 250 random floats between 0 and 5:
random_data_set = numpy.random.uniform(0.0, 5.0, 250)

# A Normal or Gausian distribution - where everything is centered around a number
normal_dist = numpy.random.normal(5.0, 1.0, 100000)


print("Median: {}, Mean: {}".format(med, mean)+"\n")
print("Standard Deviation: {}, Variance {}".format(std_deviation, variance)+"\n")
print("75th Percentile: {}".format(percentile)+"\n")
print('Random Data Set ' + '\n' + '{}'.format(random_data_set)+"\n")