#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "source2sdk/server/CCitadel_Ability_PrimaryWeaponVData.hpp"

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
        // Size: 0x1ac8
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CCitadel_Ability_FamiliarAltWeaponVData : public source2sdk::server::CCitadel_Ability_PrimaryWeaponVData
        {
        public:
            // metadata: MPropertyStartGroup "Visuals"
            // m_PendingBulletParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_PendingBulletParticle;
            char m_PendingBulletParticle[0xe0]; // 0x19c8            
            // metadata: MPropertyStartGroup "Sounds"
            CSoundEventName m_strAddPendingBulletSound; // 0x1aa8            
            CSoundEventName m_strFirePendingBulletSound; // 0x1ab8            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_FamiliarAltWeaponVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_FamiliarAltWeaponVData) == 0x1ac8);
    };
};
