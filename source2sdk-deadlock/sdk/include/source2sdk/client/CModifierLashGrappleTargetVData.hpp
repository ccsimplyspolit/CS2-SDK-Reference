#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadelModifierVData.hpp"
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
        // Size: 0xa00
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CModifierLashGrappleTargetVData : public source2sdk::client::CCitadelModifierVData
        {
        public:
            // metadata: MPropertyStartGroup "Visuals"
            // m_LockingOnParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_LockingOnParticle;
            char m_LockingOnParticle[0xe0]; // 0x750            
            // m_LockedOnParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_LockedOnParticle;
            char m_LockedOnParticle[0xe0]; // 0x830            
            // m_WarningParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_WarningParticle;
            char m_WarningParticle[0xe0]; // 0x910            
            // metadata: MPropertyStartGroup "Sounds"
            CSoundEventName m_strVictimLockonSound; // 0x9f0            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CModifierLashGrappleTargetVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CModifierLashGrappleTargetVData) == 0xa00);
    };
};
