#
# mks_robin_nano35_kp3s.py
# KP3S board needs file name as Robin_nano.bin
#
import robin
robin.prepare("0x08007000", "mks_robin_nano.ld", "Robin_nano.bin")
