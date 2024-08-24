
add_library(blinker 
    src/blink.cpp
) 

target_include_directories(blinker PUBLIC 
    src
)

target_link_libraries(blinker
    stm32cubemx
    # Add user defined libraries
)

