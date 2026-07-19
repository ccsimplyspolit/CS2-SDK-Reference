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
        // Size: 0x1100
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CTriggerFan : public source2sdk::client::C_BaseTrigger
        {
        public:
            Vector m_vFanOriginOffset; // 0x1098            
            Vector m_vDirection; // 0x10a4            
            bool m_bPushTowardsInfoTarget; // 0x10b0            
            bool m_bPushAwayFromInfoTarget; // 0x10b1            
            uint8_t _pad10b2[0xe]; // 0x10b2
            Quaternion m_qNoiseDelta; // 0x10c0            
            // m_hInfoFan has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::CInfoFan> m_hInfoFan;
            char m_hInfoFan[0x4]; // 0x10d0            
            float m_flForce; // 0x10d4            
            bool m_bFalloff; // 0x10d8            
            uint8_t _pad10d9[0x7]; // 0x10d9
            source2sdk::client::CountdownTimer m_RampTimer; // 0x10e0            
            uint8_t _pad10f8[0x8];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CTriggerFan because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CTriggerFan) == 0x1100);
    };
};
