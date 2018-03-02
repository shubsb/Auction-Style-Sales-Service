#!/bin/bash
cd ../../

# building makefile
make
echo ""

# Test case 1
echo "------------------------------------------------------------------------"
echo "Test case: running logout1..."
# Passing test inputs
./output current_User_Accounts_File.uaf available_Items_File.ai daily_Transaction_file.tra < "Test_Cases/logout/logout1.in" > "Test_Cases/logout/results/logout1.txt"
# validation of expectedOutputs
if diff -w -B "Test_Cases/logout/results/logout1.txt" "Test_Cases/logout/expectedOutputs/logout1.tra";
then
  echo "100% : PASSED"
else
  echo "TEST_FAILED"
fi
echo "DONE"
echo ""

# Test case 2
echo "------------------------------------------------------------------------"
echo "Test case: running logout2..."
# Passing test inputs
./output current_User_Accounts_File.uaf available_Items_File.ai daily_Transaction_file.tra < "Test_Cases/logout/logout2.in" > "Test_Cases/logout/results/logout2.txt"
# validation of expectedOutputs
if diff -w -B "Test_Cases/logout/results/logout2.txt" "Test_Cases/logout/expectedOutputs/logout2.tra";
then
  echo "100% : PASSED"
else
  echo "TEST_FAILED"
fi
echo "DONE"
echo ""

# Test case 3
echo "------------------------------------------------------------------------"
echo "Test case: running logout3..."
# Passing test inputs
./output current_User_Accounts_File.uaf available_Items_File.ai daily_Transaction_file.tra < "Test_Cases/logout/logout3.in" > "Test_Cases/logout/results/logout3.txt"
# validation of expectedOutputs
if diff -w -B "Test_Cases/logout/results/logout3.txt" "Test_Cases/logout/expectedOutputs/logout3.tra";
then
  echo "100% : PASSED"
else
  echo "TEST_FAILED"
fi
echo "DONE"
echo ""

# Test case 4
echo "------------------------------------------------------------------------"
echo "Test case: running logout4..."
# Passing test inputs
./output current_User_Accounts_File.uaf available_Items_File.ai daily_Transaction_file.tra < "Test_Cases/logout/logout4.in" > "Test_Cases/logout/results/logout4.txt"
# validation of expectedOutputs
if diff -w -B "Test_Cases/logout/results/logout4.txt" "Test_Cases/logout/expectedOutputs/logout4.tra";
then
  echo "100% : PASSED"
else
  echo "TEST_FAILED"
fi
echo "DONE"
echo ""
