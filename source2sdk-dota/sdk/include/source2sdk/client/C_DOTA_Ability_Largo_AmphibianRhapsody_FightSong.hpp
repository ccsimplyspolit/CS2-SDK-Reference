#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_DOTA_Ability_Largo_AmphibianRhapsody_Song.hpp"

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
        // Size: 0x6c8
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class C_DOTA_Ability_Largo_AmphibianRhapsody_FightSong : public source2sdk::client::C_DOTA_Ability_Largo_AmphibianRhapsody_Song
        {
        public:
            float radius; // 0x6b8            
            float battle_burst_duration; // 0x6bc            
            std::int32_t burst_damage; // 0x6c0            
            std::int32_t damage_per_stack; // 0x6c4            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTA_Ability_Largo_AmphibianRhapsody_FightSong because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTA_Ability_Largo_AmphibianRhapsody_FightSong) == 0x6c8);
    };
};
