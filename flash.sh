sudo dfu-programmer atmega32u4 erase --force
sudo dfu-programmer atmega32u4 flash $1 
sudo dfu-programmer atmega32u4 reset
