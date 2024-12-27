#include "DustCollector.h"
#include "Logging.h"
//#include "RF433send.h"


//RfSend *tx_dust;
//const byte dataOn[] = { 0x34, 0x12 };
//const byte dataOff[] = { 0x34, 0x0a };
//const int TXDATA_PIN = 14;

void initDust() {
    log_info("Dust collector init");
  //  tx_dust = rfsend_builder(RfSendEncoding::TRIBIT, TXDATA_PIN, RFSEND_DEFAULT_CONVENTION, 4, nullptr, 4482, 0, 0, 0, 199, 591, 0, 0, 211, 4482, 15);  
}


void startDust() {
    log_info("Dust collector start");
    //tx_dust->send(sizeof(dataOn), dataOn);
}

void stopDust() {
    log_info("Dust collector stop");
    //tx_dust->send(sizeof(dataOff), dataOn);
}

