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
        // Size: 0x9b0
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CTriggerFan : public source2sdk::server::CBaseTrigger
        {
        public:
            Vector m_vFanOriginOffset; // 0x8e8            
            Vector m_vDirection; // 0x8f4            
            bool m_bPushTowardsInfoTarget; // 0x900            
            bool m_bPushAwayFromInfoTarget; // 0x901            
            uint8_t _pad0902[0xe]; // 0x902
            Quaternion m_qNoiseDelta; // 0x910            
            // m_hInfoFan has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CInfoFan> m_hInfoFan;
            char m_hInfoFan[0x4]; // 0x920            
            float m_flForce; // 0x924            
            bool m_bFalloff; // 0x928            
            uint8_t _pad0929[0x7]; // 0x929
            source2sdk::server::CountdownTimer m_RampTimer; // 0x930            
            VectorWS m_vFanOriginWS; // 0x948            
            Vector m_vFanOriginLS; // 0x954            
            Vector m_vFanEndLS; // 0x960            
            Vector m_vNoiseDirectionTarget; // 0x96c            
            CUtlSymbolLarge m_iszInfoFan; // 0x978            
            float m_flRopeForceScale; // 0x980            
            float m_flParticleForceScale; // 0x984            
            float m_flPlayerForce; // 0x988            
            bool m_bPlayerWindblock; // 0x98c            
            uint8_t _pad098d[0x3]; // 0x98d
            float m_flNPCForce; // 0x990            
            float m_flRampTime; // 0x994            
            float m_fNoiseDegrees; // 0x998            
            float m_fNoiseSpeed; // 0x99c            
            bool m_bPushPlayer; // 0x9a0            
            bool m_bRampDown; // 0x9a1            
            uint8_t _pad09a2[0x2]; // 0x9a2
            std::int32_t m_nManagerFanIdx; // 0x9a4            
            uint8_t _pad09a8[0x8];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CTriggerFan because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CTriggerFan) == 0x9b0);
    };
};
