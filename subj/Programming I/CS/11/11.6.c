/*
from 11.3
Write a single statement to accomplish each of the following.
Assume that each of these statements applies to the same program.
---
a) Open the file "oldmast.dat" for reading and assign the returned file pointer to ofPtr.
    ofPtr = fopen("oldmast.dat", "r");

b) Open the file "trans.dat" for reading and assign the returned file pointer to tfPtr.
    tfPtr = fopen("trans.dat", "r");

c) Open the file "newmast.dat" for writing (and creation) and assign the returned file pointer to nfPtr.
    nfPtr = fopen("newmast.dat", "w");

d) Read a record from the file "oldmast.dat". The record consists of integer account , string name and floating-point currentBalance.
    fscanf(ofPtr, "%d%s%f", &account, name, &currentBalance);

e) Read a record from the file "trans.dat". The record consists of the integer account and floating-point dollarAmount.
    fscanf(tfPtr, "%d%f", &account, &dollarAmount);

f) Write a record to the file "newmast.dat". The record consists of the integer account , string name and floating-point currentBalance.
    fprintf(nfPtr, "%d %s %.2f", account, name, currentBalance);


11.6
(Creating Data for a File-Matching Program) Write a simple program to cre-
ate some test data for checking out the program of Exercise 11.7. Use the following
sample account data:

Master File: 
Account number 	Name 	Balance 
100 	Alan Jones 	348.17 
300 	Mary Smith 	27.19 
500 	Sam Sharp 	0.00 
700 	Suzy Green 	-14.22 

Transaction File: 	
Account number 	Dollar amount 
100 	27.14 
300 	62.11 
400 	100.56 
900 	82.17 
*/

#include <stdio.h>

int main(void){
    




}































