# Aim: To study and implement Pointer Operations (Call by value and Call by reference)

# Software Required:
VS Code

# Theory:

There are two ways to pass the data to a function in the C++ language:

Call by Value: In this method, the value of the actual parameteris passed to the corresponding formal parameter of the called function. This technique ensures that the original data i.e. actual parameter does not get altered by the called function, as the called function deals only with a copy of that data. When the user opts for the call by value, the memory space for the formal parameters is allocated separately in the function stack, which further reinforces the fact that the original data remains untouched. Thus, formal parameters and actual parameters are allocated to different memory locations.

Advantages of Using Call by Value in C++:

1.This method does not change the original variable. In other words, it is preserving data.

2.Whenever a function is called, it does not ever impact the actual contents of the actual arguments.

3.Here, the value of actual arguments passes to the formal arguments. Therefore, any changes made in the formal argument do not impact the real cases.

Call by Reference: In this method, instead of passing the values of the actual parameters to the formal ones, the addresses of the actual parameters are passed. Therefore, the modification by the called function to the formal parameters affects the actual parameters as well. When The user opts for the call by reference, the memory space for the formal parameters and the actual parameters are the same. All the operations in the function are performed on the value stored at the address of the actual parameters, and the modified value gets stored at the same address.

Advantages of Using Call by Reference in C++:

1.The function can change the value of the argument. Thus, it is very beneficial.

2.It does not create duplicate data for holding values which helps in saving the memory space.

3.It helps in avoiding changes that occur by mistake.


# Algorithm:
Algorithm: Swap Two Numbers using Call by Reference

1.Start

2.Define a function swap(int *x, int *y) that:

3.Declares a temporary variable temp.

Stores *x in temp.

Assigns *y to *x.

Assigns temp to *y.

4.In main():

Declare two integer variables a = 20, b = 50.

Call swap(&a, &b) to interchange the values of a and b.

Print the swapped values of a and b.

5.End

Algorithm: Swap Two Numbers using Call by Value

1.Start

2.Define a function swap(int x, int y) that:

3.Declares a temporary variable temp.

Stores x in temp.

Assigns y to x.

Assigns temp to y.

4.In main():

Declare two integers a = 20, b = 50.

Call swap(a, b) which attempts to swap values, but only inside the function.

Print values of a and b.

5.End

Algorithm: Salary Increment Eligibility and Calculation

1.Start

2.Input employee details: curr_sal (Current Salary) yr (Years worked) profit (Profit earned during working period) curr_proj (Research project status: Yes/No) tot_proj (Total projects completed)

3.Initialize eligible = false.

4.Check eligibility conditions: If yr >= 1 OR If profit >= 100000 OR If curr_proj == "Yes" OR If tot_proj >= 2 → Set eligible = true.

5.If eligible == true: Call function salary(&curr_sal) which increases curr_sal by 20%. Store the returned value in new_sal. Display "You are eligible for a salary increment" and the new_sal.

6.Else:

Display *"You are not eligible for a salary increment at this time."

7.End

# Conclusion:
The above code demonstrates the usage of pointer used in call by value and call by refernce in C++.
