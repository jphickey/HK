###########################################################
#
# HK App platform build setup
#
# This file is evaluated as part of the "prepare" stage
# and can be used to set up prerequisites for the build,
# such as generating header files
#
###########################################################

# The list of header files that control the HK configuration
set(HK_PLATFORM_CONFIG_FILE_LIST
  hk_internal_cfg.h
  hk_msgids.h
  hk_platform_cfg.h
)

# Create wrappers around the all the config header files
# This makes them individually overridable by the missions, without modifying
# the distribution default copies
foreach(HK_CFGFILE ${HK_PLATFORM_CONFIG_FILE_LIST})
  generate_config_includefile(
    FILE_NAME           "${HK_CFGFILE}"
    FALLBACK_FILE       "${CMAKE_CURRENT_LIST_DIR}/config/${HK_CFGFILE}"
  )
endforeach()
