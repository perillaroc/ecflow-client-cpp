#pragma once
#include <string>

void runWatchCommand(
        const std::string &ecflow_host,
        const std::string &ecflow_port,
        const std::string &redis_host,
        int redis_port);
