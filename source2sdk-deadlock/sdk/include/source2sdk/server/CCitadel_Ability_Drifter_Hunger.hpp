#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CCitadelBaseAbility.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseEntity;
    };
};

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
        // Size: 0x1698
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "int m_nKillsEarned"
        // static metadata: MNetworkVarNames "int m_nAssistsEarned"
        #pragma pack(push, 1)
        class CCitadel_Ability_Drifter_Hunger : public source2sdk::server::CCitadelBaseAbility
        {
        public:
            // m_vecCurrentTargets has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_vecCurrentTargets;
            char m_vecCurrentTargets[0x18]; // 0xf70            
            uint8_t _pad0f88[0x4]; // 0xf88
            // metadata: MNetworkEnable
            std::int32_t m_nKillsEarned; // 0xf8c            
            // metadata: MNetworkEnable
            std::int32_t m_nAssistsEarned; // 0xf90            
            CUtlStringToken m_TypeIDDarkness; // 0xf94            
            uint8_t _pad0f98[0x700];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Drifter_Hunger because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_Drifter_Hunger) == 0x1698);
    };
};
