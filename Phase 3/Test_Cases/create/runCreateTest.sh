#!/bin/bash
cd ../../

# building makefile
make
echo ""

# Test case 1
echo "------------------------------------------------------------------------"
echo "Test case: running create1..."
# Passing test inputs
./output current_User_Accounts_File.uaf available_Items_File.ai daily_Transaction_file.tra < "Test_Cases/create/create1.in" > "Test_Cases/create/results/create1.txt"
# validation of expectedOutputs
if diff -w -B "Test_Cases/create/results/create1.txt" "Test_Cases/create/expectedOutputs/create1.tra";
then
  echo "100% : PASSED"
else
  echo "TEST_FAILED"
fi
echo "DONE"
echo ""

# Test case 2
echo "------------------------------------------------------------------------"
echo "Test case: running create2..."
# Passing test inputs
./output current_User_Accounts_File.uaf available_Items_File.ai daily_Transaction_file.tra < "Test_Cases/create/create2.in" > "Test_Cases/create/results/create2.txt"
# validation of expectedOutputs
if diff -w -B "Test_Cases/create/results/create2.txt" "Test_Cases/create/expectedOutputs/create2.tra";
then
  echo "100% : PASSED"
else
  echo "TEST_FAILED"
fi
echo "DONE"
echo ""

# Test case 3
echo "------------------------------------------------------------------------"
echo "Test case: running create3..."
# Passing test inputs
./output current_User_Accounts_File.uaf available_Items_File.ai daily_Transaction_file.tra < "Test_Cases/create/create3.in" > "Test_Cases/create/results/create3.txt"
# validation of expectedOutputs
if diff -w -B "Test_Cases/create/results/create3.txt" "Test_Cases/create/expectedOutputs/create3.tra";
then
  echo "100% : PASSED"
else
  echo "TEST_FAILED"
fi
echo "DONE"
echo ""

# Test case 4
echo "------------------------------------------------------------------------"
echo "Test case: running create4..."
# Passing test inputs
./output current_User_Accounts_File.uaf available_Items_File.ai daily_Transaction_file.tra < "Test_Cases/create/create4.in" > "Test_Cases/create/results/create4.txt"
# validation of expectedOutputs
if diff -w -B "Test_Cases/create/results/create4.txt" "Test_Cases/create/expectedOutputs/create4.tra";
then
  echo "100% : PASSED"
else
  echo "TEST_FAILED"
fi
echo "DONE"
echo ""

# Test case 5
echo "------------------------------------------------------------------------"
echo "Test case: running create5..."
# Passing test inputs
./output current_User_Accounts_File.uaf available_Items_File.ai daily_Transaction_file.tra < "Test_Cases/create/create4.in" > "Test_Cases/create/results/create4.txt"
# validation of expectedOutputs
if diff -w -B "Test_Cases/create/results/create4.txt" "Test_Cases/create/expectedOutputs/create4.tra";
then
  echo "100% : PASSED"
else
  echo "TEST_FAILED"
fi
echo "DONE"
echo ""

# Test case 6
echo "------------------------------------------------------------------------"
echo "Test case: running create6..."
# Passing test inputs
./output current_User_Accounts_File.uaf available_Items_File.ai daily_Transaction_file.tra < "Test_Cases/create/create4.in" > "Test_Cases/create/results/create4.txt"
# validation of expectedOutputs
if diff -w -B "Test_Cases/create/results/create4.txt" "Test_Cases/create/expectedOutputs/create4.tra";
then
  echo "100% : PASSED"
else
  echo "TEST_FAILED"
fi
echo "DONE"
echo ""

# Test case 7
echo "------------------------------------------------------------------------"
echo "Test case: running create7..."
# Passing test inputs
./output current_User_Accounts_File.uaf available_Items_File.ai daily_Transaction_file.tra < "Test_Cases/create/create4.in" > "Test_Cases/create/results/create4.txt"
# validation of expectedOutputs
if diff -w -B "Test_Cases/create/results/create4.txt" "Test_Cases/create/expectedOutputs/create4.tra";
then
  echo "100% : PASSED"
else
  echo "TEST_FAILED"
fi
echo "DONE"
echo ""

# Test case 8
echo "------------------------------------------------------------------------"
echo "Test case: running create8..."
# Passing test inputs
./output current_User_Accounts_File.uaf available_Items_File.ai daily_Transaction_file.tra < "Test_Cases/create/create4.in" > "Test_Cases/create/results/create4.txt"
# validation of expectedOutputs
if diff -w -B "Test_Cases/create/results/create4.txt" "Test_Cases/create/expectedOutputs/create4.tra";
then
  echo "100% : PASSED"
else
  echo "TEST_FAILED"
fi
echo "DONE"
echo ""

# Test case 9
echo "------------------------------------------------------------------------"
echo "Test case: running create9..."
# Passing test inputs
./output current_User_Accounts_File.uaf available_Items_File.ai daily_Transaction_file.tra < "Test_Cases/create/create4.in" > "Test_Cases/create/results/create4.txt"
# validation of expectedOutputs
if diff -w -B "Test_Cases/create/results/create4.txt" "Test_Cases/create/expectedOutputs/create4.tra";
then
  echo "100% : PASSED"
else
  echo "TEST_FAILED"
fi
echo "DONE"
echo ""

# Test case 10
echo "------------------------------------------------------------------------"
echo "Test case: running create10..."
# Passing test inputs
./output current_User_Accounts_File.uaf available_Items_File.ai daily_Transaction_file.tra < "Test_Cases/create/create4.in" > "Test_Cases/create/results/create4.txt"
# validation of expectedOutputs
if diff -w -B "Test_Cases/create/results/create4.txt" "Test_Cases/create/expectedOutputs/create4.tra";
then
  echo "100% : PASSED"
else
  echo "TEST_FAILED"
fi
echo "DONE"
echo ""

# Test case 11
echo "------------------------------------------------------------------------"
echo "Test case: running create11..."
# Passing test inputs
./output current_User_Accounts_File.uaf available_Items_File.ai daily_Transaction_file.tra < "Test_Cases/create/create4.in" > "Test_Cases/create/results/create4.txt"
# validation of expectedOutputs
if diff -w -B "Test_Cases/create/results/create4.txt" "Test_Cases/create/expectedOutputs/create4.tra";
then
  echo "100% : PASSED"
else
  echo "TEST_FAILED"
fi
echo "DONE"
echo ""

# Test case 12
echo "------------------------------------------------------------------------"
echo "Test case: running create12..."
# Passing test inputs
./output current_User_Accounts_File.uaf available_Items_File.ai daily_Transaction_file.tra < "Test_Cases/create/create4.in" > "Test_Cases/create/results/create4.txt"
# validation of expectedOutputs
if diff -w -B "Test_Cases/create/results/create4.txt" "Test_Cases/create/expectedOutputs/create4.tra";
then
  echo "100% : PASSED"
else
  echo "TEST_FAILED"
fi
echo "DONE"
echo ""
