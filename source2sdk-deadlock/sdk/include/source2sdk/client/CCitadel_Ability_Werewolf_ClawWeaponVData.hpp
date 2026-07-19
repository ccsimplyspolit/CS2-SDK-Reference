#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadel_Ability_PrimaryWeaponVData.hpp"
#include "source2sdk/client/ClawSwipeInfo_t.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"

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
        // Size: 0x1ba8
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CCitadel_Ability_Werewolf_ClawWeaponVData : public source2sdk::client::CCitadel_Ability_PrimaryWeaponVData
        {
        public:
            // metadata: MPropertyStartGroup "Visuals"
            // m_strSwipeParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_strSwipeParticle;
            char m_strSwipeParticle[0xe0]; // 0x19c0            
            // m_strSwipeHitParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_strSwipeHitParticle;
            char m_strSwipeHitParticle[0xe0]; // 0x1aa0            
            // metadata: MPropertyStartGroup "Gun"
            // m_vecClawSwipeInfos has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::ClawSwipeInfo_t> m_vecClawSwipeInfos;
            char m_vecClawSwipeInfos[0x18]; // 0x1b80            
            // metadata: MPropertyStartGroup "Sounds"
            CSoundEventName m_strSwipeHitSound; // 0x1b98            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Werewolf_ClawWeaponVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Ability_Werewolf_ClawWeaponVData) == 0x1ba8);
    };
};
