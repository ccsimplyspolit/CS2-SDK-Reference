#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadelModifier.hpp"
#include "source2sdk/client/CitadelAbilityVData.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeCModel.hpp"
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
        // Size: 0x1a40
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CCitadel_Ability_Necro_GraveStoneVData : public source2sdk::client::CitadelAbilityVData
        {
        public:
            // metadata: MPropertyStartGroup "Visuals"
            // m_CastWarningParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_CastWarningParticle;
            char m_CastWarningParticle[0xe0]; // 0x1818            
            // metadata: MPropertyStartGroup "Sounds"
            CSoundEventName m_strSummonGravestoneSound; // 0x18f8            
            // metadata: MPropertyStartGroup "Modifiers"
            // m_GraveStoneModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_GraveStoneModifier;
            char m_GraveStoneModifier[0x10]; // 0x1908            
            // m_ZombieSummonModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::client::CCitadelModifier> m_ZombieSummonModifier;
            char m_ZombieSummonModifier[0x10]; // 0x1918            
            // metadata: MPropertyStartGroup "Gameplay"
            // m_BlockerModel has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeCModel>> m_BlockerModel;
            char m_BlockerModel[0xe0]; // 0x1928            
            float m_flStoneSubmergeMinDepth; // 0x1a08            
            float m_flStoneSubmergeMaxDepth; // 0x1a0c            
            float m_flStonePitchMinOffset; // 0x1a10            
            float m_flStonePitchMaxOffset; // 0x1a14            
            float m_flStoneRollMinOffset; // 0x1a18            
            float m_flStoneRollMaxOffset; // 0x1a1c            
            float m_flStoneYawMinOffset; // 0x1a20            
            float m_flStoneYawMaxOffset; // 0x1a24            
            float m_flDropDownRate; // 0x1a28            
            float m_flClimbHeight; // 0x1a2c            
            float m_flDistanceAboveGround; // 0x1a30            
            float m_flNavMeshSearchRadius; // 0x1a34            
            bool m_bAllowStackingDamageFromGun; // 0x1a38            
            uint8_t _pad1a39[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Necro_GraveStoneVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Ability_Necro_GraveStoneVData) == 0x1a40);
    };
};
