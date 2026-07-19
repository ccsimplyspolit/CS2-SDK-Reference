#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_CitadelBaseAbility.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_BaseEntity;
    };
};

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
        // Size: 0x1900
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "int m_nKillsEarned"
        // static metadata: MNetworkVarNames "int m_nAssistsEarned"
        #pragma pack(push, 1)
        class CCitadel_Ability_Drifter_Hunger : public source2sdk::client::C_CitadelBaseAbility
        {
        public:
            // m_vecCurrentTargets has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::client::C_BaseEntity>> m_vecCurrentTargets;
            char m_vecCurrentTargets[0x18]; // 0x11d8            
            uint8_t _pad11f0[0x4]; // 0x11f0
            // metadata: MNetworkEnable
            std::int32_t m_nKillsEarned; // 0x11f4            
            // metadata: MNetworkEnable
            std::int32_t m_nAssistsEarned; // 0x11f8            
            CUtlStringToken m_TypeIDDarkness; // 0x11fc            
            uint8_t _pad1200[0x700];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Drifter_Hunger because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Ability_Drifter_Hunger) == 0x1900);
    };
};
