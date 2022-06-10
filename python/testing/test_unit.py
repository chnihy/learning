from main import add
import unittest

class TestAdd(unittest.TestCase):

    def test_add(self):
        self.assertEqual(add(), 3, "Custom Error message goes here")

if __name__ == '__main__':
    unittest.main()