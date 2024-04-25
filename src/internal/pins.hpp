#ifndef ESP32CAM_PINS_HPP
#define ESP32CAM_PINS_HPP

namespace esp32cam {

/** @brief Camera pins definition. */
struct Pins {
  int D0; //CAMD2
  int D1; //CAMD3
  int D2; //CAMD4
  int D3; //CAMD5
  int D4; //CAMD6
  int D5; //CAMD7
  int D6; //CAMD8
  int D7; //CAMD9
  int XCLK; //CAMXC
  int PCLK; //CAMPC
  int VSYNC; //CAMV
  int HREF; //CAMH
  int SDA; //CAMSD
  int SCL; //CAMSC
  int RESET;
  int PWDN;
};

namespace pins {

constexpr Pins DeneyapKart1Av2{
  D0: 41,
  D1: 2,
  D2: 1,
  D3: 42,
  D4: 40,
  D5: 38,
  D6: 17,
  D7: 15,
  XCLK: 16,
  PCLK: 39,
  VSYNC: 6,
  HREF: 7,
  SDA: 4,
  SCL: 5,
  RESET: -1,
  PWDN: -1,
};

/** @brief Pin definition for Deneyap Camera ESP32-CAM. */
constexpr Pins DeneyapKart1A{
  D0: 19,
  D1: 22,
  D2: 23,
  D3: 21,
  D4: 18,
  D5: 26,
  D6: 35,
  D7: 34,
  XCLK: 32,
  PCLK: 5,
  VSYNC: 36,
  HREF: 39,
  SDA: 33,
  SCL: 25,
  RESET: -1,
  PWDN: -1,
};

/** @brief Pin definition for Deneyap Camera ESP32-CAM. */
constexpr Pins DeneyapKart{
  D0: 19,
  D1: 22,
  D2: 23,
  D3: 21,
  D4: 18,
  D5: 26,
  D6: 35,
  D7: 34,
  XCLK: 32,
  PCLK: 5,
  VSYNC: 36,
  HREF: 39,
  SDA: 33,
  SCL: 25,
  RESET: -1,
  PWDN: -1,
};
/** @brief Pin definition for AI Thinker ESP32-CAM. */
constexpr Pins AiThinker{
  D0: 5,
  D1: 18,
  D2: 19,
  D3: 21,
  D4: 36,
  D5: 39,
  D6: 34,
  D7: 35,
  XCLK: 0,
  PCLK: 22,
  VSYNC: 25,
  HREF: 23,
  SDA: 26,
  SCL: 27,
  RESET: -1,
  PWDN: 32,
};

/** @brief Pin definition for FREENOVE WROVER ESP32-CAM. */
constexpr Pins FreeNove{
  D0: 4,
  D1: 5,
  D2: 18,
  D3: 19,
  D4: 36,
  D5: 39,
  D6: 34,
  D7: 35,
  XCLK: 21,
  PCLK: 22,
  VSYNC: 25,
  HREF: 23,
  SDA: 26,
  SCL: 27,
  RESET: -1,
  PWDN: -1,
};

/** @brief Pin definition for M5Stack M5Camera. */
constexpr Pins M5Camera{
  D0: 32,
  D1: 35,
  D2: 34,
  D3: 5,
  D4: 39,
  D5: 18,
  D6: 36,
  D7: 19,
  XCLK: 27,
  PCLK: 21,
  VSYNC: 25,
  HREF: 26,
  SDA: 22,
  SCL: 23,
  RESET: 15,
  PWDN: -1,
};

/**
 * @brief Pin definition for M5Stack M5Camera with LED.
 *
 * Red LED on GPIO 14, tally light when tied to PWDN
 */
constexpr Pins M5CameraLED{
  D0: 32,
  D1: 35,
  D2: 34,
  D3: 5,
  D4: 39,
  D5: 18,
  D6: 36,
  D7: 19,
  XCLK: 27,
  PCLK: 21,
  VSYNC: 25,
  HREF: 26,
  SDA: 22,
  SCL: 23,
  RESET: 15,
  PWDN: 14,
};

/** @brief Pin definition for TTGO ESP32-CAM. */
constexpr Pins TTGO{
  D0: 5,
  D1: 14,
  D2: 4,
  D3: 15,
  D4: 37,
  D5: 38,
  D6: 36,
  D7: 39,
  XCLK: 32,
  PCLK: 19,
  VSYNC: 27,
  HREF: 25,
  SDA: 13,
  SCL: 12,
  RESET: -1,
  PWDN: -1,
};

} // namespace pins
} // namespace esp32cam

#endif // ESP32CAM_PINS_HPP
