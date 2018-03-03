#!/bin/bash
cd ../../

# building makefile
make
echo ""

# Test case 1
echo "------------------------------------------------------------------------"
echo "Test case: running login1..."
# Passing test inputs
./output current_User_Accounts_File.uaf available_Items_File.ai daily_Transaction_File.tra < "Test_Cases/login/login1.in" > "Test_Cases/login/results/login1.txt"
# validation of expectedOutputs
if diff -w -B "Test_Cases/login/results/login1.txt" "Test_Cases/login/expectedOutputs/login1.tra";
then
  echo "100% : PASSED"
else
  echo "TEST_FAILED"
fi
echo "DONE"
echo ""

# Test case 2
echo "------------------------------------------------------------------------"
echo "Test case: running login2..."
# Passing test inputs
./output current_User_Accounts_File.uaf available_Items_File.ai daily_Transaction_File.tra < "Test_Cases/login/login2.in" > "Test_Cases/login/results/login2.txt"
# validation of expectedOutputs
if diff -w -B "Test_Cases/login/results/login2.txt" "Test_Cases/login/expectedOutputs/login2.tra";
then
  echo "100% : PASSED"
else
  echo "TEST_FAILED"
fi
echo "DONE"
echo ""

# Test case 3
echo "------------------------------------------------------------------------"
echo "Test case: running login3..."
# Passing test inputs
./output current_User_Accounts_File.uaf available_Items_File.ai daily_Transaction_File.tra < "Test_Cases/login/login3.in" > "Test_Cases/login/results/login3.txt"
# validation of expectedOutputs
if diff -w -B "Test_Cases/login/results/login3.txt" "Test_Cases/login/expectedOutputs/login3.tra";
then
  echo "100% : PASSED"
else
  echo "TEST_FAILED"
fi
echo "DONE"
echo ""

# Test case 4
echo "------------------------------------------------------------------------"
echo "Test case: running login4..."
# Passing test inputs
./output current_User_Accounts_File.uaf available_Items_File.ai daily_Transaction_File.tra < "Test_Cases/login/login4.in" > "Test_Cases/login/results/login4.txt"
# validation of expectedOutputs
if diff -w -B "Test_Cases/login/results/login4.txt" "Test_Cases/login/expectedOutputs/login4.tra";
then
  echo "100% : PASSED"
else
  echo "TEST_FAILED"
fi
echo "DONE"
echo ""

# Test case 5
echo "------------------------------------------------------------------------"
echo "Test case: running login5..."
# Passing test inputs
./output current_User_Accounts_File.uaf available_Items_File.ai daily_Transaction_File.tra < "Test_Cases/login/login5.in" > "Test_Cases/login/results/login5.txt"
# validation of expectedOutputs
if diff -w -B "Test_Cases/login/results/login5.txt" "Test_Cases/login/expectedOutputs/login5.tra";
then
  echo "100% : PASSED"
else
  echo "TEST_FAILED"
fi
echo "DONE"
echo ""

# Test case 6
echo "------------------------------------------------------------------------"
echo "Test case: running login6..."
# Passing test inputs
./output current_User_Accounts_File.uaf available_Items_File.ai daily_Transaction_File.tra < "Test_Cases/login/login6.in" > "Test_Cases/login/results/login6.txt"
# validation of expectedOutputs
if diff -w -B "Test_Cases/login/results/login6.txt" "Test_Cases/login/expectedOutputs/login6.tra";
then
  echo "100% : PASSED"
else
  echo "TEST_FAILED"
fi
echo "DONE"
echo ""

# Test case 7
echo "------------------------------------------------------------------------"
echo "Test case: running login7..."
# Passing test inputs
./output current_User_Accounts_File.uaf available_Items_File.ai daily_Transaction_File.tra < "Test_Cases/login/login7.in" > "Test_Cases/login/results/login7.txt"
# Passing test inputs
if diff -w -B "Test_Cases/login/results/login7.txt" "Test_Cases/login/expectedOutputs/login7.tra";
then
  echo "100% : PASSED"
else
  echo "TEST_FAILED"
fi
echo "DONE"
echo ""
