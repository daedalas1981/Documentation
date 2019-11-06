## Graphical diagram

![Link](link)

If you’re looking to build a network-connected device, RobotDyn MEGA 2560 ETH R3 with LAN and additional Wi-Fi connection, is the best solution use Arduino Mega 2560 R3 and Ethernet controller W5500 and with Wi-Fi module ESP-01!

RobotDyn MEGA 2560 ETH R3 is a fully featured Ethernet-connected device via LAN or Wi-Fi. Depending on your use case, it can act as a server or a net member. In a server role, it will receive requests from other devices and services in local network and internet, and respond or react accordingly. In a net member role, the RobotDyn MEGA 2560 ETH R3 can collect data from different devices or industrial equipment and send it through the local network or Internet. It can also receive data from local network and internet, and control connected devices and equipment. The RobotDyn MEGA 2560 ETH R3 can also act as stand-alone unit, providing autonomous reaction based on the defined algorithm in response to network changes or other triggers.

RobotDyn MEGA 2560 ETH R3 features 5 devices on one board:

- Mega 2560 based on an ATmega2560 with 70 I/O.
- Ethernet controller based on WizNet W5500 TCP/IP.
- Optional PoE function (receiving power directly through the Ethernet cable). Can select passive PoE or active (intellect) PoE.
- Micro SD card module.
- Additional Wi-Fi module ESP-01, based on ESP8266 microcontroller.

## Ports and buses

RobotDyn MEGA 2560 ETH R3 has 70 input/output ports, 12 of which can be used for PWM, and 16 analog ports with 10-bits resolution (0 — 1023). The board is equipped with an RJ45, micro USB, DC power jack, and a reset button.

## W5500 Ethernet

WizNet W5500 is a TCP/IP embedded LAN Ethernet controller. It provides TCP/IP Stack, 10BaseT/100BaseTX Ethernet with full or half-duplex, MAC and PHY. W5500 is using a highly efficient SPI protocol, with 80 MHz clocks for high-speed connectivity to Atmega2560. For lower energy consumption, W5500 provides WOL (Wake on LAN) and Power Off modes.

## ESP-01 Wi-Fi

On board have socket for connecting Wi-Fi ESP-01 module. Wi-Fi module connecting to Serial3 interface via RX3(D15)/TX3(D14) I/O.

In Arduino code, for control a Wi-Fi module need to use Serial3 port.

## Micro-SD card reader

The board also features the Micro SD card socket. The micro SD card can be used to save and store the data, which can later be transferred over the network. Digital port D4 (CS-CS2) of the ATmega2560 is dedicated to work with the micro SD. For card detect used D9, but you can cut off soldering pads for disconnect this function.

** Digital port D10 (SS-CS2) is used by WizNet W5500. The Ethernet controller and microSD card are connected through the SPI bus.

## Programming in Arduino IDE

RobotDyn MEGA 2560 ETH R3 can be programmed via an Arduino IDE. Select Arduino Mega 2560 in the «Boards» menu, and use Ethernet3 / Ethernet4 library.

## Power supply

RobotDyn MEGA 2560 ETH R3 can be powered via:

- USB port (5V, 500mA);
- DC-IN jack, PWC 2.1mm, (supporting 7-24V DC input voltage);
- Through an Ethernet cable using PoE (Power over Ethernet) — requires PoE-enabled switch or a PoE injector. Note: PoE module is optional. There are several PoE options available, depending on the PoE equipment you use.

The Active PoE is compliant with 802.3af or 802.3at. It will check the power coming in, and, if it doesn’t meet the device requirements, it just won’t power up.

The Passive PoE is a simplified version that does not perform a handshake, so it is important to know what PoE voltage your device supplies requires before plugging in the Ethernet cable and powering it up. If you connect the wrong voltage you may cause permanent electrical damage to the device.

Make sure to select the correct board option with relevant PoE module.

## Kit Contents

1 x MEGA2560-EthernetW5500 board

## See also
