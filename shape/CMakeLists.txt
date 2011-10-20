
include_directories(../include)

set(SHAPE_LIB_SRCS
	square.c
	circle.c
	triangle.c
	rectangle.c
	shape.c)

add_library(shape ${SHAPE_LIB_SRCS})

target_link_libraries(shape m)
