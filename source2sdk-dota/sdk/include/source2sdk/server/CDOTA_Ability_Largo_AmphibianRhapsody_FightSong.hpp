#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CDOTA_Ability_Largo_AmphibianRhapsody_Song.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x5a0
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Ability_Largo_AmphibianRhapsody_FightSong : public source2sdk::server::CDOTA_Ability_Largo_AmphibianRhapsody_Song
        {
        public:
            float radius; // 0x590            
            float battle_burst_duration; // 0x594            
            std::int32_t burst_damage; // 0x598            
            std::int32_t damage_per_stack; // 0x59c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_Largo_AmphibianRhapsody_FightSong because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Ability_Largo_AmphibianRhapsody_FightSong) == 0x5a0);
    };
};
