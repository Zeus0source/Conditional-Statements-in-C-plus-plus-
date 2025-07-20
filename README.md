# Aim: To study and implement C++ decision making statements
# Software Required:
Visual Studio
# Theory:
Decision-making is the process to make a decision about which part of the code should be executed or not based on some condition. Decision-making in C++ involves the usage of conditional statements (also called decision control statements) to execute specific blocks of code primarily based on given situations and their results.

<img width="500" height="500" alt="Screenshot 2025-07-20 095740" src="https://github.com/user-attachments/assets/f59a21f2-2f8e-44e5-9de9-835abafe3e9e" />

1. <ins>if Statement:</ins>
In C++, the if statement is the simplest decision-making statement. It allows the execution of a block of code if the given condition is true. The body of the if statement is executed only if the given condition is true.

2. </ins>if-else Statement</ins>
The if else is a decision-making statement allows us to make a decision based on the evaluation of a given condition. If the given condition evaluates to true then the code inside the 'if' block is executed and in case the condition is false, the code inside the 'else' block is executed.

3. </ins>if else if Ladder</ins>
The if else if Ladder statements allow us to include additional situations after the preliminary if condition. The 'else if' condition is checked only if the above condition is not true, and the `else` is the statement that will be executed if none of the above conditions is true. If some condition is true, then not only the associated block is executed.

4. </ins>Nested if else</ins>
The nested if else statement contains an 'if' statement inside another 'if' statement. This structure lets in more complex selection-making by way of comparing multiple conditions. In this type of statement, multiple conditions are checked, and then the body of the last if statement is executed.

5. </ins>Switch Statement</ins>
In C++, the switch statement is used when multiple situations need to be evaluated primarily based on the value of a variable or an expression. switch statement acts as an alternative to multiple if statements or if-else ladder and has a cleaner structure and it is easy for handling multiple conditions.

 # Implementation:
 Based on the above decision making statements in C++ , Simple programs have been used to help understand how decision making statements work in c++.
 The programs are:
 + Odd-Even check
 + Vowel Check
 + Finding the largest number from three given numbers by the user
 + Making a Calculator using Switch Case
 + Made a basic banking system using Switch Case

# Algorihtms:
Program 1:

Objective:
To determine whether a user-entered number is even or odd.

Steps:

1. Start

2.  Ask the user to enter an integer (n)

3. Read input into variable n

4. Check divisibility of n by 2:

If n % 2 == 0, then:

Display "This is an even number"

Else:

Display "This is an Odd number"

5. End

Program 2:

Objective:
To determine whether the character entered by the user is a vowel or a consonant.

Steps:

1. Start

2. Declare a character variable str

3. Ask the user to enter a character

4. Read the input into str

   Check if the character is a vowel:

If str is equal to 'a', 'e', 'i', 'o', 'u' (or their uppercase forms), then:

Display "The Character entered is a Vowel"

Else:

Display "The Character entered is a Consonant"

5. End

Program 3

Objective:

To determine and display the largest number among three user-entered integers.

Steps:

1. Start

2. Declare three integer variables: a, b, c

3. Ask user to enter three numbers

4. Read input values into a, b, and c

5. Initialize num ← a

6. Compare b and c with num:

If b > num, set num ← b

If c > num, set num ← c

7. Display the largest number (num)

8. End

Program 4:

Objective:
To perform one of four basic arithmetic operations—Addition, Subtraction, Multiplication, or Division—based on user input.

Steps:

1. Start

2. Declare float variables a, b, sum, sub, mul, Div and integer num

3. Ask user to enter two numbers

4. Read inputs into a and b

5. Ask user to select an operation:

1 → Addition

2 → Subtraction

3 → Multiplication

4 → Division

6. Read input into num

7. Use a switch-case statement to perform the selected operation:

Case 1: sum ← a + b

Case 2: sub ← a - b

Case 3: mul ← a * b

Case 4: Div ← a / b

Default: Display invalid input message

8. Display the result of the selected operation

9. End

Program 5:

Objective:

To simulate basic banking operations like withdraw, deposit, and taking a loan based on user input.

Steps:

1.Start

2.Declare variables:

amount (float) → user’s bank balance

num (int) → operation choice

withdraw, deposit, loan (float) → amounts for different operations

remain1, remain2, remain3 (float) → updated balances

3. Ask user to enter current bank statement (amount)

4. Ask user to choose an operation:

1 → Withdraw

2 → Deposit

3 → Take Loan

5.Read user's choice into num

6.Use switch-case to handle operations:

Case 1 (Withdraw):

Ask for withdraw amount

If withdraw > amount: display "Insufficient Balance"

Else calculate remain1 = amount - withdraw

Display remaining amount

Case 2 (Deposit):

Ask for deposit amount

Calculate remain2 = amount + deposit

Display remaining amount

Case 3 (Take Loan):

Ask for loan amount

Add loan to current balance: remain3 = amount + loan

Display updated balance and mention 12% interest (if applicable)

Default: display "Invalid input!!"

7.End


# Conclusion:
The Programs helps to understand the logic and flow of the decision making statements available in C++
