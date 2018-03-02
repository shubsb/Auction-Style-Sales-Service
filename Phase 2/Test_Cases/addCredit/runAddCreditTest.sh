#!/bin/bash
cd ../../

# building makefile
make
echo ""

# Test case 1
echo "------------------------------------------------------------------------"
echo "Test case: running addCredit1..."
# Passing test inputs
./output current_User_Accounts_File.uaf available_Items_File.ai daily_Transaction_file.tra < "Test_Cases/addCredit/addCredit1.in" > "Test_Cases/addCredit/results/addCredit1.txt"
# validation of expectedOutputs
if diff -w -B "Test_Cases/addCredit/results/addCredit1.txt" "Test_Cases/addCredit/expectedOutputs/addCredit1.tra";
then
  echo "100% : PASSED"
else
  echo "TEST_FAILED"
fi
echo "DONE"
echo ""

# Test case 2
echo "------------------------------------------------------------------------"
echo "Test case: running addCredit2..."
# Passing test inputs
./output current_User_Accounts_File.uaf available_Items_File.ai daily_Transaction_file.tra < "Test_Cases/addCredit/addCredit2.in" > "Test_Cases/addCredit/results/addCredit2.txt"
# validation of expectedOutputs
if diff -w -B "Test_Cases/addCredit/results/addCredit2.txt" "Test_Cases/addCredit/expectedOutputs/addCredit2.tra";
then
  echo "100% : PASSED"
else
  echo "TEST_FAILED"
fi
echo "DONE"
echo ""

# Test case 3
echo "------------------------------------------------------------------------"
echo "Test case: running addCredit3..."
# Passing test inputs
./output current_User_Accounts_File.uaf available_Items_File.ai daily_Transaction_file.tra < "Test_Cases/addCredit/addCredit3.in" > "Test_Cases/addCredit/results/addCredit3.txt"
# validation of expectedOutputs
if diff -w -B "Test_Cases/addCredit/results/addCredit3.txt" "Test_Cases/addCredit/expectedOutputs/addCredit3.tra";
then
  echo "100% : PASSED"
else
  echo "TEST_FAILED"
fi
echo "DONE"
echo ""

# Test case 4
echo "------------------------------------------------------------------------"
echo "Test case: running addCredit4..."
# Passing test inputs
./output current_User_Accounts_File.uaf available_Items_File.ai daily_Transaction_file.tra < "Test_Cases/addCredit/addCredit4.in" > "Test_Cases/addCredit/results/addCredit4.txt"
# validation of expectedOutputs
if diff -w -B "Test_Cases/addCredit/results/addCredit4.txt" "Test_Cases/addCredit/expectedOutputs/addCredit4.tra";
then
  echo "100% : PASSED"
else
  echo "TEST_FAILED"
fi
echo "DONE"
echo ""

# Test case 5
echo "------------------------------------------------------------------------"
echo "Test case: running addCredit5..."
# Passing test inputs
./output current_User_Accounts_File.uaf available_Items_File.ai daily_Transaction_file.tra < "Test_Cases/addCredit/addCredit5.in" > "Test_Cases/addCredit/results/addCredit5.txt"
# validation of expectedOutputs
if diff -w -B "Test_Cases/addCredit/results/addCredit5.txt" "Test_Cases/addCredit/expectedOutputs/addCredit5.tra";
then
  echo "100% : PASSED"
else
  echo "TEST_FAILED"
fi
echo "DONE"
echo ""

# Test case 6
echo "------------------------------------------------------------------------"
echo "Test case: running addCredit6..."
# Passing test inputs
./output current_User_Accounts_File.uaf available_Items_File.ai daily_Transaction_file.tra < "Test_Cases/addCredit/addCredit6.in" > "Test_Cases/addCredit/results/addCredit6.txt"
# validation of expectedOutputs
if diff -w -B "Test_Cases/addCredit/results/addCredit6.txt" "Test_Cases/addCredit/expectedOutputs/addCredit6.tra";
then
  echo "100% : PASSED"
else
  echo "TEST_FAILED"
fi
echo "DONE"
echo ""
