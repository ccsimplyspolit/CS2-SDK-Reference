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
        class CDOTA_Ability_Naga_Siren_Reel_In : public source2sdk::server::CDOTABaseAbility
        {
        public:
            float m_flLongestEnsnareDuration; // 0x580            
            uint8_t _pad0584[0x4]; // 0x584
            // affectedEntities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> affectedEntities;
            char affectedEntities[0x18]; // 0x588            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTA_Ability_Naga_Siren_Reel_In because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTA_Ability_Naga_Siren_Reel_In) == 0x5a0);
    };
};
