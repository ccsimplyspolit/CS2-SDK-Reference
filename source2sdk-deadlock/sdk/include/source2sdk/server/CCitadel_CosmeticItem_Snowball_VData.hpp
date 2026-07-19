#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CLevelProgressionDefinition.hpp"
#include "source2sdk/server/CBaseModifier.hpp"
#include "source2sdk/server/CitadelItemVData.hpp"

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
        // Size: 0x19f0
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CCitadel_CosmeticItem_Snowball_VData : public source2sdk::server::CitadelItemVData
        {
        public:
            // metadata: MPropertyStartGroup "Snowball Gameplay"
            float m_flMaxLevelDebuffDuration; // 0x18b8            
            uint8_t _pad18bc[0x4]; // 0x18bc
            source2sdk::client::CLevelProgressionDefinition m_progressionDamage; // 0x18c0            
            source2sdk::client::CLevelProgressionDefinition m_progressionCooldown; // 0x18f0            
            source2sdk::client::CLevelProgressionDefinition m_progressionSpeed; // 0x1920            
            source2sdk::client::CLevelProgressionDefinition m_progressionCharges; // 0x1950            
            source2sdk::client::CLevelProgressionDefinition m_progressionSnowballCount; // 0x1980            
            source2sdk::client::CLevelProgressionDefinition m_progressionRadius; // 0x19b0            
            // metadata: MPropertyStartGroup "Modifiers"
            // m_SnowballModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CBaseModifier> m_SnowballModifier;
            char m_SnowballModifier[0x10]; // 0x19e0            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_CosmeticItem_Snowball_VData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_CosmeticItem_Snowball_VData) == 0x19f0);
    };
};
