#include <gtest/gtest.h>

TEST(LinkedListTest, MemLeak) {
  // test list to ensure it doesnt leak memory
}

TEST(LinkedListTest, IsEmpty) {
  // test list to ensure function IsEmpty works
}

TEST(LinkedListTest, Insert) {
  // test list to ensure inserting works
}

TEST(LinkedListTest, GetDataHead) {
  // test list to ensure data is valid when at head
}

TEST(LinkedListTest, GetDataBack) {
  // test list to ensure data is valid when at back
}

TEST(LinkedListTest, GetDataFront) {
  // test list to ensure data is valid when at random point not at front/back
}

TEST(LinkedListTest, DeleteItemFront) {
  // test list to ensure it correctly deletes item without memleak at front
}

TEST(LinkedListTest, DeleteItemBack) {
  // test list to ensure it correctly deletes item without memleak at back
}

TEST(LinkedListTest, DelteItemRandom) {
  // test list to ensure it correctly deletes item without memleak at random point not at front/back
}

TEST(LinkedListTest, CopyingFromOperator) {
  // test list operator= to ensure it does a deep copy of list without memleak
}

// TOTAL TESTS: 10