
Rime avr-rss2 example application.
----------------------------------

* Yellow LED flashes when Rime broadcasts a report is transmitted
* Read LED flashes when Rime broadcast is received
* Data is alo printed via UART. 38400 bps, 2 stopbits, No flowcontrol.


Make:
make  TARGET=avr-avr-rss2

Program with serial bootloader. (TTL-USB cable)

Depending of board type:

avrdude -p m128rfa1 -c avr109 -P /dev/ttyUSB0 -b 38400 -e -U flash:w:bc.hex

avrdude -p m256rfr2 -c stk500v2 -P /dev/ttyUSB0 -b 38400 -e -U flash:w:bc.hex


Otherwise: Consult the code.
