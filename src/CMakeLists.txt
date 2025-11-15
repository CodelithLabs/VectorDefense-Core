# Define the executable target
add_executable(VectorDefense_Core
    main.cpp
)

# Link the SFML libraries to our executable
target_link_libraries(VectorDefense_Core
    PRIVATE
    sfml-graphics
    sfml-window
    sfml-system
)