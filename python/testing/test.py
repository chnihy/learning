from main import add

def test_add():
    assert add() == 4, "Error message goes here"

if __name__ == "__main__":
    test_add()
    print("Everything passed")