#include <string>
#include "gtest/gtest.h"
#include "Meetserie.h"

TEST(WheelsLooseTests, test_construction_with_count)
{
    
}

class TestWheels : public ::testing::Test
{
    protected:

        TestWheels()
        {
            mExamplePtr = new Wheels("test");
        }

        virtual ~TestWheels()
        {
            delete mExamplePtr;
            mExamplePtr = NULL;
        }

        Wheels* mExamplePtr;
};

TEST_F(TestWheels, NogplaatsInWheelsNaCreatie)
{
    ASSERT_FALSE( mExamplePtr->isVol());
}

