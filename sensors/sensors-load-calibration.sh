#!/system/bin/sh

# AL3010 Ambient Light Sensor calibration data
if [ -f /per/lightsensor/AL3010_Config.ini ]; then
    cat /per/lightsensor/AL3010_Config.ini > /sys/devices/platform/tegra-i2c.2/i2c-2/2-001c/calibration
fi

# AMI306 Compass calibration data
if [ -f /per/sensors/AMI306_Config.ini ]; then
    cat /per/sensors/AMI306_Config.ini > /sys/devices/platform/tegra-i2c.2/i2c-2/2-000e/compass_cali_data
fi
