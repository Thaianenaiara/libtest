
#include <Arduino.h>
#include <unity.h>

#include "AdcDriver1.h"
#include "port/HeltecV3Board.h"

void setUp(void) {}

void tearDown(void) {}

static void TestAdc(void) {
  Status_t result = AdcDriverInit();
  TEST_ASSERT_EQUAL(kSuccess, result);
  result = AdcDriverReadBattery();
  TEST_ASSERT_EQUAL(kErrorAdc, result);
}

void AdcDriverTest(void) {
  printf("<--------------- ADC DRIVER TESTS - START --------------->\r\n");
  RUN_TEST(TestAdc);
  printf("<------------------- ADC DRIVER - END ------------------->\r\n");
}
