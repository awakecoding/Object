include_directories(../include)

add_executable(test
	test.c)

target_link_libraries(test shape)
