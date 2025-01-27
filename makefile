all: git_submodule mavlink_control mavlink_send mavlink_receive

mavlink_send: mavlink_send.cpp serial_port.cpp udp_port.cpp autopilot_interface.cpp
	g++ -g -Wall -I mavlink/include/mavlink/v2.0 mavlink_send.cpp serial_port.cpp udp_port.cpp autopilot_interface.cpp -o mavlink_send -lpthread
mavlink_receive: mavlink_receive.cpp serial_port.cpp udp_port.cpp autopilot_interface.cpp
	g++ -g -Wall -I mavlink/include/mavlink/v2.0 mavlink_receive.cpp serial_port.cpp udp_port.cpp autopilot_interface.cpp -o mavlink_receive -lpthread

mavlink_control: mavlink_control.cpp serial_port.cpp udp_port.cpp autopilot_interface.cpp
	g++ -g -Wall -I mavlink/include/mavlink/v2.0 mavlink_control.cpp serial_port.cpp udp_port.cpp autopilot_interface.cpp -o mavlink_control -lpthread

git_submodule:
	git submodule update --init --recursive

clean:
	 rm -rf *o mavlink_control
