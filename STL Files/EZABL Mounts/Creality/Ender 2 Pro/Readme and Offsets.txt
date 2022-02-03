General Offset: 40mm to left of nozzle on X, 13mm in front of nozzle on Y.

Marlin: #define NOZZLE_TO_PROBE_OFFSET { -40, -13, 0 }

Other: This will hit the X endstop and trigger it 11mm before not installing the mount. 
In our firmware the stock X homing location is -20mm. When you add this mount the new X homing location is -9mm. This is all automatically accounted for in our Unified 2 Firmware.