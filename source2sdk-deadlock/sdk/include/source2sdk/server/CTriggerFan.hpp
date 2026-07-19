#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CBaseTrigger.hpp"
#include "source2sdk/server/CountdownTimer.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CInfoFan;
    };
};

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x10
        // Alignment: 0x10
        // Standard-layout class: false
        // Size: 0x9a0
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
        class CTriggerFan : public source2sdk::server::CBaseTrigger
        {
        public:
            // metadata: MNetworkEnable
            Vector m_vFanOriginOffset; // 0x8e0            
            // metadata: MNetworkEnable
            Vector m_vDirection; // 0x8ec            
            // metadata: MNetworkEnable
            bool m_bPushTowardsInfoTarget; // 0x8f8            
            // metadata: MNetworkEnable
            bool m_bPushAwayFromInfoTarget; // 0x8f9            
            uint8_t _pad08fa[0x6]; // 0x8fa
            // metadata: MNetworkEnable
            Quaternion m_qNoiseDelta; // 0x900            
            // metadata: MNetworkEnable
            // m_hInfoFan has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CInfoFan> m_hInfoFan;
            char m_hInfoFan[0x4]; // 0x910            
            // metadata: MNetworkEnable
            float m_flForce; // 0x914            
            // metadata: MNetworkEnable
            bool m_bFalloff; // 0x918            
            uint8_t _pad0919[0x7]; // 0x919
            // metadata: MNetworkEnable
            source2sdk::server::CountdownTimer m_RampTimer; // 0x920            
            VectorWS m_vFanOriginWS; // 0x938            
            Vector m_vFanOriginLS; // 0x944            
            Vector m_vFanEndLS; // 0x950            
            Vector m_vNoiseDirectionTarget; // 0x95c            
            CUtlSymbolLarge m_iszInfoFan; // 0x968            
            float m_flRopeForceScale; // 0x970            
            float m_flParticleForceScale; // 0x974            
            float m_flPlayerForce; // 0x978            
            bool m_bPlayerWindblock; // 0x97c            
            uint8_t _pad097d[0x3]; // 0x97d
            float m_flNPCForce; // 0x980            
            float m_flRampTime; // 0x984            
            float m_fNoiseDegrees; // 0x988            
            float m_fNoiseSpeed; // 0x98c            
            bool m_bPushPlayer; // 0x990            
            bool m_bRampDown; // 0x991            
            uint8_t _pad0992[0x2]; // 0x992
            std::int32_t m_nManagerFanIdx; // 0x994            
            uint8_t _pad0998[0x8];
            
            // Datamap fields:
            // void CTriggerFanPushThink; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CTriggerFan because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CTriggerFan) == 0x9a0);
    };
};
