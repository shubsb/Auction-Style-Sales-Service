#!/bin/bash
cd ../../

# building makefile
make
echo ""

# Test case 1
echo "------------------------------------------------------------------------"
echo "Test case: running adv1..."
# Passing test inputs
./output current_User_Accounts_File.uaf available_Items_File.ai daily_Transaction_file.tra < "Test_Cases/adv/adv1.in" > "Test_Cases/adv/results/adv1.txt"
# validation of expectedOutputs
if diff -w -B "Test_Cases/adv/results/adv1.txt" "Test_Cases/adv/expectedOutputs/adv1.tra";
then
  echo "100% : PASSED"
else
  echo "TEST_FAILED"
fi
echo "DONE"
echo ""

# Test case 2
echo "------------------------------------------------------------------------"
echo "Test case: running adv2..."
# Passing test inputs
./output current_User_Accounts_File.uaf available_Items_File.ai daily_Transaction_file.tra < "Test_Cases/adv/adv2.in" > "Test_Cases/adv/results/adv2.txt"
# validation of expectedOutputs
if diff -w -B "Test_Cases/adv/results/adv2.txt" "Test_Cases/adv/expectedOutputs/adv2.tra";
then
  echo "100% : PASSED"
else
  echo "TEST_FAILED"
fi
echo "DONE"
echo ""

# Test case 3
echo "------------------------------------------------------------------------"
echo "Test case: running adv3..."
# Passing test inputs
./output current_User_Accounts_File.uaf available_Items_File.ai daily_Transaction_file.tra < "Test_Cases/adv/adv3.in" > "Test_Cases/adv/results/adv3.txt"
# validation of expectedOutputs
if diff -w -B "Test_Cases/adv/results/adv3.txt" "Test_Cases/adv/expectedOutputs/adv3.tra";
then
  echo "100% : PASSED"
else
  echo "TEST_FAILED"
fi
echo "DONE"
echo ""

# Test case 4
echo "------------------------------------------------------------------------"
echo "Test case: running adv4..."
# Passing test inputs
./output current_User_Accounts_File.uaf available_Items_File.ai daily_Transaction_file.tra < "Test_Cases/adv/adv4.in" > "Test_Cases/adv/results/adv4.txt"
# validation of expectedOutputs
if diff -w -B "Test_Cases/adv/results/adv4.txt" "Test_Cases/adv/expectedOutputs/adv4.tra";
then
  echo "100% : PASSED"
else
  echo "TEST_FAILED"
fi
echo "DONE"
echo ""

# Test case 5
echo "------------------------------------------------------------------------"
echo "Test case: running adv4..."
# Passing test inputs
./output current_User_Accounts_File.uaf available_Items_File.ai daily_Transaction_file.tra < "Test_Cases/adv/adv4.in" > "Test_Cases/adv/results/adv4.txt"
# validation of expectedOutputs
if diff -w -B "Test_Cases/adv/results/adv4.txt" "Test_Cases/adv/expectedOutputs/adv4.tra";
then
  echo "100% : PASSED"
else
  echo "TEST_FAILED"
fi
echo "DONE"
echo ""

# Test case 6
echo "------------------------------------------------------------------------"
echo "Test case: running adv4..."
# Passing test inputs
./output current_User_Accounts_File.uaf available_Items_File.ai daily_Transaction_file.tra < "Test_Cases/adv/adv4.in" > "Test_Cases/adv/results/adv4.txt"
# validation of expectedOutputs
if diff -w -B "Test_Cases/adv/results/adv4.txt" "Test_Cases/adv/expectedOutputs/adv4.tra";
then
  echo "100% : PASSED"
else
  echo "TEST_FAILED"
fi
echo "DONE"
echo ""
