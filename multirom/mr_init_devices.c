#include <stdlib.h>

// These are paths to folders in /sys which contain "uevent" file
// need to init this device.
// MultiROM needs to init framebuffer, mmc blocks, input devices,
// some ADB-related stuff and USB drives, if OTG is supported
// You can use * at the end to init this folder and all its subfolders
const char *mr_init_devices[] =
{
    "/sys/class/graphics/fb0",

    "/sys/block/mmcblk0",
    "/sys/devices/platform/sdhci-tegra.3",
    "/sys/devices/platform/sdhci-tegra.3/mmc_host/mmc0",
    "/sys/devices/platform/sdhci-tegra.3/mmc_host/mmc0/mmc0:0001",
    "/sys/devices/platform/sdhci-tegra.3/mmc_host/mmc0/mmc0:0001/block/mmcblk0",
    "/sys/devices/platform/sdhci-tegra.3/mmc_host/mmc0/mmc0:0001/block/mmcblk0*",

    "/sys/bus/mmc",
    "/sys/bus/mmc/drivers/mmcblk",
    "/sys/bus/sdio/drivers/bcmsdh_sdmmc",
    "/sys/module/mmc_core",
    "/sys/module/mmcblk",

    // for input
    "/sys/devices/virtual/input*",
    "/sys/devices/virtual/misc/uinput",

    // for adb
    "/sys/class/tty/ptmx",
    "/sys/class/misc/android_adb",
    "/sys/class/android_usb/android0/f_ffs",
    "/sys/bus/usb",

    // USB drive is in here
    "/sys/devices/platform/tegra-ehci.0*",

    NULL
};
