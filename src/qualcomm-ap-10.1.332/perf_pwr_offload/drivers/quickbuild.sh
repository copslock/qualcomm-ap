TARGET=AR9888
TARGET_VER=1
export TARGET TARGET_VER
export FPGA_FLAG=1
export WORKAREA=`pwd`
export ATH_BUILD_SYSTEM_TOOLS='no'
export ATH_BUILD_3RDPARTY='no'
export ATH_DEBUG_DRIVER=yes
export ATH_BUILD_TYPE='LOCAL_i686'
export ATH_BUS_TYPE='SIM'
export ATH_TGT_TYPE='AR9888'
export ATH_LINUXPATH=/usr/src/linux-headers-`uname -r`
export ATH_PLATFORM=$ATH_BUILD_TYPE-$ATH_BUS_TYPE-$ATH_TGT_TYPE
export A_SIMOS_DEVHOST='y'
export UMAC_UNIFIED=y

