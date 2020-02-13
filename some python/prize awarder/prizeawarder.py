import random
import time
import os
from pathlib import Path
if os.path.isfile("giveaway.txt"):
    print("The winner is " + random.choice(list(open("giveaway.txt"))))
else:
    print("The filename for the members must be 'giveaway.txt'")
print("\n\n")

