#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "source2sdk/server/CCitadelModifierVData.hpp"

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
        // Size: 0x930
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CModifier_Operative_UmbrellaManeuver_AirHang_VData : public source2sdk::server::CCitadelModifierVData
        {
        public:
            // metadata: MPropertyStartGroup "Visuals"
            // m_ExplodeParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ExplodeParticle;
            char m_ExplodeParticle[0xe0]; // 0x750            
            // m_TracerParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_TracerParticle;
            char m_TracerParticle[0xe0]; // 0x830            
            // metadata: MPropertyStartGroup "Sounds"
            CSoundEventName m_ExplodeSound; // 0x910            
            // metadata: MPropertyStartGroup "Gameplay"
            float m_flAirDrag; // 0x920            
            float m_flAirSpeed; // 0x924            
            float m_flFallSpeed; // 0x928            
            uint8_t _pad092c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CModifier_Operative_UmbrellaManeuver_AirHang_VData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CModifier_Operative_UmbrellaManeuver_AirHang_VData) == 0x930);
    };
};
