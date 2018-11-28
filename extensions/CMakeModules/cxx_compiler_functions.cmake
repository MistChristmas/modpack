function (uksf_set_linker_options)
	if(CMAKE_COMPILER_IS_GNUCXX)
		# This target defaults to 32-bit on linux
		SET(CMAKE_CXX_FLAGS "-std=c++11 -march=i686 -m32 -O2 -s -fPIC -fpermissive")
		
		if(UKSF_LINK_TYPE STREQUAL "static")
			set(CMAKE_FIND_LIBRARY_SUFFIXES ".a")
			set(CMAKE_SHARED_LINKER_FLAGS "-static-libgcc -static-libstdc++")
		endif()
	elseif(MSVC)
		if(UKSF_LINK_TYPE STREQUAL "static")
			set(CMAKE_CXX_FLAGS_DEBUG "/D _DEBUG /MTd /Zi /Ob0 /Od /RTC1" PARENT_SCOPE)
			set(CMAKE_CXX_FLAGS_MINSIZEREL     "/MT /Ox /Ob1 /D NDEBUG" PARENT_SCOPE)
			set(CMAKE_CXX_FLAGS_RELEASE       "/MT /Ox /Ob2 /D NDEBUG" PARENT_SCOPE)
			set(CMAKE_CXX_FLAGS_RELWITHDEBINFO "/MT /Zi /Ox /Ob2 /D NDEBUG" PARENT_SCOPE)
		else()
			set(CMAKE_CXX_FLAGS_DEBUG "/D _DEBUG /MDd /Zi /Ob0 /Od /RTC1" PARENT_SCOPE)
			set(CMAKE_CXX_FLAGS_MINSIZEREL     "/MD /Ox /Ob1 /D NDEBUG" PARENT_SCOPE)
			set(CMAKE_CXX_FLAGS_RELEASE       "/MD /Ox /Ob2 /D NDEBUG" PARENT_SCOPE)
			set(CMAKE_CXX_FLAGS_RELWITHDEBINFO "/MD /Zi /Ox /Ob2 /D NDEBUG" PARENT_SCOPE)
		endif()
		
		set(CMAKE_EXE_LINKER_FLAGS_DEBUG "${CMAKE_EXE_LINKER_FLAGS_DEBUG} /NODEFAULTLIB:libcmt.lib")
		set(CMAKE_EXE_LINKER_FLAGS_MINSIZEREL "${CMAKE_EXE_LINKER_FLAGS_MINSIZEREL} /NODEFAULTLIB:libcmt.lib")
		set(CMAKE_EXE_LINKER_FLAGS_RELEASE "${CMAKE_EXE_LINKER_FLAGS_RELEASE} /NODEFAULTLIB:libcmt.lib")
		set(CMAKE_EXE_LINKER_FLAGS_RELWITHDEBINFO "${CMAKE_EXE_LINKER_FLAGS_RELWITHDEBINFO} /NODEFAULTLIB:libcmt.lib")
	endif()
endfunction()

function (uksf_set_build_output ) 
	set(EXECUTABLE_OUTPUT_PATH "${CMAKE_RUNTIME_OUTPUT_DIRECTORY}${UKSF_NAME}" PARENT_SCOPE)
	set(LIBRARY_OUTPUT_PATH  "${CMAKE_RUNTIME_OUTPUT_DIRECTORY}${UKSF_NAME}" PARENT_SCOPE)
endfunction()
