#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Enumerator count: 11
        // Alignment: 4
        // Size: 0x4
        enum class EGCBaseClientMsg : std::uint32_t
        {
            k_EMsgGCClientWelcome = 0xfa4,
            k_EMsgGCServerWelcome = 0xfa5,
            k_EMsgGCClientHello = 0xfa6,
            k_EMsgGCServerHello = 0xfa7,
            k_EMsgGCClientConnectionStatus = 0xfa9,
            k_EMsgGCServerConnectionStatus = 0xfaa,
            k_EMsgGCClientHelloPartner = 0xfab,
            k_EMsgGCClientHelloPW = 0xfac,
            k_EMsgGCClientHelloR2 = 0xfad,
            k_EMsgGCClientHelloR3 = 0xfae,
            k_EMsgGCClientHelloR4 = 0xfaf,
        };
    };
};
