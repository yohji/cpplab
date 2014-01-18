ADD_DEFINITIONS(-Wall -O2)

ADD_EXECUTABLE(free_test FreeTest.cpp)
ADD_EXECUTABLE(application_test ApplicationTest.cpp)
ADD_EXECUTABLE(logger_test LoggerTest.cpp)
ADD_EXECUTABLE(monitor_test MonitorTest.cpp)
ADD_EXECUTABLE(number_test NumberTest.cpp)

TARGET_LINK_LIBRARIES(application_test cpplablib)
TARGET_LINK_LIBRARIES(logger_test cpplablib)
TARGET_LINK_LIBRARIES(monitor_test cpplablib)
TARGET_LINK_LIBRARIES(number_test cpplablib)
