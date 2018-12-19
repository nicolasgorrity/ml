
file(GLOB headers   knn*.hpp)
file(GLOB lib_files knn*.cpp)

add_library(knn SHARED ${lib_files})

target_include_directories(knn PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
target_compile_options    (knn PUBLIC -std=c++17                 )

install(TARGETS knn        DESTINATION lib                          )
install(FILES   ${headers} DESTINATION include/${CMAKE_PROJECT_NAME})
