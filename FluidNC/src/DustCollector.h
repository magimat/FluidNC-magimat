
#pragma once

#include "Configuration/Configurable.h"
#include "RF433send.h"

class DustCollector : public Configuration::Configurable {

    RfSend *tx_dust;
    
public:
    DustCollector() = default;


    void init();

    void start();
    void stop();

    // Configuration handlers.
    void group(Configuration::HandlerBase& handler) override;

    ~DustCollector() = default;
};
