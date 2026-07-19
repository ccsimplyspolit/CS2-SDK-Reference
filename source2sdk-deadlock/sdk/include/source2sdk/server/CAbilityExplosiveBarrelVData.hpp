#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "source2sdk/server/CitadelAbilityVData.hpp"

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
        // Size: 0x1c08
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CAbilityExplosiveBarrelVData : public source2sdk::server::CitadelAbilityVData
        {
        public:
            // metadata: MPropertyStartGroup "Visuals"
            // m_BarrelExplodeParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_BarrelExplodeParticle;
            char m_BarrelExplodeParticle[0xe0]; // 0x1818            
            // m_MirvExplodeParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_MirvExplodeParticle;
            char m_MirvExplodeParticle[0xe0]; // 0x18f8            
            // m_BarrelArmedParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_BarrelArmedParticle;
            char m_BarrelArmedParticle[0xe0]; // 0x19d8            
            // m_BarrelReadyToExplodeParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_BarrelReadyToExplodeParticle;
            char m_BarrelReadyToExplodeParticle[0xe0]; // 0x1ab8            
            // metadata: MPropertyStartGroup "Sounds"
            CSoundEventName m_strExplodeSound; // 0x1b98            
            CSoundEventName m_strMirvExplodeSound; // 0x1ba8            
            CSoundEventName m_strRiccochetSound; // 0x1bb8            
            CSoundEventName m_strBarrelSoundLp; // 0x1bc8            
            CSoundEventName m_strBarrelLaunchSound; // 0x1bd8            
            CSoundEventName m_strBarrelMeleedSound; // 0x1be8            
            CSoundEventName m_strBarrelArmedSound; // 0x1bf8            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CAbilityExplosiveBarrelVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CAbilityExplosiveBarrelVData) == 0x1c08);
    };
};
