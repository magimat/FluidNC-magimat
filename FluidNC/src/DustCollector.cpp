 #include "DustCollector.h"
#include "Logging.h"
#include "RF433send.h"


void DustCollector::init() {
    log_info("Dust collector init");
    tx_dust = rfsend_builder(RfSendEncoding::TRIBIT, 14, RFSEND_DEFAULT_CONVENTION, 4, nullptr, 4482, 0, 0, 0, 199, 591, 0, 0, 211, 4482, 15);  
}

void DustCollector::start() {
    log_info("Dust collector start");
    byte dataOn[] = { 0x34, 0x12 };
    tx_dust->send(sizeof(dataOn), dataOn);
}

void DustCollector::stop() {
    log_info("Dust collector stop");
    byte dataOff[] = { 0x34, 0x0a };
    tx_dust->send(sizeof(dataOff), dataOff);
}


void DustCollector::group(Configuration::HandlerBase& handler) {
}