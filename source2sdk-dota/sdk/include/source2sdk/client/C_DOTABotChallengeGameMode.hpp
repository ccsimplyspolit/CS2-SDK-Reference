#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_DOTABaseGameMode.hpp"

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
        // Size: 0x7e0
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class C_DOTABotChallengeGameMode : public source2sdk::client::C_DOTABaseGameMode
        {
        public:
            bool m_bRuleAncientsDuel; // 0x7d8            
            uint8_t _pad07d9[0x3]; // 0x7d9
            float m_flEndgameTime; // 0x7dc            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTABotChallengeGameMode because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTABotChallengeGameMode) == 0x7e0);
    };
};
