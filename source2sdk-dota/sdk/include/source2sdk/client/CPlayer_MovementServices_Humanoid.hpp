#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CPlayer_MovementServices.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x288
        // Has VTable
        #pragma pack(push, 1)
        class CPlayer_MovementServices_Humanoid : public source2sdk::client::CPlayer_MovementServices
        {
        public:
            float m_flStepSoundTime; // 0x258            
            float m_flFallVelocity; // 0x25c            
            // metadata: MNotSaved
            Vector m_groundNormal; // 0x260            
            float m_flSurfaceFriction; // 0x26c            
            // metadata: MNotSaved
            CUtlStringToken m_surfaceProps; // 0x270            
            uint8_t _pad0274[0xc]; // 0x274
            std::int32_t m_nStepside; // 0x280            
            uint8_t _pad0284[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CPlayer_MovementServices_Humanoid because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CPlayer_MovementServices_Humanoid) == 0x288);
    };
};
