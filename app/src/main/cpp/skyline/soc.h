// SPDX-License-Identifier: MPL-2.0
// Copyright © 2020 Skyline Team and Contributors (https://github.com/skyline-emu/)

#pragma once

#include "soc/host1x.h"
#include "soc/gm20b/gpfifo.h"

namespace skyline::soc {
    /**
     * @brief An interface into all emulated components of the Tegra X1 SoC
     * @note Refer to the Tegra X1 Processor Block Diagram (1.2) for more information
     */
    class SOC {
      public:
        host1x::Host1X host1x;

        SOC(const DeviceState &state) {}
    };
}
