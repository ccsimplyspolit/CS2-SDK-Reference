#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CitadelAbilityVData.hpp"
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
        // Size: 0x1a08
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CAbilityTokamakHeatSinksInherentVData : public source2sdk::client::CitadelAbilityVData
        {
        public:
            // metadata: MPropertyStartGroup "Visuals"
            // m_HotTracerParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_HotTracerParticle;
            char m_HotTracerParticle[0xe0]; // 0x1818            
            // m_HotWeaponFxParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_HotWeaponFxParticle;
            char m_HotWeaponFxParticle[0xe0]; // 0x18f8            
            // metadata: MPropertyStartGroup "Sounds"
            CSoundEventName m_strHotWeaponShootSound; // 0x19d8            
            CSoundEventName m_strOverheatRed; // 0x19e8            
            CSoundEventName m_strOverheatFull; // 0x19f8            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CAbilityTokamakHeatSinksInherentVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CAbilityTokamakHeatSinksInherentVData) == 0x1a08);
    };
};
