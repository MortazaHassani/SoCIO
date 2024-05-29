# SoC Input/Output Peripherals

## To build and load bitstream and create documentation
python3 digilent_basys3.py --integrated-main-ram-size=0x10000 --build --load --doc

## To load application
litex_term /dev/ttyUSB* --kernel=gpio_soc.bin
