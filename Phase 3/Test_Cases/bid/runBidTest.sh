#!/bin/bash
cd ../../

# building makefile
make
echo ""

# Test case 1
echo "------------------------------------------------------------------------"
echo "Test case: running bid1..."
# Passing test inputs
./output current_User_Accounts_File.uaf available_Items_File.ai daily_Transaction_file.tra < "Test_Cases/bid/bid1.in" > "Test_Cases/bid/results/bid1.txt"
# validation of expectedOutputs
if diff -w -B "Test_Cases/bid/results/bid1.txt" "Test_Cases/bid/expectedOutputs/bid1.tra";
then
  echo "100% : PASSED"
else
  echo "TEST_FAILED"
fi
echo "DONE"
echo ""

# Test case 2
echo "------------------------------------------------------------------------"
echo "Test case: running bid2..."
# Passing test inputs
./output current_User_Accounts_File.uaf available_Items_File.ai daily_Transaction_file.tra < "Test_Cases/bid/bid2.in" > "Test_Cases/bid/results/bid2.txt"
# validation of expectedOutputs
if diff -w -B "Test_Cases/bid/results/bid2.txt" "Test_Cases/bid/expectedOutputs/bid2.tra";
then
  echo "100% : PASSED"
else
  echo "TEST_FAILED"
fi
echo "DONE"
echo ""

# Test case 3
echo "------------------------------------------------------------------------"
echo "Test case: running bid3..."
# Passing test inputs
./output current_User_Accounts_File.uaf available_Items_File.ai daily_Transaction_file.tra < "Test_Cases/bid/bid3.in" > "Test_Cases/bid/results/bid3.txt"
# validation of expectedOutputs
if diff -w -B "Test_Cases/bid/results/bid3.txt" "Test_Cases/bid/expectedOutputs/bid3.tra";
then
  echo "100% : PASSED"
else
  echo "TEST_FAILED"
fi
echo "DONE"
echo ""

# Test case 4
echo "------------------------------------------------------------------------"
echo "Test case: running bid4..."
# Passing test inputs
./output current_User_Accounts_File.uaf available_Items_File.ai daily_Transaction_file.tra < "Test_Cases/bid/bid4.in" > "Test_Cases/bid/results/bid4.txt"
# validation of expectedOutputs
if diff -w -B "Test_Cases/bid/results/bid4.txt" "Test_Cases/bid/expectedOutputs/bid4.tra";
then
  echo "100% : PASSED"
else
  echo "TEST_FAILED"
fi
echo "DONE"
echo ""

# Test case 5
echo "------------------------------------------------------------------------"
echo "Test case: running bid4..."
# Passing test inputs
./output current_User_Accounts_File.uaf available_Items_File.ai daily_Transaction_file.tra < "Test_Cases/bid/bid4.in" > "Test_Cases/bid/results/bid4.txt"
# validation of expectedOutputs
if diff -w -B "Test_Cases/bid/results/bid4.txt" "Test_Cases/bid/expectedOutputs/bid4.tra";
then
  echo "100% : PASSED"
else
  echo "TEST_FAILED"
fi
echo "DONE"
echo ""

# Test case 6
echo "------------------------------------------------------------------------"
echo "Test case: running bid4..."
# Passing test inputs
./output current_User_Accounts_File.uaf available_Items_File.ai daily_Transaction_file.tra < "Test_Cases/bid/bid4.in" > "Test_Cases/bid/results/bid4.txt"
# validation of expectedOutputs
if diff -w -B "Test_Cases/bid/results/bid4.txt" "Test_Cases/bid/expectedOutputs/bid4.tra";
then
  echo "100% : PASSED"
else
  echo "TEST_FAILED"
fi
echo "DONE"
echo ""

# Test case 7
echo "------------------------------------------------------------------------"
echo "Test case: running bid4..."
# Passing test inputs
./output current_User_Accounts_File.uaf available_Items_File.ai daily_Transaction_file.tra < "Test_Cases/bid/bid4.in" > "Test_Cases/bid/results/bid4.txt"
# validation of expectedOutputs
if diff -w -B "Test_Cases/bid/results/bid4.txt" "Test_Cases/bid/expectedOutputs/bid4.tra";
then
  echo "100% : PASSED"
else
  echo "TEST_FAILED"
fi
echo "DONE"
echo ""

# Test case 8
echo "------------------------------------------------------------------------"
echo "Test case: running bid4..."
# Passing test inputs
./output current_User_Accounts_File.uaf available_Items_File.ai daily_Transaction_file.tra < "Test_Cases/bid/bid4.in" > "Test_Cases/bid/results/bid4.txt"
# validation of expectedOutputs
if diff -w -B "Test_Cases/bid/results/bid4.txt" "Test_Cases/bid/expectedOutputs/bid4.tra";
then
  echo "100% : PASSED"
else
  echo "TEST_FAILED"
fi
echo "DONE"
echo ""

# Test case 9
echo "------------------------------------------------------------------------"
echo "Test case: running bid4..."
# Passing test inputs
./output current_User_Accounts_File.uaf available_Items_File.ai daily_Transaction_file.tra < "Test_Cases/bid/bid4.in" > "Test_Cases/bid/results/bid4.txt"
# validation of expectedOutputs
if diff -w -B "Test_Cases/bid/results/bid4.txt" "Test_Cases/bid/expectedOutputs/bid4.tra";
then
  echo "100% : PASSED"
else
  echo "TEST_FAILED"
fi
echo "DONE"
echo ""
