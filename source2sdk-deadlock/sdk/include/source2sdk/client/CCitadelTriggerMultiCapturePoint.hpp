#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_BaseTrigger.hpp"
namespace source2sdk
{
    namespace client
    {
        struct CCitadelInWorldEventTimer;
    };
};

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0xaa0
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "uint8 m_nEnableState"
        #pragma pack(push, 1)
        class CCitadelTriggerMultiCapturePoint : public source2sdk::client::C_BaseTrigger
        {
        public:
            uint8_t _pad0a78[0x18]; // 0xa78
            source2sdk::client::CCitadelInWorldEventTimer* m_pUIWorldEventTimer; // 0xa90            
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnMultiEnableStateChanged"
            std::uint8_t m_nEnableState; // 0xa98            
            uint8_t _pad0a99[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadelTriggerMultiCapturePoint because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadelTriggerMultiCapturePoint) == 0xaa0);
    };
};
