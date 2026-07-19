#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x4
        // Alignment: 0x4
        // Standard-layout class: true
        // Size: 0x14
        // Has Trivial Destructor
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct TrooperVsConfig_t
        {
        public:
            // metadata: MPropertyDescription "DPS dealt to enemy at the start of the match. Leave the value as 0 to use Beam Weapon values."
            float m_flBaseDPS; // 0x0            
            // metadata: MPropertyDescription "DPS dealt to enemy at "End DPS Time in Seconds". Moments in between start and end will be lerped DPS."
            float m_flEndDPS; // 0x4            
            // metadata: MPropertyDescription "Time when DPS dealt to enemy reaches "End DPS". Leave the value as 0 to stay at "Start DPS" all match."
            float m_flEndDPSTimeInSeconds; // 0x8            
            // metadata: MPropertyDescription "Limit engagement range of Trooper vs Enemy. Final result will be the minimum of "Max Range", "Sight Range NPCs" and "Beam Weapon or Boss Weapon : Weapon Info : Firing Behavior : Range". Leave at 0 to not apply."
            float m_flMaxRange; // 0xc            
            // metadata: MPropertyDescription "Percent of damage resisted when attacked by Enemy."
            float m_flDamageResist; // 0x10            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::TrooperVsConfig_t, m_flBaseDPS) == 0x0);
        static_assert(offsetof(source2sdk::client::TrooperVsConfig_t, m_flEndDPS) == 0x4);
        static_assert(offsetof(source2sdk::client::TrooperVsConfig_t, m_flEndDPSTimeInSeconds) == 0x8);
        static_assert(offsetof(source2sdk::client::TrooperVsConfig_t, m_flMaxRange) == 0xc);
        static_assert(offsetof(source2sdk::client::TrooperVsConfig_t, m_flDamageResist) == 0x10);
        
        static_assert(sizeof(source2sdk::client::TrooperVsConfig_t) == 0x14);
    };
};
