#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CPlayer_MovementServices.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x278
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "float32 m_flFallVelocity"
        #pragma pack(push, 1)
        class CPlayer_MovementServices_Humanoid : public source2sdk::server::CPlayer_MovementServices
        {
        public:
            float m_flStepSoundTime; // 0x240            
            // metadata: MNetworkEnable
            // metadata: MNetworkMinValue "-4096,000000"
            // metadata: MNetworkMaxValue "4096,000000"
            // metadata: MNetworkEncodeFlags "4"
            // metadata: MNetworkBitCount "17"
            float m_flFallVelocity; // 0x244            
            // metadata: MNotSaved
            Vector m_groundNormal; // 0x248            
            float m_flSurfaceFriction; // 0x254            
            // metadata: MNotSaved
            CUtlStringToken m_surfaceProps; // 0x258            
            uint8_t _pad025c[0xc]; // 0x25c
            std::int32_t m_nStepside; // 0x268            
            Vector m_vecSmoothedVelocity; // 0x26c            
            
            // Datamap fields:
            // void m_pSurfaceData; // 0x260
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPlayer_MovementServices_Humanoid because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CPlayer_MovementServices_Humanoid) == 0x278);
    };
};
