#include "application.h"
#include "can_device_protocol.h"


deviceProtocol::deviceProtocol(void):canDeviceProtocol(Application::DEVICE_ID, SYSCONFIG->getParam<QString>(SYS_CAN_PROCESS_PARAM, SYS_PROCESS_IP) ,  SYSCONFIG->getParam<uint>(SYS_CAN_PROCESS_PARAM, SYS_PROCESS_PORT))
{



}

