get_filename_component(DIR_NAME "${CMAKE_CURRENT_LIST_DIR}" NAME)

add_executable(
	"${DIR_NAME}"
	main.cpp
)
