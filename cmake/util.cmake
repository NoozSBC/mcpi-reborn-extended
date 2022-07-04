# Symlink Function
function(install_symlink target link)
    get_filename_component(parent "${link}" DIRECTORY)
    if(parent STREQUAL "")
        set(parent ".")
    endif()
    file(MAKE_DIRECTORY "${CMAKE_BINARY_DIR}/symlink/${parent}")
    file(CREATE_LINK "${target}" "${CMAKE_BINARY_DIR}/symlink/${link}" SYMBOLIC)
    install(FILES "${CMAKE_BINARY_DIR}/symlink/${link}" DESTINATION "${parent}")
endfunction()
