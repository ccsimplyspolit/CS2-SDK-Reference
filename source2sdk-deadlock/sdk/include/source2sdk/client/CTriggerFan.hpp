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
        // Size: 0xae0
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "Vector m_vFanOriginOffset"
        // static metadata: MNetworkVarNames "Vector m_vDirection"
        // static metadata: MNetworkVarNames "bool m_bPushTowardsInfoTarget"
        // static metadata: MNetworkVarNames "bool m_bPushAwayFromInfoTarget"
        // static metadata: MNetworkVarNames "Quaternion m_qNoiseDelta"
        // static metadata: MNetworkVarNames "CHandle< CInfoFan> m_hInfoFan"
        // static metadata: MNetworkVarNames "float m_flForce"
        // static metadata: MNetworkVarNames "bool m_bFalloff"
        // static metadata: MNetworkVarNames "CountdownTimer m_RampTimer"
        #pragma pack(push, 1)
        class CTriggerFan : public source2sdk::client::C_BaseTrigger
        {
        public:
            // metadata: MNetworkEnable
            Vector m_vFanOriginOffset; // 0xa78            
            // metadata: MNetworkEnable
            Vector m_vDirection; // 0xa84            
            // metadata: MNetworkEnable
            bool m_bPushTowardsInfoTarget; // 0xa90            
            // metadata: MNetworkEnable
            bool m_bPushAwayFromInfoTarget; // 0xa91            
            uint8_t _pad0a92[0xe]; // 0xa92
            // metadata: MNetworkEnable
            Quaternion m_qNoiseDelta; // 0xaa0            
            // metadata: MNetworkEnable
            // m_hInfoFan has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::CInfoFan> m_hInfoFan;
            char m_hInfoFan[0x4]; // 0xab0            
            // metadata: MNetworkEnable
            float m_flForce; // 0xab4            
            // metadata: MNetworkEnable
            bool m_bFalloff; // 0xab8            
            uint8_t _pad0ab9[0x7]; // 0xab9
            // metadata: MNetworkEnable
            source2sdk::client::CountdownTimer m_RampTimer; // 0xac0            
            uint8_t _pad0ad8[0x8];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CTriggerFan because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CTriggerFan) == 0xae0);
    };
};
