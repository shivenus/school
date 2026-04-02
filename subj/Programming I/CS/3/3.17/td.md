top down pseudocode, 3.17

**goal**
Determine if a customer has exceeded their credit limit.
Display account number, credit limit, new balance and a warning for anyone who has.

**refinement 1**
initialise variables
input data for each customer until -1 is entered
for each customer:
    calculate new balance.
    determine if new balance exceeds credit limit
    if it does, display account details and a warning

**refinement 2**
input the account number
while loop that ends when -1 is entered
    input all the data
    calculate new balance