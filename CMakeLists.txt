add_library(MyQmlLib SHARED
    myqmlcomponent.cpp
)

target_link_libraries(MyQmlLib PRIVATE
    libmscore
)

target_link_libraries(MyQmlLib PRIVATE
    Qt5::Core
    Qt5::Quick
    Qt5::Qml
)

# Register the QML component
set_target_properties(MyQmlLib PROPERTIES
    LIBRARY_OUTPUT_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}"
)
