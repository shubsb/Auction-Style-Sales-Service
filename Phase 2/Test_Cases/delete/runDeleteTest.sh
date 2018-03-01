#!/bin/bash
cd ../../

# building makefile
make
echo ""

# Test case 1
echo "------------------------------------------------------------------------"
echo "Test case: running del1..."
# Passing test inputs
./output current_User_Accounts_File.uaf available_Items_File.ai daily_Transaction_file.tra < "Test_Cases/del/del1.in" > "Test_Cases/del/results/del1.txt"
# validation of expectedOutputs
if diff -w -B "Test_Cases/del/results/del1.txt" "Test_Cases/del/expectedOutputs/del1.tra";
then
  echo "100% : PASSED"
else
  echo "TEST_FAILED"
fi
echo "DONE"
echo ""

# Test case 2
echo "------------------------------------------------------------------------"
echo "Test case: running del2..."
# Passing test inputs
./output current_User_Accounts_File.uaf available_Items_File.ai daily_Transaction_file.tra < "Test_Cases/del/del2.in" > "Test_Cases/del/results/del2.txt"
# validation of expectedOutputs
if diff -w -B "Test_Cases/del/results/del2.txt" "Test_Cases/del/expectedOutputs/del2.tra";
then
  echo "100% : PASSED"
else
  echo "TEST_FAILED"
fi
echo "DONE"
echo ""

# Test case 3
echo "------------------------------------------------------------------------"
echo "Test case: running del3..."
# Passing test inputs
./output current_User_Accounts_File.uaf available_Items_File.ai daily_Transaction_file.tra < "Test_Cases/del/del3.in" > "Test_Cases/del/results/del3.txt"
# validation of expectedOutputs
if diff -w -B "Test_Cases/del/results/del3.txt" "Test_Cases/del/expectedOutputs/del3.tra";
then
  echo "100% : PASSED"
else
  echo "TEST_FAILED"
fi
echo "DONE"
echo ""

# Test case 4
echo "------------------------------------------------------------------------"
echo "Test case: running del4..."
# Passing test inputs
./output current_User_Accounts_File.uaf available_Items_File.ai daily_Transaction_file.tra < "Test_Cases/del/del4.in" > "Test_Cases/del/results/del4.txt"
# validation of expectedOutputs
if diff -w -B "Test_Cases/del/results/del4.txt" "Test_Cases/del/expectedOutputs/del4.tra";
then
  echo "100% : PASSED"
else
  echo "TEST_FAILED"
fi
echo "DONE"
echo ""

# Test case 5
echo "------------------------------------------------------------------------"
echo "Test case: running del5..."
# Passing test inputs
./output current_User_Accounts_File.uaf available_Items_File.ai daily_Transaction_file.tra < "Test_Cases/del/del5.in" > "Test_Cases/del/results/del5.txt"
# validation of expectedOutputs
if diff -w -B "Test_Cases/del/results/del5.txt" "Test_Cases/del/expectedOutputs/del5.tra";
then
  echo "100% : PASSED"
else
  echo "TEST_FAILED"
fi
echo "DONE"
echo ""

# Test case 6
echo "------------------------------------------------------------------------"
echo "Test case: running del6..."
# Passing test inputs
./output current_User_Accounts_File.uaf available_Items_File.ai daily_Transaction_file.tra < "Test_Cases/del/del6.in" > "Test_Cases/del/results/del6.txt"
# validation of expectedOutputs
if diff -w -B "Test_Cases/del/results/del6.txt" "Test_Cases/del/expectedOutputs/del6.tra";
then
  echo "100% : PASSED"
else
  echo "TEST_FAILED"
fi
echo "DONE"
echo ""
