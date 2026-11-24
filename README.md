# SmartATM – ATM Simulation System Using C

## 1. Project Overview
SmartATM is a menu-driven ATM simulation developed using the C programming language. It allows users to perform basic banking operations through a simple menu.

## 2. Problem Statement
Manual banking operations can be time-consuming. This project demonstrates how basic ATM operations can be simulated using programming concepts in C.

## 3. Objectives
- To understand menu-driven programming.
- To perform basic banking operations.
- To practise conditional statements and loops.
- To understand arrays and transaction storage.
- To improve problem-solving skills using C.

## 4. Features
1. PIN verification with three attempts.
2. Check account balance.
3. Withdraw money.
4. Deposit money.
5. Change ATM PIN.
6. View transaction history.
7. Exit the program.

## 5. Initial Account Details
- PIN: 1234
- Initial Balance: Rs. 5000

These are sample details for educational demonstration only.

## 6. Algorithm
1. Start the program.
2. Display the SmartATM welcome screen.
3. Ask the user to enter their PIN.
4. Allow a maximum of three attempts.
5. If the PIN is incorrect three times, deny access.
6. If the PIN is correct, display the ATM menu.
7. Ask the user to select an operation.
8. Use switch-case to perform the selected operation.
9. Update the balance after deposits and withdrawals.
10. Store transaction amounts in an array.
11. Display transaction history when requested.
12. Repeat the menu until the user selects Exit.
13. Stop the program.

## 7. C Concepts Used
- Variables and data types
- printf() and scanf()
- if-else statements
- while loop
- do-while loop
- for loop
- switch-case
- Arrays
- break statement

## 8. Compilation and Execution

Compile:
```bash
gcc atm.c -o atm
```

Run on Windows:
```powershell
.\atm.exe
```

## 9. Sample Test Cases

| Test | Input | Expected Result |
|---|---|---|
| Balance enquiry | Choice 1 | Displays Rs. 5000 initially |
| Withdrawal | Rs. 500 | Balance becomes Rs. 4500 |
| Deposit | Rs. 1000 | Balance becomes Rs. 5500 |
| Transaction history | Choice 5 | Displays recorded transactions |
| Excess withdrawal | Rs. 10000 | Insufficient balance |
| PIN change | 1234 to 5678 | PIN changes successfully |
| Exit | Choice 6 | Program terminates |

## 10. Limitations
- Account details are predefined.
- Balance and transaction history reset after the program closes.
- This is an educational simulation, not a real banking application.

## 11. Conclusion
SmartATM demonstrates how basic ATM operations can be implemented using C programming. This project helped develop an understanding of loops, conditional statements, arrays and menu-driven programming.