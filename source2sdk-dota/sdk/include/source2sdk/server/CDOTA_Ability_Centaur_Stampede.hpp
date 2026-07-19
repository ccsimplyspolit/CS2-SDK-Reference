#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CDOTABaseAbility.hpp"
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
        // Size: 0x5b8
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Ability_Centaur_Stampede : public source2sdk::server::CDOTABaseAbility
        {
        public:
            float duration; // 0x580            
            std::int32_t base_damage; // 0x584            
            float strength_damage; // 0x588            
            float slow_duration; // 0x58c            
            float scepter_bonus_duration; // 0x590            
            uint8_t _pad0594[0x4]; // 0x594
            // m_hHitEntities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_hHitEntities;
            char m_hHitEntities[0x18]; // 0x598            
            std::int32_t m_nHeroesHit; // 0x5b0            
            bool m_bHitInvisibleHero; // 0x5b4            
            uint8_t _pad05b5[0x3];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_Centaur_Stampede because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Ability_Centaur_Stampede) == 0x5b8);
    };
};
