#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_BaseTrigger.hpp"
#include "source2sdk/client/CountdownTimer.hpp"
namespace source2sdk
{
    namespace client
    {
        struct CInfoFan;
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
        // Registered alignment: 0x10
        // Alignment: 0x10
        // Standard-layout class: false
        // Size: 0xbd0
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CTriggerFan : public source2sdk::client::C_BaseTrigger
        {
        public:
            Vector m_vFanOriginOffset; // 0xb70            
            Vector m_vDirection; // 0xb7c            
            bool m_bPushTowardsInfoTarget; // 0xb88            
            bool m_bPushAwayFromInfoTarget; // 0xb89            
            uint8_t _pad0b8a[0x6]; // 0xb8a
            Quaternion m_qNoiseDelta; // 0xb90            
            // m_hInfoFan has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::CInfoFan> m_hInfoFan;
            char m_hInfoFan[0x4]; // 0xba0            
            float m_flForce; // 0xba4            
            bool m_bFalloff; // 0xba8            
            uint8_t _pad0ba9[0x7]; // 0xba9
            source2sdk::client::CountdownTimer m_RampTimer; // 0xbb0            
            uint8_t _pad0bc8[0x8];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CTriggerFan because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CTriggerFan) == 0xbd0);
    };
};
