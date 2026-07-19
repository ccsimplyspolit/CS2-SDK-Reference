#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CPlayerPawnComponent.hpp"
#include "source2sdk/entity2/GameTick_t.hpp"

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
        // Size: 0xe8
        // Has VTable
        #pragma pack(push, 1)
        class CCSPlayer_AimPunchServices : public source2sdk::client::CPlayerPawnComponent
        {
        public:
            source2sdk::entity2::GameTick_t m_predictableBaseTick; // 0x48            
            float m_predictableBaseTickInterpAmount; // 0x4c            
            QAngle m_predictableBaseAngle; // 0x50            
            QAngle m_predictableBaseAngleVel; // 0x5c            
            uint8_t _pad0068[0x38]; // 0x68
            source2sdk::entity2::GameTick_t m_unpredictableBaseTick; // 0xa0            
            QAngle m_unpredictableBaseAngle; // 0xa4            
            uint8_t _pad00b0[0x38];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCSPlayer_AimPunchServices because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCSPlayer_AimPunchServices) == 0xe8);
    };
};
