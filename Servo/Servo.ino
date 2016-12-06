#include <usbhid.h>
#include <hiduniversal.h>
#include <usbhub.h>

// Satisfy IDE, which only needs to see the include statment in the ino.
#ifdef dobogusinclude
#include <spi4teensy3.h>
#include <SPI.h>
#endif



#include "hidjoystickrptparser.h"

USB Usb;
USBHub Hub(&Usb);
HIDUniversal Hid(&Usb);
JoystickEvents JoyEvents;
chutya chutya1;
JoystickReportParser Joy(&JoyEvents);

void setup() {
  pinMode(chutya1.in1Pin, OUTPUT);
  pinMode(chutya1.in2Pin, OUTPUT);
  pinMode(chutya1.enablePin1, OUTPUT);
  pinMode(chutya1.in3Pin, OUTPUT);
  pinMode(chutya1.in4Pin, OUTPUT);
  pinMode(chutya1.enablePin2, OUTPUT);
   JoyEvents.chutya2.myservo.attach(chutya1.servoPin);
        Serial.begin(115200);
#if !defined(__MIPSEL__)
        while (!Serial); // Wait for serial port to connect - used on Leonardo, Teensy and other boards with built-in USB CDC serial connection
#endif
        Serial.println("Start");

        if (Usb.Init() == -1)
                Serial.println("OSC did not start.");

        delay(200);

        if (!Hid.SetReportParser(0, &Joy))
                ErrorMessage<uint8_t > (PSTR("SetReportParser"), 1);
}

void loop() {
        Usb.Task();
}

