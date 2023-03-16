#
# random-bin.py
# Set a unique firmware name based on current date and time
#
import pioutil
if pioutil.is_pio_build():
    from datetime import datetime
    Import("env")
    env['PROGNAME'] = datetime.now().strftime("UF2-%M%S%H-%Y%m%d")
