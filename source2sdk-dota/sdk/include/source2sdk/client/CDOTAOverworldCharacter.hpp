#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CDOTAOverworldCharacterBase.hpp"
#include "source2sdk/client/CDOTAOverworldCharacterConditional.hpp"
#include "source2sdk/client/OverworldHeroID_t.hpp"

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
        // Standard-layout class: true
        // Size: 0x88
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MVDataRoot
        #pragma pack(push, 1)
        class CDOTAOverworldCharacter
        {
        public:
            uint8_t _pad0000[0x8]; // 0x0
            // metadata: MPropertyDescription "If set, character will appear behind the specified hero in a traveling party, as long as 1 node meets the conditionals."
            source2sdk::client::CDOTAOverworldCharacterBase m_appearance; // 0x8            
            source2sdk::client::CDOTAOverworldCharacterConditional m_conditions; // 0x40            
            source2sdk::client::OverworldHeroID_t m_unHeroPartyID; // 0x60            
            uint8_t _pad0061[0x7]; // 0x61
            source2sdk::client::CDOTAOverworldCharacterConditional m_partyConditions; // 0x68            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::CDOTAOverworldCharacter, m_appearance) == 0x8);
        static_assert(offsetof(source2sdk::client::CDOTAOverworldCharacter, m_conditions) == 0x40);
        static_assert(offsetof(source2sdk::client::CDOTAOverworldCharacter, m_unHeroPartyID) == 0x60);
        static_assert(offsetof(source2sdk::client::CDOTAOverworldCharacter, m_partyConditions) == 0x68);
        
        static_assert(sizeof(source2sdk::client::CDOTAOverworldCharacter) == 0x88);
    };
};
