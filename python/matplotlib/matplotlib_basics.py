import numpy
import matplotlib.pyplot as plt

# Create an array containing 250 random floats between 0 and 5:
random_data_set = numpy.random.uniform(0.0, 500.0, 25000)
plt.hist(random_data_set, 1000)
plt.show()

# Normal Distribution
normal_dist = numpy.random.normal(5.0, 1.0, 100000)
plt.hist(normal_dist, 100)
plt.show()

# Scatter Plot - compare two equal length arrays
x = numpy.random.normal(5.0, 1.0, 1000)
y = numpy.random.normal(10.0, 2.0, 1000)
plt.scatter(x, y)
plt.show()