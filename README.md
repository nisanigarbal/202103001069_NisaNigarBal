# `wcat` UNIX Utility

This code is a simple implementation of a UNIX `cat`-like command called `wcat`. It reads the contents of one or more files provided as command line arguments and prints them to the standard output.

If a file cannot be opened, it prints an error message.

# Step-by-Step Process

1. Navigating to the Project Directory:

First, navigate to the project directory where the wcat source file is located: 
cd ~/Downloads/ostep-projects/initial-utilities/wcat
This command changes the working directory to the folder containing the wcat.c file.

2. Compiling the wcat Program

To compile the wcat.c program, use the following command:
gcc -o wcat wcat.c -Wall -Werror

-o wcat specifies that the output file should be named wcat.

-Wall enables all warning messages, which is helpful for catching potential issues in the code.

-Werror treats all warnings as errors, ensuring that you address them before the code compiles successfully.

3. Running the Program

After successfully compiling the program, you can run it by specifying a file as an argument:
./wcat filename.txt
Replace filename.txt with the name of the file you want to display.


4. Running the Test Script

To verify that your program is functioning correctly, you can run the provided test script:
./test-wcat.sh
This script will test the wcat program with various test cases to ensure everything works as expected.

5. Test Results

After running the test script, you should see output similar to the following:
test 1: passed
test 2: passed
test 3: passed
test 4: passed
test 5: passed
test 6: passed
test 7: passed
If all tests pass, it means that your wcat program is working correctly.




