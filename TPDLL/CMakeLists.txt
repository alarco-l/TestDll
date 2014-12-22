cmake_minimum_required(VERSION 2.6)
project(test)

add_executable(
	test
	DlLoader.hpp
	DlLoader.cpp
	IDLL.h
	IDlLoader.h
	main.cpp
	)
set(EXECUTABLE_OUTPUT_PATH ..)