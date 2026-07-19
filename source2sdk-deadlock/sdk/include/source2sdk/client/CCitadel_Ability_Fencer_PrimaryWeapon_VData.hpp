#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadel_Ability_PrimaryWeaponVData.hpp"
#include "source2sdk/client/SlashInfo_t.hpp"
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
        // Size: 0x1c80
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CCitadel_Ability_Fencer_PrimaryWeapon_VData : public source2sdk::client::CCitadel_Ability_PrimaryWeaponVData
        {
        public:
            // metadata: MPropertyStartGroup "Visuals"
            // m_strSwipeTracerParticleRight has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_strSwipeTracerParticleRight;
            char m_strSwipeTracerParticleRight[0xe0]; // 0x19c0            
            // m_strSwipeTracerParticleRightMove has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_strSwipeTracerParticleRightMove;
            char m_strSwipeTracerParticleRightMove[0xe0]; // 0x1aa0            
            // m_strSwipeTracerParticleLeft has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_strSwipeTracerParticleLeft;
            char m_strSwipeTracerParticleLeft[0xe0]; // 0x1b80            
            float m_flMoveSlashThreshold; // 0x1c60            
            uint8_t _pad1c64[0x4]; // 0x1c64
            // metadata: MPropertyStartGroup "Gun"
            // m_vecSlashInfos has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::SlashInfo_t> m_vecSlashInfos;
            char m_vecSlashInfos[0x18]; // 0x1c68            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Fencer_PrimaryWeapon_VData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Ability_Fencer_PrimaryWeapon_VData) == 0x1c80);
    };
};
