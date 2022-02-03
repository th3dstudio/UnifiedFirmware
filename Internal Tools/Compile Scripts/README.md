# auto-complie.py

## How this script works

- This script will read <code>auto-compile.json</code> and complie the firmware base on <code>auto-compile.json</code> content.
- Output firmware binary file will be copy to <code>Auto-compile-output/your-machine-name-here/firmware.bin</code>

## Requiment (LINUX)

- platformio core
- Python 3

## Requiment (WINDOWS)

- platformio and python3 (must be executable in cmd)

## Setup the auto-complie profile

- Edit the <code>auto-compile.json</code> file. Add entry for complie profile name (<code>profile-name</code>) and config will be find-and-replace during compilling (<code>find</code> and <code>replace</code>).
- DO NOT put space and special character except "-" and "_" in <code>profile-name</code>


## Run auto-compile script

- Run the <code>auto-compile.py</code> file.
- Output files will be copy to <code>/Auto-compile-output</code> folder
