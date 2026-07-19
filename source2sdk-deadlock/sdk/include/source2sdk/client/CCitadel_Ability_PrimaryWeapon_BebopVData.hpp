#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadel_Ability_PrimaryWeaponVData.hpp"
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
        // Size: 0x1af8
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CCitadel_Ability_PrimaryWeapon_BebopVData : public source2sdk::client::CCitadel_Ability_PrimaryWeaponVData
        {
        public:
            // metadata: MPropertyStartGroup "Sounds"
            CSoundEventName m_strWindupSound; // 0x19c0            
            CSoundEventName m_strBeamStartSound; // 0x19d0            
            CSoundEventName m_strBeamLoopSound1; // 0x19e0            
            CSoundEventName m_strBeamLoopSound2; // 0x19f0            
            CSoundEventName m_strBeamStopSound; // 0x1a00            
            // metadata: MPropertyStartGroup "Visuals"
            // m_szWeaponBeamParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_szWeaponBeamParticle;
            char m_szWeaponBeamParticle[0xe0]; // 0x1a10            
            // metadata: MPropertyStartGroup "Misc"
            float m_flWindupRepeatCycle; // 0x1af0            
            uint8_t _pad1af4[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_PrimaryWeapon_BebopVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Ability_PrimaryWeapon_BebopVData) == 0x1af8);
    };
};
