#!/bin/bash
make TARGET=avr-rss2

#S_PROG=avr109
S_PROG=stk500v2


PGM=sensd_rime.avr-rss2

stty sane
tty_talk -38400 /dev/ttyUSB0 "upgr
"
#avrdude -p m128rfa1 -c $S_PROG -P /dev/ttyUSB0 -b 38400 -e -U flash:w:$PGM
avrdude -p m256rfr2 -c $S_PROG -P /dev/ttyUSB0 -b 38400 -e -U flash:w:$PGM
