
add_library(blinker 
    src/blink.cpp
    src/serial.cpp
) 


target_include_directories(blinker PUBLIC include)


target_link_libraries(blinker
    stm32cubemx
    # Add user defined libraries
)

