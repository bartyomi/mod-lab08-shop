// Copyright 2021 GHA Test Team
#include "../include/task.h"
#include <gtest/gtest.h>

TEST(TestCaseName, Test1) {
    Store store = Store(5, 50, 0.1, 10, 10);
    store.Run();
    EXPECT_EQ(store.serviced + store.notServiced, 50);
}

TEST(TestCaseName, Test2) {
    Store store1 = Store(5, 50, 0.1, 10, 10);
    Store store2 = Store(5, 50, 0.1, 10, 10);
    store1.Run();
    store2.Run();
    bool equaled = true;
    if (store1.serviced != store2.serviced) 
        equaled = false;
    EXPECT_EQ(equaled,true);
}

TEST(TestCaseName, Test3) {
    Store store1 = Store(5, 50, 0.1, 10, 10);
    store1.Run();
    EXPECT_EQ(store.notServiced, 30);
}

TEST(TestCaseName, Test4) {
    Store store1 = Store(5, 10, 0.1, 10, 10);
    store1.Run();
    EXPECT_EQ(store.notServiced, 0);
}

TEST(TestCaseName, Test5) {
    Store store1 = Store(5, 10, 0.1, 10, 10);
    store1.Run();
    EXPECT_EQ(store.queue.size(), 0);
}
