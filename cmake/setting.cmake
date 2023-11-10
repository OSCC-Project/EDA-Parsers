#build settings
set(HOME_BUILD ${PROJECT_SOURCE_DIR}/build)

#cmake settings
set(HOME_CMAKE ${PROJECT_SOURCE_DIR}/cmake)

#auxiliary settings
set(HOME_UTILITY ${PROJECT_SOURCE_DIR}/utility)

#third party settings
set(HOME_THIRDPARTY ${PROJECT_SOURCE_DIR}/third_party)

#parser settings
option(USE_PARSER_RUST "whether use parser rust version" OFF)

if (USE_PARSER_RUST)
    set(HOME_PARSER ${PROJECT_SOURCE_DIR}/parser_rust)
else ()
    set(HOME_PARSER ${PROJECT_SOURCE_DIR}/parser)
endif()
