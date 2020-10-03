Import("env")

from datetime import datetime

env['PROGNAME'] = datetime.now().strftime("firmware")
