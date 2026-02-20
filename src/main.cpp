#include <Arduino.h>
/**
 * @file main.cpp
 * @brief Embedded RGB LED Control (Digital + PWM)
 * @author Meenakshi
 * @date 2026-02-17
 *
 * @details
 * Controls an RGB LED using digital ON/OFF
 * and analog PWM brightness control.
 * Demonstrates digital blinking and PWM color cycling.
 */

int RED_pin = 9;
int GREEN_pin = 10;
int BLUE_pin = 11;
void setup() {
    Serial.begin(9600);

    pinMode(RED_pin, OUTPUT);
    pinMode(GREEN_pin, OUTPUT);
    pinMode(BLUE_pin, OUTPUT);

    Serial.println("RGB LED Initialized");
}
