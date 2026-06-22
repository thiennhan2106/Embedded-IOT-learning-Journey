# Embedded-IOT-Learning-Journey
This is how I learn IOT and Embedded System from (almost) Zero

## Target
Transition from **Industrial Electrical** to **Embedded System and IOT**, building firmware and connected real-digital world products.

## Roadmap
- [ ] **Phase 1 – Embedded Foundation** *(Summer 2026)*  
  Advanced C, ARM Cortex-M architecture, STM32 bare-metal programming, basic peripherals (GPIO, Timer, UART, I2C).
- [ ] **Phase 2 – RTOS & IoT Connectivity** *(Year 3)*  
  FreeRTOS, TCP/IP, MQTT, ESP32, time-series databases (InfluxDB), dashboards (Grafana, Node-RED).
- [ ] **Phase 3 – Capstone & AI on Edge** *(Year 4)*  
  Full IoT systems, TinyML, secure OTA updates, graduation project.

## Progress *(updated regularly)*

#### Week 1–2: Advanced Embedded C
- [ ] Pointers to functions, `void*`, `volatile`, `static`, `const`
- [ ] Bit manipulation (set, clear, toggle, mask, bit‑field)
- [ ] Circular buffer (static array), state machines (`enum` + `switch`)
- [ ] Code organisation: headers, modules, reusable libraries
#### Week 3: ARM Cortex‑M4 & STM32 Bare‑Metal Basics
- [ ] ARM Cortex‑M4 architecture, memory map, NVIC, vector table
- [ ] GPIO output (LED), input (push‑button), external interrupts (EXTI)
- [ ] SysTick timer – precise non‑blocking delays
- [ ] **Mini task**: push‑button toggles LED via interrupt
#### Week 4: Timer, PWM & UART
- [ ] Timer (TIM2) – PWM for LED brightness control (breathing effect)
- [ ] UART2 – transmit/receive strings, `printf` retargeting
- [ ] Circular buffer for interrupt‑driven UART reception
- [ ] **Mini task**: send `"Hello"` every second, control LED via `ON`/`OFF` commands
#### Week 5: I2C – Sensor & LCD
- [ ] I2C protocol (Start, Stop, ACK, 7‑bit addressing)
- [ ] Read BME280 temperature & humidity via I2C1
- [ ] Drive LCD1602 through PCF8574 I2C backpack
- [ ] **Mini task**: live sensor values on LCD
#### Week 6: Integration Project – Weather Clock
- [ ] On‑chip RTC (or DS3231) keeps real time
- [ ] LCD1602 shows clock + temperature + humidity, refreshed every second
- [ ] UART log every 5 seconds: `"Time: HH:MM:SS | Temp: xx.x C | Hum: xx %"`
- [ ] Fully non‑blocking design using SysTick & timer interrupts
- [ ] Modular firmware structure (`sensor.c`, `lcd.c`, `uart.c`, `rtc.c`)
#### Week 7: Polish & Portfolio
- [ ] Code refactoring, English comments, consistent formatting
- [ ] Wiring diagram & breadboard photo added to `docs/`
- [ ] Short demo video linked in README
- [ ] GitHub repo cleaned, README updated, commit history green

## Featured Projects
| Project | Description | Technologies | Status |
|--------|-------------|--------------|--------|
| **Weather Clock** | RTC + temperature/humidity display on LCD, UART data logging | STM32F411, BME280, I2C, UART | Phase 1 |
| IoT Monitoring System | ESP32 sends sensor data via MQTT → InfluxDB → Grafana dashboard | ESP32, MQTT, InfluxDB, Grafana | Phase 2 |

## Key Resources
- “Embedded C” – Michael Pont
- “Mastering STM32” – Carmine Noviello
- “Mastering the FreeRTOS Real Time Kernel”
- Coursera: *Introduction to Embedded Systems*, *Machine Learning*, *Neural Networks*
- YouTube: Phil’s Lab, Mutex Embedded, ControllersTech, Fastbit Academy

---

*Last updated: June 2026*
