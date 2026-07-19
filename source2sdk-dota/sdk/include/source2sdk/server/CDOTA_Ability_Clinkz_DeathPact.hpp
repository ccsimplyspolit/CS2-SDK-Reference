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
        // Size: 0x5a0
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTA_Ability_Clinkz_DeathPact : public source2sdk::server::CDOTABaseAbility
        {
        public:
            std::int32_t m_nDevourFirstSlot; // 0x580            
            bool m_bGoToTargetPosition; // 0x584            
            uint8_t _pad0585[0x3]; // 0x585
            // m_hSkeletonSummons has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_hSkeletonSummons;
            char m_hSkeletonSummons[0x18]; // 0x588            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_Clinkz_DeathPact because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Ability_Clinkz_DeathPact) == 0x5a0);
    };
};
