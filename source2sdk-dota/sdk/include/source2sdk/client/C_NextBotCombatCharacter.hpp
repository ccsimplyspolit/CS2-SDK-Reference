#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_BaseCombatCharacter.hpp"
#include "source2sdk/client/CountdownTimer.hpp"

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
        // Size: 0xb88
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class C_NextBotCombatCharacter : public source2sdk::client::C_BaseCombatCharacter
        {
        public:
            source2sdk::client::CountdownTimer m_shadowTimer; // 0xb60            
            bool m_bInFrustum; // 0xb78            
            uint8_t _pad0b79[0x3]; // 0xb79
            std::int32_t m_nInFrustumFrame; // 0xb7c            
            float m_flFrustumDistanceSqr; // 0xb80            
            std::uint8_t m_nLod; // 0xb84            
            uint8_t _pad0b85[0x3];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_NextBotCombatCharacter because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_NextBotCombatCharacter) == 0xb88);
    };
};
