#!/bin/bash
cd ../../

# building makefile
make
echo ""

# Test case 1
echo "------------------------------------------------------------------------"
echo "Test case: running refund1..."
# Passing test inputs
./output current_User_Accounts_File.uaf available_Items_File.ai daily_Transaction_file.tra < "Test_Cases/refund/refund1.in" > "Test_Cases/refund/results/refund1.txt"
# validation of expectedOutputs
if diff -w -B "Test_Cases/refund/results/refund1.txt" "Test_Cases/refund/expectedOutputs/refund1.tra";
then
  echo "100% : PASSED"
else
  echo "TEST_FAILED"
fi
echo "DONE"
echo ""

# Test case 2
echo "------------------------------------------------------------------------"
echo "Test case: running refund2..."
# Passing test inputs
./output current_User_Accounts_File.uaf available_Items_File.ai daily_Transaction_file.tra < "Test_Cases/refund/refund2.in" > "Test_Cases/refund/results/refund2.txt"
# validation of expectedOutputs
if diff -w -B "Test_Cases/refund/results/refund2.txt" "Test_Cases/refund/expectedOutputs/refund2.tra";
then
  echo "100% : PASSED"
else
  echo "TEST_FAILED"
fi
echo "DONE"
echo ""

# Test case 3
echo "------------------------------------------------------------------------"
echo "Test case: running refund3..."
# Passing test inputs
./output current_User_Accounts_File.uaf available_Items_File.ai daily_Transaction_file.tra < "Test_Cases/refund/refund3.in" > "Test_Cases/refund/results/refund3.txt"
# validation of expectedOutputs
if diff -w -B "Test_Cases/refund/results/refund3.txt" "Test_Cases/refund/expectedOutputs/refund3.tra";
then
  echo "100% : PASSED"
else
  echo "TEST_FAILED"
fi
echo "DONE"
echo ""

# Test case 4
echo "------------------------------------------------------------------------"
echo "Test case: running refund4..."
# Passing test inputs
./output current_User_Accounts_File.uaf available_Items_File.ai daily_Transaction_file.tra < "Test_Cases/refund/refund4.in" > "Test_Cases/refund/results/refund4.txt"
# validation of expectedOutputs
if diff -w -B "Test_Cases/refund/results/refund4.txt" "Test_Cases/refund/expectedOutputs/refund4.tra";
then
  echo "100% : PASSED"
else
  echo "TEST_FAILED"
fi
echo "DONE"
echo ""

# Test case 5
echo "------------------------------------------------------------------------"
echo "Test case: running refund5..."
# Passing test inputs
./output current_User_Accounts_File.uaf available_Items_File.ai daily_Transaction_file.tra < "Test_Cases/refund/refund5.in" > "Test_Cases/refund/results/refund5.txt"
# validation of expectedOutputs
if diff -w -B "Test_Cases/refund/results/refund5.txt" "Test_Cases/refund/expectedOutputs/refund5.tra";
then
  echo "100% : PASSED"
else
  echo "TEST_FAILED"
fi
echo "DONE"
echo ""
