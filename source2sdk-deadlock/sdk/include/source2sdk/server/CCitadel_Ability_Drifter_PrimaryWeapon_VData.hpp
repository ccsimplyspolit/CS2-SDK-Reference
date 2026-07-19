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
        // Size: 0x1ba8
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CCitadel_Ability_Drifter_PrimaryWeapon_VData : public source2sdk::server::CCitadel_Ability_PrimaryWeaponVData
        {
        public:
            // metadata: MPropertyStartGroup "Visuals"
            // m_strSwipeTracerParticleRight has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_strSwipeTracerParticleRight;
            char m_strSwipeTracerParticleRight[0xe0]; // 0x19c8            
            // m_strSwipeTracerParticleLeft has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_strSwipeTracerParticleLeft;
            char m_strSwipeTracerParticleLeft[0xe0]; // 0x1aa8            
            // metadata: MPropertyStartGroup "Gun"
            // m_vecOriginOffsetsLeft has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<Vector2D> m_vecOriginOffsetsLeft;
            char m_vecOriginOffsetsLeft[0x18]; // 0x1b88            
            float m_flCenterBulletRadiusOverride; // 0x1ba0            
            uint8_t _pad1ba4[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Ability_Drifter_PrimaryWeapon_VData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Ability_Drifter_PrimaryWeapon_VData) == 0x1ba8);
    };
};
