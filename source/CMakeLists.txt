# Build example
add_executable(example
  vec2.cpp
  mat2.cpp
  rectangle.cpp
  circle.cpp
  window.cpp
  glew.c
  example.cpp)

target_link_libraries(example
  glfw
  ${GLFW_LIBRARIES}
  nanovg
  ${OPENGL_LIBRARIES}
  )

add_dependencies(example glfw nanovg ${COPY_BINARY})

# Build tests
add_executable(tests
  glew.c
  tests.cpp
  vec2.cpp
  mat2.cpp
  rectangle.cpp
  circle.cpp
  window.cpp)

target_link_libraries(tests
  glfw
  ${GLFW_LIBRARIES}
  nanovg
  ${OPENGL_LIBRARIES}
  )

  # Build clock
add_executable(clock
  glew.c
  vec2.cpp
  mat2.cpp
  rectangle.cpp
  circle.cpp
  window.cpp
  clock.cpp
)

add_dependencies(clock glfw nanovg ${COPY_BINARY})

target_link_libraries(clock
  glfw
  ${GLFW_LIBRARIES}
  nanovg
  ${OPENGL_LIBRARIES}
  )

# Build Aufgabe 2 und 3
 add_executable(
  	  aufgabe_2_und_3 aufgabe_2_und_3.cpp
  )

 #Build Aufgabe 5
 add_executable(aufgabe_5
     glew.c
     aufgabe_5.cpp   
     circle.cpp   
     mat2.cpp  
     window.cpp   
     vec2.cpp
  )

target_link_libraries(aufgabe_5
  glfw
  ${GLFW_LIBRARIES}
  nanovg
  ${OPENGL_LIBRARIES}
  )

add_dependencies(aufgabe_5 glfw nanovg ${COPY_BINARY})

#Build aufgabe_6
add_executable(aufgabe_6
     glew.c
     aufgabe_6.cpp   
     circle.cpp   
     mat2.cpp  
     window.cpp   
     vec2.cpp
  )

target_link_libraries(aufgabe_6
  glfw
  ${GLFW_LIBRARIES}
  nanovg
  ${OPENGL_LIBRARIES}
  )

add_dependencies(aufgabe_6 glfw nanovg ${COPY_BINARY})

#Build aufgabe_8
add_executable(aufgabe_8
     glew.c
     aufgabe_8.cpp   
     circle.cpp   
     mat2.cpp  
     window.cpp   
     vec2.cpp
  )

target_link_libraries(aufgabe_8
  glfw
  ${GLFW_LIBRARIES}
  nanovg
  ${OPENGL_LIBRARIES}
  )

add_dependencies(aufgabe_8 glfw nanovg ${COPY_BINARY})

#Build aufgabe_9
add_executable(aufgabe_9
     glew.c
     aufgabe_9.cpp   
     circle.cpp   
     mat2.cpp  
     window.cpp   
     vec2.cpp
  )

target_link_libraries(aufgabe_9
  glfw
  ${GLFW_LIBRARIES}
  nanovg
  ${OPENGL_LIBRARIES}
  )

add_dependencies(aufgabe_9 glfw nanovg ${COPY_BINARY})

#Build aufgabe_10
add_executable(aufgabe_10
     glew.c
     aufgabe_10.cpp   
     circle.cpp   
     mat2.cpp  
     window.cpp   
     vec2.cpp
  )

target_link_libraries(aufgabe_10
  glfw
  ${GLFW_LIBRARIES}
  nanovg
  ${OPENGL_LIBRARIES}
  )

add_dependencies(aufgabe_10 glfw nanovg ${COPY_BINARY})