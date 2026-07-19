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
        // Size: 0x5b0
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Ability_EarthSpirit_BoulderSmash : public source2sdk::server::CDOTABaseAbility
        {
        public:
            float speed; // 0x580            
            float rock_damage; // 0x584            
            float creep_multiplier; // 0x588            
            float radius; // 0x58c            
            float rock_search_aoe; // 0x590            
            float unit_distance; // 0x594            
            float rock_distance; // 0x598            
            std::int32_t m_nProjectileID; // 0x59c            
            // m_hCursorTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hCursorTarget;
            char m_hCursorTarget[0x4]; // 0x5a0            
            bool m_bUsedStone; // 0x5a4            
            uint8_t _pad05a5[0x3]; // 0x5a5
            // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hTarget;
            char m_hTarget[0x4]; // 0x5a8            
            bool m_bTargetStone; // 0x5ac            
            uint8_t _pad05ad[0x3];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_EarthSpirit_BoulderSmash because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Ability_EarthSpirit_BoulderSmash) == 0x5b0);
    };
};
