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
        // Size: 0x1b00
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CCitadel_Ability_PrimaryWeapon_BebopVData : public source2sdk::server::CCitadel_Ability_PrimaryWeaponVData
        {
        public:
            // metadata: MPropertyStartGroup "Sounds"
            CSoundEventName m_strWindupSound; // 0x19c8            
            CSoundEventName m_strBeamStartSound; // 0x19d8            
            CSoundEventName m_strBeamLoopSound1; // 0x19e8            
            CSoundEventName m_strBeamLoopSound2; // 0x19f8            
            CSoundEventName m_strBeamStopSound; // 0x1a08            
            // metadata: MPropertyStartGroup "Visuals"
            // m_szWeaponBeamParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_szWeaponBeamParticle;
            char m_szWeaponBeamParticle[0xe0]; // 0x1a18            
            // metadata: MPropertyStartGroup "Misc"
            float m_flWindupRepeatCycle; // 0x1af8            
            uint8_t _pad1afc[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_PrimaryWeapon_BebopVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_PrimaryWeapon_BebopVData) == 0x1b00);
    };
};
