#include <gtest/gtest.h>
#include "Arduino.h"

#include "Mock_Bar.h"

using ::testing::Eq;
using ::testing::Matcher;
using ::testing::InitGoogleTest;

Mock_Bar mb;

TEST(test_atomic, test_setRotation) {
    EXPECT_CALL(mb, setRotation(Matcher<int>(Eq(2)))).Times(1);

}



#if defined(ESP32) || defined(ESP8266)
#ifdef ESP32
#define SPEED 921600
#else
#define SPEED 460800
#endif
#endif

void setup() {
    Serial.begin(SPEED);
    delay(1000);
    InitGoogleTest();
    if (RUN_ALL_TESTS()) delay(50);

}

void loop() {
    // nothing to be done here.
    delay(100);
}
