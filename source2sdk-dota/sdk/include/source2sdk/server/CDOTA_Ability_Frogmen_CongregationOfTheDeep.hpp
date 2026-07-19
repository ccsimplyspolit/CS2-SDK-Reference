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
        // Size: 0x5c8
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Ability_Frogmen_CongregationOfTheDeep : public source2sdk::server::CDOTABaseAbility
        {
        public:
            // hAlreadyHitList has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> hAlreadyHitList;
            char hAlreadyHitList[0x18]; // 0x580            
            float duration; // 0x598            
            std::int32_t speed; // 0x59c            
            float damage; // 0x5a0            
            float range; // 0x5a4            
            std::int32_t projectile_count; // 0x5a8            
            std::int32_t projectile_width; // 0x5ac            
            float neutral_shared_cooldown; // 0x5b0            
            uint8_t _pad05b4[0x14];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_Frogmen_CongregationOfTheDeep because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Ability_Frogmen_CongregationOfTheDeep) == 0x5c8);
    };
};
